#include "IRenderer.h"

#if defined(PLATFORM_WINDOWS)
#include "WindowsRenderer.h"
#elif defined(PLATFORM_LINUX)
#include "LinuxRenderer.h"
#endif

IRenderer* IRenderer::GetInstance()
{
    static IRenderer* instance;
    if (!instance)
    {
        instance = new Renderer;
    }

    return instance;
}
