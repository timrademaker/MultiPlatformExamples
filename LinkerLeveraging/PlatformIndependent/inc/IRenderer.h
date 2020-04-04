#pragma once

class IRenderer
{
public:
    static IRenderer* GetInstance();

    virtual void Render() = 0;

protected:
    IRenderer() = default;
    virtual ~IRenderer() = default;

private:
    IRenderer(const IRenderer&) = delete;
    void operator=(const IRenderer&) = delete;
};