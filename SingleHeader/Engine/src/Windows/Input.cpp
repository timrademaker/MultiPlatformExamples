#include "Input.h"

#include <cstdio>
#include <string>

struct PlatformDependentStruct
{
    int m_WindowsSpecificInt;
    std::string m_PlatformName;
};

Input::Input()
    : m_SomeStruct(new PlatformDependentStruct)
{
    m_SomeStruct->m_PlatformName = "Windows";
    m_SomeStruct->m_WindowsSpecificInt = 10;
}

Input& Input::GetInstance()
{
    static Input instance;
    return instance;
}

bool Input::IsButtonDown(EButton a_Button)
{
    printf("\nChecking if a button is down - %s", m_SomeStruct->m_PlatformName.c_str());
    printf("\nWindows-specific int: %i", m_SomeStruct->m_WindowsSpecificInt);

    return false;
}
