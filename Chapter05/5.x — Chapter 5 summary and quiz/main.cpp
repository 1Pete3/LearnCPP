#include <iostream>
#include <string>
#include <string_view>

std::string getName(int personNum) {
    std::string personName{};
    std::cout << "Enter the name of person #" << personNum << ": ";
    std::getline(std::cin >> std::ws, personName);
    return personName;
}

int getAge(std::string_view person) {
    int personAge{};
    std::cout << "Enter the age of " << person << ": ";
    std::cin >> personAge;
    return personAge;
}

// David Jenkins (age 44) is older than John Bacon (age 37).
void printComparison(int p1Age, std::string_view p1Name, int p2Age, std::string_view p2Name) {
    if (p1Age > p2Age) {
        std::cout << p1Name << " (age " << p1Age << ") is older than " << p2Name << " (age " << p2Age << ")." << std::endl;
    }
    else if (p1Age < p2Age) {
        std::cout << p2Name << " (age " << p2Age << ") is older than " << p1Name << " (age " << p1Age << ")." << std::endl;
    }
    else {
        std::cout << p1Name << " (age " << p1Age << ") is the same age as " << p2Name << " (age " << p2Age << ")." << std::endl;
    }
}




int main()
{
    const std::string person1Name{getName(1)};
    const std::string person2Name{getName(2)};
    const int person1Age{ getAge(person1Name) };
    const int person2Age{ getAge(person2Name) };
    printComparison(person1Age, person1Name, person2Age, person2Name);

    return 0;
}