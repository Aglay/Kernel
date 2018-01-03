if(USE_PSEH3)
    include_directories(${REACTOS_SOURCE_DIR}/sdk/include/reactos/libs/pseh)
    list(APPEND SOURCE
        i386/pseh3.c
        i386/pseh3_i386.S)
elseif(USE_DUMMY_PSEH)
    list(APPEND SOURCE dummy.c)
elseif(ARCH STREQUAL "i386")
    list(APPEND SOURCE
        i386/framebased.S
        i386/framebased-gcchack.c
        i386/framebased-gcchack-asm.S)
elseif(ARCH STREQUAL "amd64")
    list(APPEND SOURCE amd64/framebased.S)
endif()

add_library(pseh ${SOURCE})
target_link_libraries(pseh chkstk)
add_dependencies(pseh psdk)
