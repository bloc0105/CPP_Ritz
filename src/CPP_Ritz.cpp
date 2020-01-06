//============================================================================
// Name        : CPP_Ritz.cpp
// Author      : Andrew Block
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <expression.h>
using SymEngine::Expression;

int main() {
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	const std::string &x = "x";
	Expression xx(x);
	std::cout << "X is " << x << std::endl;
	return 0;
}
