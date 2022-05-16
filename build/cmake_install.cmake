# Install script for directory: /home/tokyo/Documents/GitHub/filemanager

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-filemanager" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-filemanager")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-filemanager"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/tokyo/Documents/GitHub/filemanager/build/matsya-filemanager")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-filemanager" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-filemanager")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-filemanager")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/applications/matsya-filemanager.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/applications" TYPE FILE FILES "/home/tokyo/Documents/GitHub/filemanager/matsya-filemanager.desktop")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/matsya-filemanager/translations/ar_AA.qm;/usr/share/matsya-filemanager/translations/be_BY.qm;/usr/share/matsya-filemanager/translations/be_Latn.qm;/usr/share/matsya-filemanager/translations/bg_BG.qm;/usr/share/matsya-filemanager/translations/bs_BA.qm;/usr/share/matsya-filemanager/translations/cs_CZ.qm;/usr/share/matsya-filemanager/translations/da_DK.qm;/usr/share/matsya-filemanager/translations/de_DE.qm;/usr/share/matsya-filemanager/translations/en_US.qm;/usr/share/matsya-filemanager/translations/eo_XX.qm;/usr/share/matsya-filemanager/translations/es_ES.qm;/usr/share/matsya-filemanager/translations/es_MX.qm;/usr/share/matsya-filemanager/translations/fa_IR.qm;/usr/share/matsya-filemanager/translations/fi_FI.qm;/usr/share/matsya-filemanager/translations/fr_FR.qm;/usr/share/matsya-filemanager/translations/he_IL.qm;/usr/share/matsya-filemanager/translations/hi_IN.qm;/usr/share/matsya-filemanager/translations/hu_HU.qm;/usr/share/matsya-filemanager/translations/id_ID.qm;/usr/share/matsya-filemanager/translations/ie.qm;/usr/share/matsya-filemanager/translations/it_IT.qm;/usr/share/matsya-filemanager/translations/ja_JP.qm;/usr/share/matsya-filemanager/translations/lt_LT.qm;/usr/share/matsya-filemanager/translations/lv_LV.qm;/usr/share/matsya-filemanager/translations/ml_IN.qm;/usr/share/matsya-filemanager/translations/nb_NO.qm;/usr/share/matsya-filemanager/translations/ne_NP.qm;/usr/share/matsya-filemanager/translations/pl_PL.qm;/usr/share/matsya-filemanager/translations/pt_BR.qm;/usr/share/matsya-filemanager/translations/pt_PT.qm;/usr/share/matsya-filemanager/translations/ro_RO.qm;/usr/share/matsya-filemanager/translations/ru_RU.qm;/usr/share/matsya-filemanager/translations/si_LK.qm;/usr/share/matsya-filemanager/translations/sk_SK.qm;/usr/share/matsya-filemanager/translations/so.qm;/usr/share/matsya-filemanager/translations/sr_RS.qm;/usr/share/matsya-filemanager/translations/sv_SE.qm;/usr/share/matsya-filemanager/translations/sw.qm;/usr/share/matsya-filemanager/translations/ta_IN.qm;/usr/share/matsya-filemanager/translations/tr_TR.qm;/usr/share/matsya-filemanager/translations/uk_UA.qm;/usr/share/matsya-filemanager/translations/uz_UZ.qm;/usr/share/matsya-filemanager/translations/zh_CN.qm;/usr/share/matsya-filemanager/translations/zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/matsya-filemanager/translations" TYPE FILE FILES
    "/home/tokyo/Documents/GitHub/filemanager/build/ar_AA.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/be_BY.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/be_Latn.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/bg_BG.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/bs_BA.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/cs_CZ.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/da_DK.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/de_DE.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/en_US.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/eo_XX.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/es_ES.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/es_MX.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/fa_IR.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/fi_FI.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/fr_FR.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/he_IL.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/hi_IN.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/hu_HU.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/id_ID.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/ie.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/it_IT.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/ja_JP.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/lt_LT.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/lv_LV.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/ml_IN.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/nb_NO.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/ne_NP.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/pl_PL.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/pt_BR.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/pt_PT.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/ro_RO.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/ru_RU.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/si_LK.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/sk_SK.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/so.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/sr_RS.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/sv_SE.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/sw.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/ta_IN.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/tr_TR.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/uk_UA.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/uz_UZ.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/zh_CN.qm"
    "/home/tokyo/Documents/GitHub/filemanager/build/zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/tokyo/Documents/GitHub/filemanager/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
