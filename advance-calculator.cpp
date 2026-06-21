#include <iostream>
#include <cmath>
#include <vector>
#include <string>

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

void binarynumscollector(std::vector<long long int> &vec)
{
    std::string tempnum; // Variable, that store the number and push in Vector.
    char user;             // Variable, to whether add more numbers or not?
    do
    {
        std::cout << "Enter Number to perform operation: ";
        std::cin >> tempnum;

        bool valid = true;
        for (char ch : tempnum)
        {
            if (ch != '0' && ch != '1')
            {
                valid = false;
                break;
            }
        }
        if (!valid)
        {
            std::cout << "Invalid binary number! Sirf 0/1 likhein.\n";
            continue;
        }

        long long decimalvalue = 0;
        for (char ch : tempnum)
        {
            decimalvalue = decimalvalue * 2 + (ch - '0');
        }
        vec.push_back(decimalvalue);
        std::cout << "Do you want to enter more binary numbers(y/n): ";
        std::cin >> user;
    } while (user == 'y' || user == 'Y');
}

void binarytodecimal(std::vector<long long int> &vec, std::vector<long long int> &vec2)
{
    int j;
    for (j = 0; j < vec.size(); j++) // Converting binary no in decimal
    {
        int exp = 0;

        long long int arrayno = 0, singleno = 0;
        long long int ans = 0;
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
void decimaltobinary(long long num, std::vector<int> &vec)
{
    long long int tempnum;
    while (num > 0) // Converting Binary no into Decimal no
    {
        tempnum = num % 2;
        num /= 2;
        vec.push_back(tempnum);
    }
}

void decimalbitsprinter(std::vector<int> &vec3)
{
    std::cout << "Output is: ";
    for (int i = vec3.size() - 1; i >= 0; i--)
    {
        std::cout << vec3[i];
    }
}
 
void binaryadd(std::vector<long long int> &vec, long long int &sum)
{
    for (long long i : vec)
    {
        sum += i;
    }
}
int binaryminus(std::vector<long long int> &vec)
{
    std::vector<int> binarybits;
    bool isnegative = false;
    int minus = vec[0];

    for (int i = 1; i < vec.size(); i++) // Subtracting Numbers
    {
        minus -= vec[i];
    }

    if (minus < 0)
    {
        isnegative = true;
        minus *= -1;
    }

    if (minus == 0)
    {
        binarybits.push_back(0);
    }

    int tempnum;
    while (minus > 0)
    {
        tempnum = minus % 2;
        minus /= 2;
        binarybits.push_back(tempnum);
    }

    if (isnegative)
    {
        std::cout << "Output is: -";
        for (int i = binarybits.size() - 1; i >= 0; i--)
        {
            std::cout << binarybits[i];
        }
        return 0;
    }
    else
    {
        std::cout << "Output is: ";
        for (int i = binarybits.size() - 1; i >= 0; i--)
        {
            std::cout << binarybits[i];
        }
        return 0;
    }
}
int binarydivide(std::vector<long long int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 0)
        {
            std::cout << "Something went Wrong...! :(\n";
            return 0;
        }
    }
    std::vector<int> binarybits;
    int divide = vec[0];

    for (int i = 1; i < vec.size(); i++) // Subtracting Numbers
    {
        divide /= vec[i];
    }

    if (divide == 0)
    {
        binarybits.push_back(0);
    }

    int tempnum;
    while (divide > 0)
    {
        tempnum = divide % 2;
        divide /= 2;
        binarybits.push_back(tempnum);
    }

    std::cout << "Output is: ";
    for (int i = binarybits.size() - 1; i >= 0; i--)
    {
        std::cout << binarybits[i];
    }
    return 0;
}
void binarymultiply(std::vector<long long int> &vec,long long int &product)
{
    for (int i : vec)
    {
        product *= i;
    }
    // minus = minus * -1;
}

// Trignometric Ratios

void degreetopie(float &angle)
{
    long double PI = 3.14159265358979323846;
    angle = angle * (PI / 180);
}
void pietodegree(float &angle)
{
    long double PI = 3.14159265358979323846;
    angle = angle * (180 / PI);
    std::cout << "\nOutput is: " << angle;
}


void calcuatesin(float angle)
{
    angle = sin(angle);
    std::cout << "\nOutput is: " << angle;
}
void calcuatecos(float angle)
{
    angle = cos(angle);
    std::cout << "\nOutput is: " << angle;
}
void calcuatetan(float angle)
{
    angle = tan(angle);
    std::cout << "\nOutput is: " << angle;
}
void calcuateinversesin(float &angle)
{
    angle = 1 / (sin(angle));
    std::cout << "\nOutput is: " << angle;
}
void calcuateinversecos(float &angle)
{
    angle = 1 / (cos(angle));
    std::cout << "\nOutput is: " << angle;
}
void calcuateinversetan(float &angle)
{
    angle = 1 / (tan(angle));
    std::cout << "\nOutput is: " << angle;
}

