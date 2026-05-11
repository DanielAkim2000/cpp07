#include "main.hpp"

void mul(int &a)
{
    a = a * 2;
}

template <typename T>
void print(T a)
{
    std::cout << a << std::endl;
}

int main(void)
{
    int a[3] = {1, 2, 3};
    iter<int>(a, 3, mul);
    for (int i = 0; i < 3; i++)
    {
        print(a[i]);
    }
}
