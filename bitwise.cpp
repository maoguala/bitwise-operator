#include <iostream>

int main()
{
    int n = 1;
    int k = 2;
    int a = 3;

    std::cout << (n << 2) << std::endl; //Left Shift, output 4
    std::cout << (n >> 2) << std::endl; //Right Shift, output 0 , out of range by rightmovement
    std::cout << (k & a) << std::endl; //AND, output 010(2)
    std::cout << (n | a) << std::endl; //OR, output 011(3)
    std::cout << (k ^ n) << std::endl; //XOR, output 001(1) 
}