#include <iostream>
#include <fstream>

int main() {
    std::ifstream reader;
    std::string name, surname, data, great_name;
    int salary, sum = 0, big_sal = 0;
    reader.open("P:\\Salary statement.txt");

    while (!reader.eof()) {
        reader >> name >> surname >> salary >> data;
        sum += salary;
        std::cout << name << " " << surname << " " << salary << " " << data << "\n";

    }
    std::cout << "Total amount of money earned: " << sum << "\n";
}
