#include<iostream>

class Division
{
public:

    int div()
    {

        int n1, n2, qo;

        std::cout << "Enter the first number" << std::endl;
        std::cin >> n1;
        std::cout << "Enter the second number" << std::endl;
        std::cin >> n2;
        qo = n1 / n2;
        std::cout << "The Quotient value after division is " << qo << std::endl;
        return 0;
     
    }


};