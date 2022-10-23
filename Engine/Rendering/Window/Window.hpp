#ifndef GAMEENGINE_WINDOW_HPP
#define GAMEENGINE_WINDOW_HPP

#include "../RenderingContext.hpp"
#include "GlfwWindow.hpp"

class Window {
public:
    Window();

    virtual void run() = 0;

    static Window* createWindow(RenderingContext* context) {
        if (context->winType == WINDOW_TYPE_GLFW) {
            return Window::createGlfwWindow(context);
        }
        return nullptr;
    }

private:
    static GlfwWindow* createGlfwWindow(RenderingContext* context);
};


#endif
