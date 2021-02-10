#include <iostream>

extern "C" {
void f();
}

void func(void)
{
    cout<<"\n being used within C++ code and displayed successfully\n";
}

int main(void)
{
    f();
    func();
    return 0;
}