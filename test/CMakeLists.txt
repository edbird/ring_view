add_executable(
    compiles_at_all
    compiles_at_all.cc
)

target_link_libraries(
    compiles_at_all
    PRIVATE
    Catch2::Catch2
    Catch2::Catch2WithMain
    ring_view
)

add_executable(
    fixed_ring_test
    fixed_ring.test.cc
)

target_link_libraries(
    fixed_ring_test
    PRIVATE
    Catch2::Catch2
    Catch2::Catch2WithMain
    ring_view
)

add_executable(
    is_default_constructible
    is_default_constructible.cc
)

target_link_libraries(
    is_default_constructible
    PRIVATE
    Catch2::Catch2
    Catch2::Catch2WithMain
    ring_view
)

add_executable(
    moveonly_type
    moveonly_type.cc
)

target_link_libraries(
    moveonly_type
    PRIVATE
    Catch2::Catch2
    Catch2::Catch2WithMain
    ring_view
)

add_executable(
    p0059r1
    p0059r1.cc
)

target_link_libraries(
    p0059r1
    PRIVATE
    Catch2::Catch2
    Catch2::Catch2WithMain
    ring_view
)


include(Catch)
catch_discover_tests(compiles_at_all)