#include "Rational.h"
#include <iostream>
//already defined which outputs the rational fraction in the form x/y
ostream& Rational::print(ostream& Out)
{
    Out << numerator << "/" << denominator;
    return Out;
}
//Already defined
istream& Rational::scan(istream& In)
{
    In >> numerator;
    In.ignore(1);
    In >> denominator;
    return In;
}
//Already defined
ostream& operator<<(ostream& Out, Rational& r)
{
    return r.print(Out);
}
//Already defined
istream& operator>>(istream& In, Rational& r)
{
    return r.scan(In);
}
//move constructor
Rational::Rational(Rational&& other)
{
    numerator=other.numerator;
    denominator=other.denominator;
}
//copy instructor
Rational::Rational(Rational& other)
{
    numerator=other.numerator;
    denominator=other.denominator;
}
//defining the constructor
//used "this->" as the arguments should not have the same identifier as the attributes
Rational::Rational(Integer numerator, Integer denominator)
{
    this->numerator = numerator;
    this->denominator = denominator;
}
//Defines the operator "=" allowing the numerator on the right hand side = the numerator of the left hand side and vice versa
Rational& Rational::operator=(const Rational& other)
{
    numerator = other.numerator;
    denominator = other.denominator;
}

// Defining the toDouble function. I used casting to ensure our output is a double
double Rational::toDouble()
{
    return (double) numerator / denominator;
}
//Defining the "+" operator which basically adds two rational fractions
Rational Rational::operator+(const Rational& other)
{
    int a =(numerator*other.denominator)+(other.numerator*denominator);
    int b =denominator*other.denominator;
    return Rational(a, b);
}
//Defining the "*" operator which basically finds the product of two rational fractions
Rational Rational::operator*(const Rational& other)
{
    Rational add;
    int n= numerator*other.numerator;
    int d=denominator*other.denominator;
    return Rational(n,d);
}
//Defining the "-" operator which basically finds the difference between two rational fractions
Rational Rational::operator-(const Rational& other)
{
    int n =(numerator*other.denominator)-(other.numerator*denominator);
    int d =denominator*other.denominator;
    return Rational(n, d);
}
//Defining the "/" operator which basically divides two rational fractions
Rational Rational::operator/(const Rational& other)
{
    int n = numerator*other.denominator;
    int d = denominator*other.numerator;
    return Rational(n, d);
}
//Defining the "+=" operator which basically does x=x+y where it returns basically x after y is added to it
//x and y are two rational fractions
Rational Rational::operator+=(const Rational& other)
{
    Rational addeq;
    numerator =(numerator*other.denominator)+(other.numerator*denominator);
    denominator=denominator*other.denominator;
    return Rational(numerator, denominator);
}
//Defining the "-=" operator which basically does x=x-y where it returns basically x after y is minused from it
//x and y are two rational fractions
Rational Rational::operator-=(const Rational& other)
{
    numerator=(numerator*other.denominator)-(other.numerator*denominator);
    denominator=denominator*other.denominator;
    return Rational(numerator, denominator);
}
//Defining the "/=" operator which basically does x=x/y where it returns basically x after x is divided by y
//x and y are two rational fractions
Rational Rational::operator/=(const Rational& other)
{
    numerator = numerator*other.denominator;
    denominator= denominator*other.numerator;
    return Rational(numerator, denominator);
}
//Defining the "*=" operator which basically does x=x/y where it returns basically x after x is divided by y
//x and y are two rational fractions
Rational Rational::operator*=(const Rational& other)
{
    numerator= numerator*other.numerator;
    denominator=denominator*other.denominator;
    return Rational(numerator,denominator);
}





