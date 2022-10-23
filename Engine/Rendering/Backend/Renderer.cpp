#include "Renderer.hpp"

RenderingContext* Renderer::createContext() {
    RenderingContext* context = (RenderingContext*) calloc(1, sizeof(RenderingContext));
    context->winType == WINDOW_TYPE_GLFW;
    glfwInit();
    context->imGuiContext = ImGui::CreateContext();
    context->imGuiIO = ImGui::GetIO();
    return context;
}

void Renderer::destroyContext(RenderingContext* context) {
    ImGui::DestroyContext(context->imGuiContext);
    delete context;
    glfwTerminate();
}
