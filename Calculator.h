#ifndef TDD_DEMO_CALCULATOR_H
#define TDD_DEMO_CALCULATOR_H
class Calculator
{
public:
	Calculator();
	~Calculator();
	double add(double a, double b);
	double subtract(double a, double b);
	double multiply(double a, double b);
	double divide(double a, int b);
};

#endif
