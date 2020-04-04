#include "Input.h"

int main()
{
    Input& input = Input::GetInstance();

    input.IsButtonDown(EButton::Down);

    return 0;
}