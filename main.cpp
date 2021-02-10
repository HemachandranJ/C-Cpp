#include <iostream>

extern "C" {
void f();
}

void func()
{
    cout<<"\n being used within C++ code and displayed successfully\n";
}

int main(void)
{
    f();
    func();
    return 0;
}