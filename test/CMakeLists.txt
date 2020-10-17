
add_executable(MathTest Tests.cpp)

target_link_libraries(MathTest PRIVATE MathLibrary )

add_dependencies(MathTest MathLibrary )
