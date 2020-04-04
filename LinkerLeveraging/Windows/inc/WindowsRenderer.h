#pragma once

#include "IRenderer.h"

class Renderer : public IRenderer
{
public:
    Renderer() = default;
    virtual ~Renderer() = default;

    virtual void Render() override;
};