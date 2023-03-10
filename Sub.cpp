#include<iostream>

class Subtraction
{

public:

    int sub()
    {

        int num[100], i = 0, sub;
        char sign = '-';

        std::cout << "Enter the numbers to subtract" << std::endl;
        while (sign !='=')
        {
            std::cin >> num[10];
            std::cin >> sign;
            sub = num[0]-num[2];
            i++;
        }
        std::cout << "The remaining value after Subtraction is: "<<sub << std::endl;
        return 0;
    }

};