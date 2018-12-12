#include <iostream>

void airSound(double);
void waterSound(double);
void steelSound(double);


int main() {

    int choice;

    std::cout << "Welcome! Please enter the number you wish to calculate.\n";
    std::cout << "1. Calculate the speed of sound for air.\n";
    std::cout << "2. Calculate the speed of sound for water.\n";
    std::cout << "3. Calculate the speed of sound for steel.\n";
    std::cout << "4. Quit.\n\n";

    std::cin >> choice;

    if (choice >= 1 && choice <= 3) {
        if (choice == 1) {
            double airFeet;
            std::cout << "Enter the number of feet to calculate the sound for air: ";
            std::cin >> airFeet;
            if (airFeet < 0) {
                std::cout << "Invalid entry. Number must be greater than 0.\n";
            }
            else
                airSound(airFeet);
        }

        else if (choice == 2) {
            double waterFeet;
            std::cout << "Enter the number of feet to calculate the sound for water: ";
            std::cin >> waterFeet;
            if (waterFeet < 0) {
                std::cout << "Invalid entry. Number must be greater than 0.\n";
            }
            else
                waterSound(waterFeet);
        }

        else if (choice == 3) {
            double steelFeet;
            std::cout << "Enter the number of feet to calculate the sound for steel: ";
            std::cin >> steelFeet;
            if (steelFeet < 0) {
                std::cout << "Invalid entry. Number must be greater than 0.\n";
            }
            else
                steelSound(steelFeet);
        }

    }


    else if (choice != 1 && choice != 2 && choice != 3 && choice != 4){
        std::cout << "Invalid entry!\n";
    }

    else if (choice == 4){
        std::cout << "Program finished!\n";
    }


    return 0;
}


void airSound(double airDistance) {

    double airSpeed = airDistance / 1100;

    std::cout << airSpeed << std::endl;
}

void waterSound(double waterDistance) {

    double waterSpeed = waterDistance / 4900;

    std::cout << waterSpeed << std::endl;
}

void steelSound(double steelDistance) {
    double steelSpeed = steelDistance / 16400;

    std::cout << steelSpeed << std::endl;
}
