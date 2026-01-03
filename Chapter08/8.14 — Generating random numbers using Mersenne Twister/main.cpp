#include <iostream>
#include <cstdlib>
#include <random>
#include <chrono>

void systemClock();
void randomDevice();
void seedSeq();

int main()
{
    std::mt19937 mt{};
    std::uniform_int_distribution die6{ 1,6 };

    for (int count{ 1 }; count <= 40; ++count) {
        std::cout << die6(mt) << '\t';
        if (count % 10 == 0) {
            std::cout << '\n';
        }
    }

    std::cout << "Using system clock for seeding" << std::endl;
    systemClock();

    std::cout << "Using random device for seeding" << std::endl;
    randomDevice();
    
    std::cout << "Using random device for seeding" << std::endl;
    seedSeq();
    return EXIT_SUCCESS;
}

void systemClock() {
    // This clock can't be changed by users but less granular time
  /*  std::mt19937 mt{ static_cast<std::mt19937::result_type>(
        std::chrono::steady_clock::now().time_since_epoch().count()
) };*/

    // This clock can be changed by users but more granular time
    std::mt19937 mt{ static_cast<std::mt19937::result_type>(
        std::chrono::high_resolution_clock::now().time_since_epoch().count()
) };
    std::uniform_int_distribution die6{ 1,6 };
    for (int j{ 1 }; j <= 40; ++j) {
        std::cout << die6(mt) << '\t';
        if (j % 10 == 0) {
            std::cout << '\n';
        }
    }
}

void randomDevice() {
    std::mt19937 mt{ std::random_device{}()};
    std::uniform_int_distribution die6{1,6};
    for (int k{ 1 }; k <= 40; ++k) {
        std::cout << die6(mt) << '\t';
        if (k % 10 == 0) {
            std::cout << '\n';
        }
    }

}

void seedSeq() {
    std::random_device rd{};
    std::seed_seq ss{ rd(),rd(), rd(), rd(), rd(), rd() };
    std::mt19937 mt{ ss };
    std::uniform_int_distribution die6{1, 6};

    for (int i{ 1 }; i <= 40; ++i) {
        std::cout << die6(mt) << '\t';
        if (i % 10 == 0) {
            std::cout << '\n';
        }
    }
    
}