#include <iostream>
#include <cmath>
#include <vector>

int main()
{
    int usermodechoice;
    std::cout << "=============================================\n";
    std::cout << "\tAdvance Scientific Calculator\n";
    std::cout << "=============================================\n";
    std::cout << "Enter the Number System you want to use\n";
    std::cout << "1. for Decimal Numbers(0-9)\n";
    std::cout << "2. for Binary Numbers (0/1)\n";
    std::cout << "Enter number: ";
    std::cin >> usermodechoice;
    if(usermodechoice == 1){
        std::cout << "User choose Decimal Number System(0-9)\n";
    }else if(usermodechoice == 2){
        std::cout << "User choose Binary Number System (0/1)\n";
    }else{
        std::cout << "\bPlease Enter Valid number!\n";
    }
}