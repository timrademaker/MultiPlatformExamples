#pragma once

enum class EButton
{
    Left,
    Right,
    Up,
    Down
};

struct PlatformDependentStruct;

class Input
{
public:
    static Input& GetInstance();

    bool IsButtonDown(EButton a_Button);

private:
    Input();
    Input(const Input&) = delete;
    void operator=(const Input&) = delete;

    PlatformDependentStruct* m_SomeStruct;
};