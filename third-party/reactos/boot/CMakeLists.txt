## efisys.bin

# EFI platform ID, used in environ/CMakelists.txt for bootmgfw filename naming also.
if(ARCH STREQUAL "amd64")
    set(EFI_PLATFORM_ID "x64")
elseif(ARCH STREQUAL "i386")
    set(EFI_PLATFORM_ID "ia32")
elseif(ARCH STREQUAL "ia64")
    set(EFI_PLATFORM_ID "ia64")
else()
    message(FATAL_ERROR "Unknown ARCH, can't generate a valid UEFI boot filename.")
endif()

add_custom_target(efisys
    COMMAND native-fatten ${CMAKE_CURRENT_BINARY_DIR}/efisys.bin -format 2880 EFIBOOT -boot ${CMAKE_CURRENT_BINARY_DIR}/freeldr/bootsect/fat.bin -mkdir EFI -mkdir EFI/BOOT -add $<TARGET_FILE:bootmgfw> EFI/BOOT/boot${EFI_PLATFORM_ID}.efi
    DEPENDS native-fatten fat bootmgfw bcd_hive
    VERBATIM)

##bootcd
#clear it out
file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/bootcd.lst "")

add_custom_target(bootcd
    COMMAND native-cdmake -j -m -bootdata:2\#p0,e,b${CMAKE_CURRENT_BINARY_DIR}/freeldr/bootsect/isoboot.bin\#pEF,e,b${CMAKE_CURRENT_BINARY_DIR}/efisys.bin @${CMAKE_CURRENT_BINARY_DIR}/bootcd.lst GREENTEA ${REACTOS_BINARY_DIR}/bootcd.iso
    DEPENDS native-cdmake efisys
    VERBATIM)

##bootcdregtest
#clear it out
file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/bootcdregtest.lst "")

add_custom_target(bootcdregtest
    COMMAND native-cdmake -j -m -bootdata:2\#p0,e,b${CMAKE_CURRENT_BINARY_DIR}/freeldr/bootsect/isobtrt.bin\#pEF,e,b${CMAKE_CURRENT_BINARY_DIR}/efisys.bin @${CMAKE_CURRENT_BINARY_DIR}/bootcdregtest.lst GREENTEA ${REACTOS_BINARY_DIR}/bootcdregtest.iso
    DEPENDS native-cdmake efisys
    VERBATIM)

##livecd
#clear it out
file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "")

#create the empty Desktop, Favorites, and Start Menu folders. And many more.
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/All Users/Application Data\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/All Users/Documents/My Music\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/All Users/Documents/My Pictures\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/All Users/Documents/My Videos\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/All Users/Favorites\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/All Users/My Documents\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/All Users/Start Menu/Programs/StartUp\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/All Users/Templates\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Application Data\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Cookies\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Desktop\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Favorites\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Local Settings/Application Data\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Local Settings/History\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Local Settings/Temporary Internet Files\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/My Music\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/My Pictures\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/My Videos\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/NetHood\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/PrintHood\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Recent\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/SendTo\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Start Menu/Programs\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Start Menu/Programs/Administrative Tools\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Start Menu/Programs/StartUp\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Templates\n")
# Plus some more. ("if _WIN32_WINNT >= 0x0600")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/AppData/LocalLow\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Contacts\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Downloads\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Links\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Saved Games\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.lst "Profiles/Default User/Searches\n")

add_custom_target(livecd
    COMMAND native-cdmake -j -m -bootdata:2\#p0,e,b${CMAKE_CURRENT_BINARY_DIR}/freeldr/bootsect/isoboot.bin\#pEF,e,b${CMAKE_CURRENT_BINARY_DIR}/efisys.bin @${CMAKE_CURRENT_BINARY_DIR}/livecd.lst GREENTEA ${REACTOS_BINARY_DIR}/livecd.iso
    DEPENDS native-cdmake efisys
    VERBATIM)

##hybridcd
#clear it out
file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "")

#create the empty Desktop, Favorites, and Start Menu folders. And many more.
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/All Users/Application Data\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/All Users/Documents/My Music\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/All Users/Documents/My Pictures\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/All Users/Documents/My Videos\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/All Users/Favorites\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/All Users/My Documents\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/All Users/Start Menu/Programs/StartUp\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/All Users/Templates\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Application Data\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Cookies\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Desktop\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Favorites\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Local Settings/Application Data\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Local Settings/History\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Local Settings/Temporary Internet Files\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/My Music\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/My Pictures\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/My Videos\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/NetHood\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/PrintHood\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Recent\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/SendTo\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Start Menu/Programs\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Start Menu/Programs/Administrative Tools\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Start Menu/Programs/StartUp\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Templates\n")
# Plus some more. ("if _WIN32_WINNT >= 0x0600")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/AppData/LocalLow\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Contacts\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Downloads\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Links\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Saved Games\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst "livecd/Profiles/Default User/Searches\n")

add_custom_target(hybridcd
    COMMAND native-cdmake -j -m -bootdata:2\#p0,e,b${CMAKE_CURRENT_BINARY_DIR}/freeldr/bootsect/isoboot.bin\#pEF,e,b${CMAKE_CURRENT_BINARY_DIR}/efisys.bin @${CMAKE_CURRENT_BINARY_DIR}/hybridcd.lst GREENTEA ${REACTOS_BINARY_DIR}/hybridcd.iso
    DEPENDS native-cdmake efisys bootcd livecd
    VERBATIM)

add_subdirectory(freeldr)
add_subdirectory(bootdata)
add_subdirectory(environ)
