#ifndef GAMEENGINE_RENDERER_HPP
#define GAMEENGINE_RENDERER_HPP


#include "../RenderingContext.hpp"
#include <GLFW/glfw3.h>
#include <stdlib.h>

class Renderer {
public:
    Renderer(RenderingContext* context);

    static RenderingContext* createContext();
    static void destroyContext(RenderingContext* context);
};


#endif
