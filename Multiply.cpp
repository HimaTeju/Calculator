#include<iostream>

class Multiplication
{

public:

    int multi()
    {

        int num, i = 0, pro = 1;
        char sign = '*';
        
        std::cout << "Enter the numbers to multiply" <<std:: endl;
        while(sign != '=')
        {
            std::cin >> num;
            std::cin >> sign;
            pro = pro * num;
            i++;
        }
        std::cout << "The Product is =" << pro << std::endl;
        return 0;
    }


};