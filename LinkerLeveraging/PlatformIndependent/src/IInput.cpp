#include "IInput.h"

#include "InputImplementation.h"

IInput& IInput::GetInstance()
{
    static IInput* instance;
    if (!instance)
    {
        instance = new InputImplementation;
    }

    return *instance;
}
