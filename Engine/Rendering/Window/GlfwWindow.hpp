#ifndef GAMEENGINE_GLFWWINDOW_HPP
#define GAMEENGINE_GLFWWINDOW_HPP

#include "Window.hpp"
#include <GLFW/glfw3.h>

class GlfwWindow : public Window {
public:
    GlfwWindow() {}
    void run();
    void setup(RenderingContext* context);

private:
    RenderingContext* context;
};


#endif
