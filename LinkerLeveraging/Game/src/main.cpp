#include "IInput.h"


int main()
{
    IInput& input = IInput::GetInstance();
    input.IsButtonDown(EButton::Down);



    return 0;
}