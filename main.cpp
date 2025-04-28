#include <iostream>
#include <cmath>

//Macros

#define SQUARE(r) ((r)* (r)) // Circle radius into diameter
#define CIRCL_Area(d) (SQUARE(d) *3.14) // Circle circumference

// functions
double circleArea(double x) {
    return CIRCL_Area(x);
}
bool evenNum(int x){
    return (x % 2 == 0);

}
int main() {
    int r;
    std::cout << "Enter a radius: ";
    std::cin >> r;


    //std::cout << "The Circles area based off of the radius given: ";
    std::cout << "Area of Circle: " << circleArea(r) << std::endl;

    if (evenNum(r)) {
        std::cout << r << " is a even number" << std::endl;
    } else {
        std::cout << r << " is a odd number" << std::endl;
    }
    return 0;

    
}