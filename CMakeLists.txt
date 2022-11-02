cmake_minimum_required(VERSION 3.10)

project(cli_todo)

add_executable(${PROJECT_NAME} src/source.cpp)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(toDoTests src/tests/tests.cpp)
target_link_libraries(toDoTests ${GTEST_LIBRARIES} pthread)

# Link runTests with what we want to test and the GTest and pthread library
add_executable(tasksContainerTests src/tests/tasksContainerTests.cpp)
target_link_libraries(tasksContainerTests ${GTEST_LIBRARIES} pthread)