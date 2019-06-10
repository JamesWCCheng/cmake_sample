
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

add_library(S STATIC s.cpp)
add_library(S2 STATIC s1.cpp)
set_property(TARGET S PROPERTY POSITION_INDEPENDENT_CODE ON)
set_property(TARGET S2 PROPERTY POSITION_INDEPENDENT_CODE ON)

add_library(A SHARED a.cpp)
target_link_libraries(A PRIVATE S)

add_library(B SHARED b.cpp)
target_link_libraries(B PRIVATE S2)

add_executable(E main.cpp)
target_link_libraries(E PRIVATE A B S S2)
