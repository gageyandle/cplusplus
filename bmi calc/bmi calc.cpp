#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

class Person {
private:
    std::string name;
    double weight;  // in kilograms
    double height;  // in meters

public:
    // Constructor with initializer list
    Person(std::string name, double weight, double height)
        : name(name), weight(weight), height(height) {}

    // Constant function to calculate BMI
    double calculateBMI() const {
        if (height <= 0) return 0;
        return weight / (height * height);
    }

    // Static function to interpret BMI values
    static std::string interpretBMI(double bmi) {
        if (bmi <= 0) return "Invalid BMI";
        if (bmi < 18.5) return "Underweight";
        if (bmi < 25.0) return "Normal weight";
        if (bmi < 30.0) return "Overweight";
        if (bmi < 35.0) return "Obesity (Class 1)";
        if (bmi < 40.0) return "Obesity (Class 2)";
        return "Extreme obesity (Class 3)";
    }

    // Getter for name
    std::string getName() const {
        return name;
    }
};

int main() {
    int numPeople;
    std::cout << "How many people would you like to calculate BMI for? ";
    std::cin >> numPeople;
    std::cin.ignore(); // Clear the newline character

    // Create an array (vector) of Person objects
    std::vector<Person> people;

    // Input data for each person
    for (int i = 0; i < numPeople; i++) {
        std::string name;
        double weight, height;

        std::cout << "\nPerson " << (i + 1) << ":\n";
        std::cout << "Enter name: ";
        std::getline(std::cin, name);

        std::cout << "Enter weight (in kg): ";
        std::cin >> weight;

        std::cout << "Enter height (in meters): ";
        std::cin >> height;
        std::cin.ignore(); // Clear the newline character

        // Create Person object and add to the array
        people.push_back(Person(name, weight, height));
    }

    // Display results
    std::cout << "\n===== BMI Results =====\n";
    std::cout << std::left << std::setw(20) << "Name" 
              << std::setw(10) << "BMI" 
              << "Interpretation\n";
    std::cout << std::string(50, '-') << "\n";

    for (const auto& person : people) {
        double bmi = person.calculateBMI();
        std::cout << std::left << std::setw(20) << person.getName()
                  << std::fixed << std::setprecision(1) << std::setw(10) << bmi
                  << Person::interpretBMI(bmi) << "\n";
    }

    return 0;
}