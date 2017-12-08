
list(APPEND HAL_UP_SOURCE
    include/hal.h
    generic/spinlock.c
    up/processor.c)

add_object_library(lib_hal_up ${HAL_UP_SOURCE})
add_pch(lib_hal_up include/hal.h HAL_UP_SOURCE)
add_dependencies(lib_hal_up bugcodes xdk)
