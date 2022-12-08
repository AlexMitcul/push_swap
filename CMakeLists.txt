cmake_minimum_required(VERSION 3.25.1)

project(push_swap)

set ( CMAKE_C_FLAGS_DEBUG)
add_executable(${PROJECT_NAME} src/main.c src/moves.c src/stack_operations.c src/stack.c src/read.c src/free.c src/ft_atoll.c src/tests.c)

add_subdirectory(libs/libft)
add_subdirectory(libs/ft_printf)
add_subdirectory(libs/get_next_line)

target_link_libraries(${PROJECT_NAME} libft ft_printf get_next_line)
