#include <iostream>
#include <cstdlib>
#include <string>

void question1() {
    for (int x{ 0 }; x < 21; ++x) {
        std::cout << x << std::endl;
    }
}
//Question 2
int sumTo(int value) {
    int sum{0};
    for (int x{ 1 }; x < value + 1; ++x) {
        sum += x;
    }
    return sum;
}

//Question 4
void fizzbuzz(int num) {
    for (int x{ 1 }; x <= num; ++x) {
        if (x % 3 == 0 && x % 5 == 0) {
            std::cout << "fizzbuzz" << std::endl;
        }
        else if (x % 3 == 0) {
            std::cout << "fizz" << std::endl;
        }
        else if (x % 5 == 0) {
            std::cout << "buzz" << std::endl;
        }
        else {
        std::cout << x << std::endl;
        }
    }
}

void question5(int count) {
    
        for (int i{ 1 }; i <= count; ++i)
        {
            
                bool printed{ false };
                if (i % 3 == 0)
                {
                    std::cout << "fizz";
                    printed = true;
                }
                if (i % 5 == 0)
                {
                    std::cout << "buzz";
                    printed = true;
                }
                if (i % 7 == 0)
                {
                    std::cout << "pop";
                    printed = true;
                }

                if (!printed)
                    std::cout << i;

                std::cout << '\n';
        } 
    
}


int main()
{
    //question1();
    //std::cout << "Question 2: sumTo(5) = " << sumTo(5) << std::endl;;
    //fizzbuzz(15);
    //question5(8);
    question5(22);
    //question5(106);
    return EXIT_SUCCESS;
}
