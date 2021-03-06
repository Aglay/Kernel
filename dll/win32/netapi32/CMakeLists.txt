
include_directories(
    ${REACTOS_SOURCE_DIR}/sdk/include/reactos/idl
    ${REACTOS_SOURCE_DIR}/sdk/include/reactos/wine)

add_definitions(-D__WINESRC__)
spec2def(netapi32.dll netapi32.spec ADD_IMPORTLIB)
add_rpc_files(client
    ${REACTOS_SOURCE_DIR}/sdk/include/reactos/idl/atsvc.idl
    ${REACTOS_SOURCE_DIR}/sdk/include/reactos/idl/dssetup.idl
    ${REACTOS_SOURCE_DIR}/sdk/include/reactos/idl/srvsvc.idl
    ${REACTOS_SOURCE_DIR}/sdk/include/reactos/idl/wkssvc.idl)

list(APPEND SOURCE
    access.c
    apibuf.c
    browsr.c
    ds.c
    dssetup.c
    group.c
    local_group.c
    misc.c
    nbcmdqueue.c
    nbnamecache.c
    nbt.c
    netapi32.c
    netbios.c
    schedule.c
    share.c
    srvsvc.c
    user.c
    wksta.c
    wksta_new.c
    netapi32.h
    ${CMAKE_CURRENT_BINARY_DIR}/atsvc_c.c
    ${CMAKE_CURRENT_BINARY_DIR}/dssetup_c.c
    ${CMAKE_CURRENT_BINARY_DIR}/srvsvc_c.c
    ${CMAKE_CURRENT_BINARY_DIR}/wkssvc_c.c)

add_library(netapi32 SHARED
    ${SOURCE}
    ${CMAKE_CURRENT_BINARY_DIR}/netapi32_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/netapi32.def)

set_module_type(netapi32 win32dll)
target_link_libraries(netapi32 wine ${PSEH_LIB})
add_delay_importlibs(netapi32 samlib secur32)
add_importlibs(netapi32 iphlpapi ws2_32 advapi32 rpcrt4 msvcrt kernel32 ntdll)
add_pch(netapi32 netapi32.h SOURCE)
add_cd_file(TARGET netapi32 DESTINATION reactos/system32 FOR all)
