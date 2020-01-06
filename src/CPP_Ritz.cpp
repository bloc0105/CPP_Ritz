//============================================================================
// Name        : CPP_Ritz.cpp
// Author      : Andrew Block
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "symengine/expression.h"

int main() {
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	std::string x = "x";
	SymEngine::Expression xx(x);
	std::cout << "X is " << x << std::endl;
	return 0;
}
