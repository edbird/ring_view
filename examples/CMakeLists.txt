add_executable(
    ring_view_test_executable
    ring_view.test.cc
)

target_link_libraries(
    ring_view_test_executable
    PRIVATE
    ring_view
)