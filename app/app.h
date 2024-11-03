#pragma once
#include <string>
#include <iostream>

namespace vsite::oop::v1
{
	std::string to_exp(double n);
	void mult_table(int n, std::ostream& ss);
	std::string to_hex(unsigned int n);
}
