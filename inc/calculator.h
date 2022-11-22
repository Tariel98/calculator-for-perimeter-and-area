#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__


class Rectangle
{
    public:

        Rectangle(double, double);
        double surface();
        double perimeter();

    protected:

        double first_parameter;
        double second_parameter;
};

class Scuare : public Rectangle
{
    public:
        Scuare(double);
};

class Ellipse : public Rectangle
{
    public:
        Ellipse(double, double);
        double area();
        double perimeter();

    protected:
        double pi;

};

class Circle : public Ellipse
{
    public:
        Circle(double);
        double perimeter();
};

class Triagle : public Ellipse
{
    public:
        Triagle(double, double, double);
        double area();
        double perimeter();

    private:
        double third_parameter;
        double perim;
};

#endif
