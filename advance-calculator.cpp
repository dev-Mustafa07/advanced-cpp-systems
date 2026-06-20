#include <iostream>
#include <cmath>
#include <vector>

void vectorcollector(std::vector<float> &vec)
{
    double tempnum; // Variable, that store the number and push in Vector.
    char user;      // Variable, to whether add more numbers or not?
    do
    {
        std::cout << "Enter Number to perform operation: ";
        std::cin >> tempnum;
        vec.push_back(tempnum);
        std::cout << "Do you want to enter more numbers(y/n): ";
        std::cin >> user;
    } while (user == 'y' || user == 'Y');
}

// Decimal Operations:
void decimaladd(std::vector<float> &vec)
{
    double sum = 0;
    for (double i : vec)
    {
        sum += i;
    }
    std::cout << sum << "\n";
}
void decimalminus(std::vector<float> &vec)
{
    double minus = vec[0];
    for (double i = 1; i < vec.size(); i++)
    {
        minus -= vec[i];
    }
    std::cout << minus << "\n";
}
int decimaldivide(std::vector<float> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 0)
        {
            std::cout << "Something went Wrong...! :(\n";
            return 0;
        }
    }
    double divided = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        divided /= vec[i];
    }
    std::cout << divided << "\n";
    return 0;
}
void decimalmultiply(std::vector<float> &vec)
{
    double product = 1;
    for (double i : vec)
    {
        product *= i;
    }
    // minus = minus * -1;
    std::cout << product << "\n";
}

// Binary Operations:

void binarynumscollector(std::vector<int> &vec)
{
    double tempnum; // Variable, that store the number and push in Vector.
    char user;      // Variable, to whether add more numbers or not?
    do
    {
        std::cout << "Enter Number to perform operation: ";
        std::cin >> tempnum;
        vec.push_back(tempnum);
        std::cout << "Do you want to enter more binary numbers(y/n): ";
        std::cin >> user;
    } while (user == 'y' || user == 'Y');
}

void binarytodecimal(std::vector<int> &vec, std::vector<int> &vec2)
{
    int j;
    for (j = 0; j < vec.size(); j++) // Converting binary no in decimal
    {
        int exp = 0;

        int arrayno, singleno = 0, ans = 0;
        arrayno = vec[j];
        while (arrayno > 0)
        {
            singleno = arrayno % 10;
            singleno = singleno * pow(2, exp);
            arrayno /= 10;
            exp++;

            ans = singleno + ans;
        }
        vec2.push_back(ans); // Storing converted decimal no in decimalarray
    }
}
void decimaltobinary(int sum, std::vector<int> &vec)
{
    int tempnum;
    while (sum > 0) // Converting Binary no into Decimal no
    {
        tempnum = sum % 2;
        sum /= 2;
        vec.push_back(tempnum);
    }
}

void decimalbitsprinter(std::vector<int> &vec3)
{
    for (int i = vec3.size() - 1; i > 0; i--)
    {
        std::cout << vec3[i];
    }
}

void binaryadd(std::vector<int> &vec, int &sum)
{
    for (int i : vec)
    {
        sum += i;
    }
}
void binaryminus(std::vector<int> &vec)
{
    int minus = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        minus -= vec[i];
    }
    std::cout << minus << "\n";
}
int binarydivide(std::vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 0)
        {
            std::cout << "Something went Wrong...! :(\n";
            return 0;
        }
    }
    int divided = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        divided /= vec[i];
    }
    std::cout << divided << "\n";
    return 0;
}
void binarymultiply(std::vector<int> &vec)
{
    int product = 1;
    for (int i : vec)
    {
        product *= i;
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
                std::vector<float> vec;
                vectorcollector(vec);
                decimaladd(vec);
            }
            else if (userchoicedecimal == 2)
            { // Subtraction
                std::vector<float> vec;
                vectorcollector(vec);
                decimalminus(vec);
            }
            else if (userchoicedecimal == 3)
            { // Division
                std::vector<float> vec;
                vectorcollector(vec);
                decimaldivide(vec);
            }
            else if (userchoicedecimal == 4)
            { // Multipication
                std::vector<float> vec;
                vectorcollector(vec);
                decimalmultiply(vec);
            }
        }
        else if (usermodechoice == 2)
        {

            int userchoicebinary;
            std::cout << "Enter which Arthemetic Operation You want to perform: \n";
            std::cout << "1. for ADDITION(+)\n";
            std::cout << "2. for SUBTRACTION(-)\n";
            std::cout << "3. for DIVISION(/)\n";
            std::cout << "4. for MULTIPICATION(x)\n";
            do
            {
                std::cout << "Enter number: ";
                std::cin >> userchoicebinary;
            } while (userchoicebinary >= 5);
            if (userchoicebinary == 1)
            {                          // Add
                std::vector<int> vec;  // Store Binary numbers
                std::vector<int> vec2; // Store Decimal numbers
                std::vector<int> vec3; // Store Final Decimal Bits
                int decimalsum = 0;
                binarynumscollector(vec);
                binarytodecimal(vec, vec2);
                binaryadd(vec2, decimalsum);
                decimaltobinary(decimalsum, vec3);
                decimalbitsprinter(vec3);
            }
            else if (userchoicebinary == 2)
            { // Subtraction
                std::vector<int> vec;  // Store Binary numbers
                std::vector<int> vec2; // Store Decimal numbers
                std::vector<int> vec3; // Store Final Decimal Bits
                int decimalsum = 0;
                binarynumscollector(vec);
                binarytodecimal(vec, vec2);
                // binaryminus(vec2, decimalsum);
                decimaltobinary(decimalsum, vec3);
                decimalbitsprinter(vec3);
            }
            else if (userchoicebinary == 3)
            { // Division
                std::vector<int> vec;  // Store Binary numbers
                std::vector<int> vec2; // Store Decimal numbers
                std::vector<int> vec3; // Store Final Decimal Bits
                int decimalsum = 0;
                binarynumscollector(vec);
                binarytodecimal(vec, vec2);
                // binarydivide(vec2, decimalsum);
                decimaltobinary(decimalsum, vec3);
                decimalbitsprinter(vec3);
            }
            else if (userchoicebinary == 4)
            { // Multipication
                std::vector<int> vec;  // Store Binary numbers
                std::vector<int> vec2; // Store Decimal numbers
                std::vector<int> vec3; // Store Final Decimal Bits
                int decimalsum = 0;
                binarynumscollector(vec);
                binarytodecimal(vec, vec2);
                // binarymultiply(vec2, decimalsum);
                decimaltobinary(decimalsum, vec3);
                decimalbitsprinter(vec3);
            }
        }

        std::cout << "Do you want more Maths?(y/n): ";
        std::cin >> userchoice;
    } while (userchoice == 'y' || userchoice == 'Y');
    std::cout << "Thanks! for using our Advance Scientific Calculator";
    return 0;
}
