#pragma once

#include "IInput.h"

#include <string>

class InputImplementation : public IInput
{
public:
    InputImplementation() = default;

    virtual bool IsButtonDown(EButton a_Button) override;

private:
    const std::string m_LinuxSpecificVariable = "Linux";
};