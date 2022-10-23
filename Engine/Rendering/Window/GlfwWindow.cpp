#include "GlfwWindow.hpp"

void GlfwWindow::run() {
    
}

void GlfwWindow::setup(RenderingContext* context) {
    this->context = context;
}

GlfwWindow* Window::createGlfwWindow(RenderingContext* context) {
    GlfwWindow* window = new GlfwWindow();
    window->setup(context);
    return window;
}