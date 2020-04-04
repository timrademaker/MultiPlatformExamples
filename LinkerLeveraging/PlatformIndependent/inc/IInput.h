#pragma once

enum class EButton
{
    Left,
    Right,
    Up,
    Down
};

class IInput
{
public:
    static IInput& GetInstance();

    virtual bool IsButtonDown(EButton a_Button) = 0;

protected:
    IInput() = default;

private:
    IInput(const IInput&) = delete;
    void operator=(const IInput&) = delete;

};