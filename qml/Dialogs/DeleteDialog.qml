/*
 * Copyright (C) 2021 MatsyaOS Team.
 *
 * Author:     Reion Wong <reionwong@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.12
import MatsyaUI 1.0 as MatsyaUI
import Matsya.FileManager 1.0

MatsyaUI.Window {
    id: control

    flags: Qt.Dialog | Qt.FramelessWindowHint | Qt.WindowStaysOnTopHint
    minimizeButtonVisible: false
    visible: true

    width: contentWidth
    height: contentHeight

    minimumWidth: contentWidth
    minimumHeight: contentHeight
    maximumWidth: contentWidth
    maximumHeight: contentHeight

    property var contentWidth: _mainLayout.implicitWidth + MatsyaUI.Units.largeSpacing * 2
    property var contentHeight: _mainLayout.implicitHeight + control.header.height + MatsyaUI.Units.largeSpacing * 2

    background.color: MatsyaUI.Theme.secondBackgroundColor

    ColumnLayout {
        id: _mainLayout
        anchors.fill: parent
        anchors.leftMargin: MatsyaUI.Units.largeSpacing
        anchors.rightMargin: MatsyaUI.Units.largeSpacing
        anchors.bottomMargin: MatsyaUI.Units.smallSpacing
        spacing: MatsyaUI.Units.largeSpacing

        Label {
            text: qsTr("Do you want to delete it permanently?")
            Layout.fillWidth: true
            wrapMode: Text.Wrap
        }

        RowLayout {
            spacing: MatsyaUI.Units.largeSpacing

            Button {
                text: qsTr("Cancel")
                Layout.fillWidth: true
                onClicked: control.close()
            }

            Button {
                text: qsTr("Delete")
                focus: true
                Layout.fillWidth: true
                onClicked: {
                    control.close()
                    model.deleteSelected()
                }
                flat: true
            }
        }
    }
}
