#include <iostream>
#include "scientific.h"


Scientific::Scientific() : Calculator() {}


void Scientific::welcome() const
{
    std::cout << "\n\nSaisissez l'un des éléments suivants :\n"
        << "+, -, /, *, sqrt, square, change, setmem, printmem, sin, cos, log, tan, ln, abs, pow\n"
        << "ou exit\n";
}


void Scientific::parseOperation(const std::string& input)
{

    Calculator::parseOperation(input);

    if (input == "sin")
    {
        sin();
    }
    else if (input == "cos")
    {
        cos();
    }
    else if (input == "tan")
    {
        cos();
    }
    else if (input == "ln")
    {
        ln();
    }
    else if (input == "log")
    {
        log();
    }
    else if (input == "abs")
    {
        abs();
    }
    else if (input == "pow")
    {
        pow();
    }
}
void Scientific::sin()
{
    std::string a;
    std::cout << "Entre un nombre ";
    std::cin >> a;
    result = std::sin(parseInput(a));
    std::cout << "Le resultat est " << result;
}
void Scientific::cos()
{
    std::string a;
    std::cout << "Entre un nombre ";
    std::cin >> a;
    result = std::cos(parseInput(a));
    std::cout << "Le resultat est " << result;
}
void Scientific::tan()
{
    std::string a;
    std::cout << "Entre un nombre ";
    std::cin >> a;
    result = std::tan(parseInput(a));
    std::cout << "Le resultat est " << result;
}
void Scientific::ln()
{
    std::string a;
    std::cout << "Entre un nombre ";
    std::cin >> a;
    result = std::log(parseInput(a));
    std::cout << "Le resultat est " << result;
}
void Scientific::log()
{
    std::string a, b;
    std::cout << "Entre une base: ";
    std::cin >> a;
    std::cout << "Entre un nombre ";
    std::cin >> b;
    result = std::log(parseInput(b)) / std::log(parseInput(a));
    std::cout << "Le resultat est " << result;
}
void Scientific::abs()
{
    std::string a;
    std::cout << "Entre un nombre ";
    std::cin >> a;
    result = std::abs(parseInput(a));
    std::cout << "Le resultat est " << result;
}
void Scientific::pow()
{
    std::string a, b;
    std::cout << "Entre une base: ";
    std::cin >> a;
    std::cout << "Enter the exponent: ";
    std::cin >> b;
    result = std::pow(parseInput(a), parseInput(b));
    std::cout << "Le resultat est " << result;
}