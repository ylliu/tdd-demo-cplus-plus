#include "Calculator.h"


Calculator::Calculator(){

}


Calculator::~Calculator(){

}

double Calculator::add(double a, double b){
	return a + b;
}

double Calculator::subtract(double a, double b){
	return a - b;
}

double Calculator::multiply(double a, double b){
	return a*b;
}

double Calculator::divide(double a, int b){
	return a / b;
}
