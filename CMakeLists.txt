set(${PROJECT_NAME}_SOURCES
    main.cpp
    brightness_controller.cpp
    image_wrapper.cpp
    image_file_manager.cpp
    )

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(${PROJECT_NAME}_LIBS
    ${CONAN_LIBS_LIBGD}
)

set(PRIVATE_COMPILE_DEFINITIONS
CMAKE_BINPATH="${CMAKE_BINARY_DIR}"
)

set(${PROJECT_NAME}_DIRS
    ${CMAKE_SOURCE_DIR}
)

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE ${${PROJECT_NAME}_DIRS})
target_link_libraries(${PROJECT_NAME} ${${PROJECT_NAME}_LIBS})
