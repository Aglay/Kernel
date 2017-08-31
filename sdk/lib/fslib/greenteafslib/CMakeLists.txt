list(APPEND SOURCE
    common.c
    format.c
    greenteafslib.c
    greenteafslib.h)

add_library(greenteafslib ${SOURCE})
add_dependencies(greenteafslib xdk)
add_pch(greenteafslib greenteafslib.h SOURCE)
