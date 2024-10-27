#include "app.h"
#include "sstream"
using namespace std::string_literals;
using namespace vsite::oop::v1;
// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int n;
	std::stringstream ss;
	std::cin >> n;
	std::cout << to_hex(n);
	std::cout << "\n";
	mult_table(n, ss);
	std::cout << ss.str();
}
