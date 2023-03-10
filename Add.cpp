#include<iostream>

class Addition
{

public:

    int add()
    {
        int num, i = 0, sum = 0;
        char sign = '+';

        std::cout << "Enter the numbers to add" << std::endl;
        std::cout << "PLEASE USE THIS FORMAT TO ENTER THE INPUTS :: 1+2+3=" << std::endl;
        std::cout << "PRESS EQUALS TO KNOW THE RESULT" << std::endl;
        while (sign != '=')
        {
            std::cin >> num;
            std::cin >> sign;
            sum = sum + num;
            i++;
        }


        std::cout << "The sum of numbers is " << sum << std::endl;
        return 0;

    }
};