#include "calculator.h"

Rectangle::Rectangle(double a, double b)
    : first_parameter( a )
    , second_parameter( b ) {}

double Rectangle::surface()
{
    return first_parameter * second_parameter;
}

double Rectangle::perimeter()
{
    return (first_parameter * 2) + (second_parameter * 2);
}

Scuare::Scuare(double a)
            : Rectangle(a, a)
            {
            }

Ellipse::Ellipse(double major_radius, double minor_radius)
            :Rectangle(major_radius, minor_radius)
            ,pi(3.14)
            {
            }

double Ellipse::area()
{
    return first_parameter * second_parameter * pi;
}

double Ellipse::perimeter()
{
    return pi * (first_parameter + second_parameter);
}

Circle::Circle(double radius)
            : Ellipse(radius, radius)
            {
            }

double Circle::perimeter()
{
    return 2 * pi * first_parameter;    
}

Triagle::Triagle(double a, double b, double c)
            :Ellipse(a,b)
            ,third_parameter(c)
            ,perim
            {}
{}
double Triagle::perimeter()
{
    return first_parameter + second_parameter + third_parameter; 
}

double Triagle::area()
{
    perim = Triagle::perimeter()/2;
    return 0.5 * ((perim*(perim - first_parameter)) * (perim*(perim - second_parameter)) * (perim*(perim - third_parameter)));
}
