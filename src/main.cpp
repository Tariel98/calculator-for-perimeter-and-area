#include <iostream>
#include "calculator.h"

int main () 
{
    Scuare scuare( 5 );

    std::cout << "Scuare perimeter: " << scuare.perimeter() << std::endl;
    std::cout << "Scuare area: " << scuare.surface() << std::endl;

    Rectangle rectangle( 5, 6 );

    std::cout << "Rectangle perimeter: " << rectangle.perimeter() << std::endl;
    std::cout << "Rectangle rea: " << rectangle.surface() << std::endl;

    Ellipse ellipse( 5, 6 );

    std::cout << "Ellipse perimeter: " << ellipse.perimeter() << std::endl;
    std::cout << "Ellipse area: " << ellipse.surface() << std::endl;

    Circle circle( 5 );

    std::cout << "Circle perimeter: " << circle.perimeter() << std::endl;
    std::cout << "Circle area: " << circle.surface() << std::endl;

    Triagle triagle( 5, 6, 7 );

    std::cout << "Triagle perimeter: " << triagle.perimeter() << std::endl;
    std::cout << "Triagle area: " << triagle.surface() << std::endl;


}


