#include <iostream>
#include <cmath>

void calcCircle(double);
void calcRectangle(double, double);
void calcTriangle(double, double);



int main() {

    int choice;

    std::cout << "Welcome! Please enter the number you wish to calculate.\n";
    std::cout << "1. Calculate the area of a circle.\n";
    std::cout << "2. Calculate the area of a rectangle.\n";
    std::cout << "3. Calculate the area of a triangle.\n";
    std::cout << "4. Quit.\n\n";

    std::cin >> choice;


    if (choice >= 1 && choice <= 3) {
        switch (choice) {
            case 1:
                double circle;
                std::cout << "Enter the radius: ";
                std::cin >> circle;

                if (circle < 0) {
                    std::cout << "Can't input negative numbers.\n";
                }
                else
                    calcCircle(circle);
                break;

            case 2:
                double rectangleLength,
                rectangleWidth;
                std::cout << "Enter the length: ";
                std::cin >> rectangleLength;
                std::cout << "Enter the width: ";
                std::cin >> rectangleWidth;

                if (rectangleLength < 0 || rectangleLength < 0) {
                    std::cout << "Can't input negative numbers.\n";
                }
                else
                    calcRectangle(rectangleWidth, rectangleLength);
                break;

            case 3:
                double triangleHeight,
                triangleBase;
                std::cout << "Enter the height: ";
                std::cin >> triangleHeight;
                std::cout << "Enter the base: ";
                std::cin >> triangleBase;

                if (triangleHeight < 0 || triangleBase < 0) {
                    std::cout << "Can't input negative numbers.\n";
                }
                else
                    calcTriangle(triangleHeight, triangleBase);
                break;

            default:
                break;
        }
    }

    else if (choice != 1 && choice != 2 && choice != 3 && choice !=4){
        std::cout << "Invalid entry!\n";
    }

    else if (choice == 4) {
        std::cout << "Program finished!\n";
    }


    return 0;
}


void calcCircle(double radius) {
    double areaCircle;

    areaCircle = 3.1459 * pow(radius, 2);

    std::cout << "Area of Circle: " << areaCircle << std::endl;
}

void calcRectangle(double length, double width){
    double areaRectangle;

    areaRectangle = length * width;

    std::cout << "Area of Rectangle: " << areaRectangle << std::endl;

}

void calcTriangle(double base, double height){
    double areaTriangle;

    areaTriangle = (base * height) / 2.0;

    std::cout << "Area of Triangle: " << areaTriangle << std::endl;

}
