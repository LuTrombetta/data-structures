cmake_minimum_required(VERSION 3.19.2)

project(Example C)

# Subdirectories
add_subdirectory(${PROJECT_SOURCE_DIR}/sequentialList)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/example.c)

# Linking the libraries
target_link_libraries(${PROJECT_NAME}
    PUBLIC sequentialList
    )

target_include_directories(${PROJECT_NAME} PUBLIC
    "${PROJECT_BYNARY_DIR}"
    "${PROJECT_SOURCE_DIR}/sequentialList"
    )