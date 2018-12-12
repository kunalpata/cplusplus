#include <iostream>

void carbonDioxideSpeed(double);
void airSpeed(double);
void heliumSpeed(double);
void hydrogenSpeed(double);


int main() {
    
    int choice;
    
    std::cout << "Welcome! Please enter the number you wish to calculate.\n";
    std::cout << "1. Calculate the speed for carbon dioxide.\n";
    std::cout << "2. Calculate the speed for air.\n";
    std::cout << "3. Calculate the speed for helium.\n";
    std::cout << "4. Calculate the speed for hydrogen.\n";
    std::cout << "5. Quit.\n\n";
    
    std::cin >> choice;
    
    if (choice >= 1 && choice <= 4) {
        if (choice == 1) {
            double cDSpeed = 0.0;
            std::cout << "Enter the number of seconds between 1 and 30 to calculate the speed: ";
            std::cin >> cDSpeed;
            if (cDSpeed < 1 && cDSpeed > 30) {
                std::cout << "Invalid entry.\n";
            }
            else
                carbonDioxideSpeed(cDSpeed);
        }
        
        else if (choice == 2) {
            double airSpeed = 0.0;
            std::cout << "Enter the number of seconds between 1 and 30 to calculate the speed: ";
            std::cin >> airSpeed;
            if (airSpeed < 1 && airSpeed > 30) {
                std::cout << "Invalid entry.\n";
            }
            else
                carbonDioxideSpeed(airSpeed);
        }
        
        else if (choice == 3) {
            double heliumSpeed = 0.0;
            std::cout << "Enter the number of seconds between 1 and 30 to calculate the speed: ";
            std::cin >> heliumSpeed;
            if (heliumSpeed < 1 && heliumSpeed > 30) {
                std::cout << "Invalid entry.\n";
            }
            else
                carbonDioxideSpeed(heliumSpeed);
        }
        
        else if (choice == 4) {
            double hydrogenSpeed = 0.0;
            std::cout << "Enter the number of seconds between 1 and 30 to calculate the speed: ";
            std::cin >> hydrogenSpeed;
            if (hydrogenSpeed < 1 && hydrogenSpeed > 30) {
                std::cout << "Invalid entry.\n";
            }
            else
                carbonDioxideSpeed(hydrogenSpeed);
        }
        
    }
    
    else if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice !=4){
        std::cout << "Invalid entry!\n";
    }

    else if (choice == 5){
        std::cout << "Program finished!\n";
    }
    
    return 0;

}


void carbonDioxideSpeed(double cDSec){
    
    double distance = 258.0 * cDSec;
    
    std::cout << distance << std::endl;
}

void airSpeed(double airSec){
    
    double distance = 331.5 * airSec;
    
    std::cout << distance << std::endl;
}

void heliumSpeed(double heliumSec){
    
    double distance = 972.5 * heliumSec;
    
    std::cout << distance << std::endl;
}

void hydrogenSpeed(double hydrogenSec){
    
    double distance = 1270.0 * hydrogenSec;
    
    std::cout << distance << std::endl;
}
