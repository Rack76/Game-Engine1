#ifndef GAMEENGINE_RENDERINGCONTEXT_HPP
#define GAMEENGINE_RENDERINGCONTEXT_HPP

#define WINDOW_TYPE_GLFW 0

#include "../../Libs/ImGui/imgui.h"

struct RenderingContext {
    unsigned char winType;
    ImGuiContext* imGuiContext;
    ImGuiIO& imGuiIO;
};

#endif
