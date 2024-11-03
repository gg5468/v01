#include "app.h"
#include <format>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std::string_literals;

namespace vsite::oop::v1
{
	std::string to_hex(unsigned int n) {
        return std::format("{:X}", n);
	};
	std::string to_exp(double n) {
        return std::format("{:.2e}", n);
	};
    void mult_table(int n, std::ostream& ss) {
        if (n == 0 || n > 20) {
            ss << "";
            return;
        }

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                if (j > 0) {
                    ss << std::setw(4);
                }
                if (j == 0) {
                    ss << i; 
                }
                else if (i == 0) {
                    ss << std::setw(4) << j;
                }
                else {
                    ss << std::setw(4) << i * j;
                }
            }
            ss << "\n"; 
        }
    }

} // namespace

