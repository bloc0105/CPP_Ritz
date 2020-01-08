//============================================================================
// Name        : CPP_Ritz.cpp
// Author      : Andrew Block
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#define _GLIBCXX_USE_CXX11_ABI 0
//#define _GLIBCXX_USE_CXX11_ABI 1 

#include <iostream>
#include <string>
#include "symengine/symbol.h"

int main() {
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	//const std::string x = "x";
	const SymEngine::RCP<const SymEngine::Symbol> xx = (SymEngine::symbol("x"));
	//std::cout << "X is " << x << std::endl;
	return 0;
}
