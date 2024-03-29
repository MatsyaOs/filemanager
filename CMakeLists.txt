cmake_minimum_required(VERSION 3.14)

project(filemanager LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core DBus Quick LinguistTools REQUIRED)
# find_package(MatsyaUI REQUIRED)

find_package(KF5KIO)
find_package(KF5Solid)
find_package(KF5WindowSystem)
find_package(KF5Config)

qt5_add_dbus_adaptor(DBUS_SOURCES
                     com.matsya.FileManager.xml
                     application.h Application)

add_executable(matsya-filemanager
  main.cpp
  application.cpp
  window.cpp
  dbusinterface.cpp

  draganddrop/declarativedroparea.cpp
  draganddrop/declarativedragdropevent.cpp
  draganddrop/declarativemimedata.cpp

  model/foldermodel.cpp
  model/placesmodel.cpp
  model/placesitem.cpp
  model/pathbarmodel.cpp
  model/dirlister.cpp
  model/positioner.cpp

  cio/cfilejob.cpp
  cio/cfilesizejob.cpp

  dialogs/createfolderdialog.cpp
  dialogs/filepropertiesdialog.cpp
  dialogs/openwithdialog.cpp
  widgets/rubberband.cpp
  widgets/itemviewadapter.cpp

  desktop/desktop.cpp
  desktop/desktopview.cpp
  desktop/desktopsettings.cpp
  desktop/dockdbusinterface.cpp

  helper/datehelper.cpp
  helper/pathhistory.cpp
  helper/fm.cpp
  helper/shortcut.cpp
  helper/filelauncher.cpp
  helper/keyboardsearchmanager.cpp

  mimetype/mimeappmanager.cpp
  mimetype/xdgdesktopfile.cpp

  thumbnailer/thumbnailprovider.cpp
  thumbnailer/thumbnailcache.cpp

  desktopiconprovider.cpp

  qml.qrc

  ${DBUS_SOURCES}
)

target_link_libraries(matsya-filemanager
  PRIVATE
  Qt5::Core
  Qt5::DBus
  Qt5::Quick

  KF5::KIOCore
  KF5::KIOFileWidgets
  KF5::KIOWidgets
  KF5::Solid
  KF5::WindowSystem
  KF5::ConfigCore

  # MatsyaUI
)

file(GLOB TS_FILES translations/*.ts)
qt5_create_translation(QM_FILES ${TS_FILES})
add_custom_target(translations DEPENDS ${QM_FILES} SOURCES ${TS_FILES})
add_dependencies(matsya-filemanager translations)

install(TARGETS matsya-filemanager RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
install(FILES matsya-filemanager.desktop DESTINATION "/usr/share/applications")
install(FILES ${QM_FILES} DESTINATION /usr/share/matsya-filemanager/translations)
