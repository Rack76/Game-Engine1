cmake_minimum_required(VERSION 3.23)
project(GameEngine)

set(CMAKE_CXX_STANDARD 23)

find_package(OpenGL REQUIRED)

FILE(GLOB LIB_SOURCES Libs/**/*.cpp Libs/**/*.c)
FILE(GLOB LIB_HEADERS Libs/**/*.hpp Libs/**/*.h)

add_executable(GameEngine ${LIB_SOURCES} ${LIB_HEADERS} Main.cpp Engine/Rendering/RenderingContext.hpp Engine/Rendering/Backend/Renderer.cpp Engine/Rendering/Backend/Renderer.hpp Engine/Rendering/Window/Window.hpp Engine/Rendering/Window/GlfwWindow.cpp Engine/Rendering/Window/GlfwWindow.hpp)

add_custom_target(copy_resources ALL
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${PROJECT_SOURCE_DIR}/Resources
    ${PROJECT_BINARY_DIR}/Resources
    COMMENT "Copying resources into binary directory")

add_dependencies(GameEngine copy_resources)

target_link_libraries(GameEngine -lGL -lglfw)
