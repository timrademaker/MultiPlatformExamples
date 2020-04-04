#include "Input.h"

#include <cstdio>

#include <string>

struct PlatformDependentStruct
{
    char m_LinuxSpecificChar;
    std::string m_PlatformName;
};

Input::Input()
    : m_SomeStruct(new PlatformDependentStruct)
{
    m_SomeStruct->m_PlatformName = "Linux";
    m_SomeStruct->m_LinuxSpecificChar = 'E';
}

Input& Input::GetInstance()
{
    static Input instance;
    return instance;
}

bool Input::IsButtonDown(EButton a_Button)
{
    printf("\nChecking if a button is down - %s", m_SomeStruct->m_PlatformName.c_str());
    printf("\nLinux-specific char: %c", m_SomeStruct->m_LinuxSpecificChar);

    return false;
}
