#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

#include "Calculator.h"

TEST_GROUP(CalculatorTest){
	void setup(){
		calculator = new Calculator();
	}
	void teardown(){
		delete calculator;
	}

	Calculator*	calculator;
};

TEST(CalculatorTest, should_return_sum_of_two_numbers){
	CHECK_EQUAL(3.9, calculator->add(1.5, 2.4));
}

TEST(CalculatorTest, should_return_difference_of_two_numbers){
	CHECK_EQUAL(8.1, calculator->subtract(10.5, 2.4));
}

TEST(CalculatorTest, should_return_product_of_two_numbers){
	CHECK_EQUAL(6.0, calculator->multiply(2.5, 2.4));
}

TEST(CalculatorTest, should_return_quotient_of_two_numbers){
	CHECK_EQUAL(1.25, calculator->divide(2.5, 2));
}