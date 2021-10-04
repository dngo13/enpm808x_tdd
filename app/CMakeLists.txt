add_executable(shell-app main.cpp pid.cpp)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
add_library(pid_lib pid.cpp ${CMAKE_SOURCE_DIR}/include/pid_lib.hpp)
target_include_directories(pid_lib PUBLIC ../include)
target_link_libraries(shell-app PUBLIC pid_lib)