int main()
{
    {
        std::cout << "=============================================\n";
        std::cout << "\tAdvance Scientific Calculator\n";
        std::cout << "=============================================\n";
    }
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
            std::cout << "\nUser choose Decimal Number System(0-9)\n";
        }
        else if (usermodechoice == 2)
        {
            std::cout << "User choose Binary Number System (0/1)\n";
        }
        else
        {
            std::cout << "Please Enter Valid number!\n";
        }

        if (usermodechoice == 1) // Decimal Operations
        {
            int userchoiceperationtype;
            std::cout << "Enter the type of operation: \n";
            std::cout << "1. for Standard Arithmetic Operations(+, -, /, x)\n";
            std::cout << "2. for Trigonometric Ratios (Sin(), Cos(), tan(), and inverse of them)\n";
            do
            {
                std::cout << "Enter Number: ";
                std::cin >> userchoiceperationtype;
            } while (userchoiceperationtype > 2 || userchoiceperationtype < 1);
            if (userchoiceperationtype == 1)
            {
                int userchoicedecimal;
                std::cout << "\nEnter which Arthemetic Operation You want to perform: \n";
                std::cout << "1. for ADDITION(+)\n";
                std::cout << "2. for SUBTRACTION(-)\n";
                std::cout << "3. for DIVISION(/)\n";
                std::cout << "4. for MULTIPICATION(x)\n";
                do
                {
                    std::cout << "Enter number: ";
                    std::cin >> userchoicedecimal;
                } while (userchoicedecimal >= 5 || userchoicedecimal < 0);
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
            else if (userchoiceperationtype == 2)
            {
                int usertrigonometrictype;
                std::cout << "\nSelect Trigonometric Ratios: ";
                std::cout << "\n1. for SINE (sin)";
                std::cout << "\n2. for COSINE (cos)";
                std::cout << "\n3. for TANGENT (tan)";
                std::cout << "\n4. for COSECANT (csc - Multiplicative Inverse of sin)";
                std::cout << "\n5. for SECANT (sec - Multiplicative Inverse of cos)";
                std::cout << "\n6. for COTANGENT (cot - Multiplicative Inverse of tan)\n";
                do
                {
                    std::cout << "\nEnter Number: ";
                    std::cin >> usertrigonometrictype;
                } while (usertrigonometrictype > 6 || usertrigonometrictype < 1);
                if (usertrigonometrictype == 1)
                {
                    float angle;
                    std::cout << "Enter angle in Degrees: ";
                    std::cin >> angle;
                    degreetopie(angle);
                    calcuatesin(angle);
                }
                else if (usertrigonometrictype == 2)
                {
                    float angle;
                    std::cout << "Enter angle in Degrees: ";
                    std::cin >> angle;
                    degreetopie(angle);
                    calcuatecos(angle);
                }
                else if (usertrigonometrictype == 3)
                {
                    float angle;
                    std::cout << "Enter angle in Degrees: ";
                    std::cin >> angle;
                    degreetopie(angle);
                    calcuatetan(angle);
                }
                else if (usertrigonometrictype == 4)
                {
                    float angle;
                    std::cout << "Enter angle in Degrees: ";
                    std::cin >> angle;
                    degreetopie(angle);
                    calcuateinversesin(angle);
                    // pietodegree(angle);
                }
                else if (usertrigonometrictype == 5)
                {
                    float angle;
                    std::cout << "Enter angle in Degrees: ";
                    std::cin >> angle;
                    degreetopie(angle);
                    calcuateinversecos(angle);
                    // pietodegree(angle);
                }
                else if (usertrigonometrictype == 6)
                {
                    float angle;
                    std::cout << "Enter angle in Degrees: ";
                    std::cin >> angle;
                    degreetopie(angle);
                    calcuateinversetan(angle);
                    // pietodegree(angle);
                }
            }
        }
        else if (usermodechoice == 2) // Binary Operations
        {

            int userchoicebinary;
            std::cout << "\nEnter which Arthemetic Operation You want to perform: \n";
            std::cout << "1. for ADDITION(+)\n";
            std::cout << "2. for SUBTRACTION(-)\n";
            std::cout << "3. for DIVISION(/)\n";
            std::cout << "4. for MULTIPICATION(x)\n";
            do
            {
                std::cout << "Enter number: ";
                std::cin >> userchoicebinary;
            } while (userchoicebinary >= 5 || userchoicebinary < 0);
            if (userchoicebinary == 1)
            {                          // Add
                std::vector<long long int> vec;  // Store Binary numbers
                std::vector<long long int> vec2; // Store Decimal numbers
                std::vector<int> vec3; // Store Final Decimal Bits
                long long int decimalsum = 0;
                binarynumscollector(vec);
                binaryadd(vec, decimalsum);
                decimaltobinary(decimalsum, vec3);
                decimalbitsprinter(vec3);
            }
            else if (userchoicebinary == 2)
            {                          // Subtraction
                std::vector<long long int> vec;  // Store Binary numbers
                std::vector<long long int> vec2; // Store Decimal numbers
                binarynumscollector(vec);
                binarytodecimal(vec, vec2);
                binaryminus(vec2);
            }
            else if (userchoicebinary == 3)
            {                          // Division
                std::vector<long long int> vec;  // Store Binary numbers
                std::vector<long long int> vec2; // Store Decimal numbers
                binarynumscollector(vec);
                binarytodecimal(vec, vec2);
                binarydivide(vec2);
            }
            else if (userchoicebinary == 4)
            {                          // Multipication
                std::vector<long long int> vec;  // Store Binary numbers
                std::vector<long long int> vec2; // Store Decimal numbers
                std::vector<int> vec3; // Store Final Decimal Bits
                long long int decimalmultiply = 1;
                binarynumscollector(vec);
                binarytodecimal(vec, vec2);
                binarymultiply(vec2, decimalmultiply);
                decimaltobinary(decimalmultiply, vec3);
                decimalbitsprinter(vec3);
            }
        }

        std::cout << "\nDo you want more Maths?(y/n): ";
        std::cin >> userchoice;
    } while (userchoice == 'y' || userchoice == 'Y');
    std::cout << "Thanks! for using our Advance Scientific Calculator";
    return 0;
}
