#include <iostream>
#include "calculator.h"


Calculator::Calculator() : result(0.0), mem(0.0) {}

void Calculator::add()
{
    std::string a, b;
    std::cout << "Entre le premier nombre: ";
    std::cin >> a;
    std::cout << "Entre le second nombre: ";
    std::cin >> b;
    result = parseInput(a) + parseInput(b);
    std::cout << "Le resultat est: " << result;
}
void Calculator::subtract()
{
    std::string a, b;
    std::cout << "Entre le premier nombre: ";
    std::cin >> a;
    std::cout << "Entre le second nombre: ";
    std::cin >> b;
    result = parseInput(a) - parseInput(b);
    std::cout << "Le resultat est: " << result;
}
void Calculator::multiply()
{
    std::string a, b;
    std::cout << "Entre le premier nombre: ";
    std::cin >> a;
    std::cout << "Entre le second nombre: ";
    std::cin >> b;
    result = parseInput(a) * parseInput(b);
    std::cout << "Le resultat est: " << result;
}
void Calculator::divide()
{
    std::string a, b;
    std::cout << "Entre le premier nombre: ";
    std::cin >> a;
    std::cout << "Entre le second nombre: ";
    std::cin >> b;
    result = parseInput(a) / parseInput(b);
    std::cout << "Le resultat est: " << result;
}
void Calculator::square()
{
    std::string a;
    std::cout << "Entre un nombre: ";
    std::cin >> a;
    double parsedA = parseInput(a);
    result = parsedA * parsedA;
    std::cout << "Le resultat est: " << result;
}
void Calculator::sqrt()
{
    std::string a;
    std::cout << "Entre un nombre: ";
    std::cin >> a;
    result = std::sqrt(parseInput(a));
    std::cout << "Le resultat est: " << result;
}
void Calculator::setMem()
{
    std::string a;
    std::cout << "Entre un nombre: ";
    std::cin >> a;
    mem = parseInput(a);
    std::cout << "Le mem est :" << mem;
}
void Calculator::printMem() const
{
    std::cout << "Le mem est : " << mem;
}

double Calculator::parseInput(const std::string& input) const
{
    if (input == "result")
    {
        return result;
    }
    else if (input == "mem")
    {
        return mem;
    }
    else
    {
        return std::stod(input);
    }
}
void Calculator::welcome() const
{
    std::cout << "\n\nEntrez une opération (+, -, /, *, sqrt, square, change, setmem, printmem) ou exit\n";
}

void Calculator::parseOperation(const std::string& input)
{
    if (input == "+" || input == "add" || input == "addition" || input == "sum")
    {
        add();
    }
    else if (input == "-" || input == "sub" || input == "subtraction" || input == "minus")
    {
        subtract();
    }
    else if (input == "/" || input == "divide" || input == "div")
    {
        divide();
    }
    else if (input == "*" || input == "mul" || input == "multiply" || input == "times")
    {
        multiply();
    }
    else if (input == "sqrt")
    {
        sqrt();
    }
    else if (input == "square")
    {
        square();
    }
    else if (input == "setmem")
    {
        setMem();
    }
    else if (input == "printmem")
    {
        printMem();
    }
}