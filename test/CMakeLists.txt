message(${CMAKE_BINARY_DIR})


add_executable(tester main.cpp)
# target_include_directories(tester INTERFACE ../${ADDER})

target_include_directories(tester PUBLIC
        ${CMAKE_SOURCE_DIR}/${ADDER}
        ${CMAKE_SOURCE_DIR}/${MULTIPLIER}
)

target_link_directories(tester PUBLIC
        ${CMAKE_BINARY_DIR}/${ADDER}
        ${CMAKE_BINARY_DIR}/${MULTIPLIER}
)

target_link_libraries(tester PUBLIC
        ${ADDER}
        ${MULTIPLIER}
)
