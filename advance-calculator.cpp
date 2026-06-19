#include <iostream>
#include <cmath>
#include <vector>

void vectorcollector(std::vector<int>& vec)
{
    int tempnum;                  // Variable, that store the number and push in Vector.
    char user;                    // Variable, to whether add more numbers or not?
    do
    {
        std::cout << "Enter Number to perform operation: ";
        std::cin >> tempnum;
        vec.push_back(tempnum);
        std::cout << "Do you want to enter more numbers(y/n): ";
        std::cin >> user;
    } while (user == 'y' || user == 'Y');
}

void decimaladd(std::vector<int>& vec)
{
    int sum = 0;
    for(int i : vec){
        sum += i;
    } 
    std::cout << sum << "\n";
}
void decimalminus(std::vector<int>& vec)
{
    int minus = vec[0];
    for(int i = 1; i < vec.size(); i++){
        minus -=  vec[i];
        // minus = minus * -1;
    } 
    std::cout << minus << "\n";
}
void decimaldivide(std::vector<int>& vec)
{
    int product = 1;
    for(int i : vec){
        product *=  i;
    } 
    // minus = minus * -1;
    std::cout << product << "\n";
}
void decimalmultiply(std::vector<int>& vec)
{
    int product = 1;
    for(int i : vec){
        product *=  i;
    } 
    // minus = minus * -1;
    std::cout << product << "\n";
}

int main()
{
    std::cout << "=============================================\n";
    std::cout << "\tAdvance Scientific Calculator\n";
    std::cout << "=============================================\n";
    char userchoice; // For loop whether program should continue or not!
    do
    {
        int usermodechoice; // To choose the mode of number system binary or decmial
        std::cout << "Enter the Number System you want to use\n";
        std::cout << "1. for Decimal Numbers(0-9)\n";
        std::cout << "2. for Binary Numbers (0/1)\n";
        do
        {
            std::cout << "Enter number: ";
            std::cin >> usermodechoice;
        } while (usermodechoice >= 3);

        if (usermodechoice == 1)
        {
            std::cout << "User choose Decimal Number System(0-9)\n";
        }
        else if (usermodechoice == 2)
        {
            std::cout << "User choose Binary Number System (0/1)\n";
        }
        else
        {
            std::cout << "Please Enter Valid number!\n";
        }

        if (usermodechoice == 1)
        {
            int userchoicedecimal;
            std::cout << "Enter which Arthemetic Operation You want to perform: \n";
            std::cout << "1. for ADDITION(+)\n";
            std::cout << "2. for SUBTRACTION(-)\n";
            std::cout << "3. for DIVISION(/)\n";
            std::cout << "4. for MULTIPICATION(x)\n";
            do
            {
                std::cout << "Enter number: ";
                std::cin >> userchoicedecimal;
            } while (userchoicedecimal >= 5);
            if (userchoicedecimal == 1)
            { // Add
                std::vector<int> vec;
                vectorcollector(vec);
                decimaladd(vec);
            }
            else if (userchoicedecimal == 2)
            { // Subtraction
                std::vector<int> vec;
                vectorcollector(vec);
                decimalminus(vec);
            }
            else if (userchoicedecimal == 3)
            { // Division
                std::vector<int> vec;
                vectorcollector(vec);
                decimaldivide(vec);
            }
            else if (userchoicedecimal == 4)
            { // Multipication
                std::vector<int> vec;
                vectorcollector(vec);
                decimalmultiply(vec);
            }
        }

        std::cout << "Do you want more Maths?(y/n): ";
        std::cin >> userchoice;
    } while (userchoice == 'y' || userchoice == 'Y');
    std::cout << "Thanks! for using our Advance Scientific Calculator";
    return 0;
}

