file(GLOB_RECURSE SRC_LIST *.cpp *.hpp)
add_executable(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        ${PROJECT_NAME}::MyStaticLib
        ${PROJECT_NAME}::MyDynamicLib)

target_compile_options(${PROJECT_NAME} 
    PRIVATE 
        -Wall -Wextra -pedantic -Wconversion
        -Wsign-conversion -Wshadow=local -fconcepts)
