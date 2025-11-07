add_library(
    ring_view
    INTERFACE
    ring_span.h
    heap_span.h
    fixed_ring.h
)

target_include_directories(
    ring_view
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)