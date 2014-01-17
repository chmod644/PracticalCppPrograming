#include <iostream>

int result;
char oper_char;
int value;

int main(void)
{
	result = 0;
	while (true) {
		std::cout << "Result: " << result << '\n';
		std::cout << "Enter operator and number: ";

		std::cin >> oper_char >> value;

		if ((oper_char == 'q') || (oper_char == 'Q')) {
			break;
		}

		switch (oper_char) {
			case '+':
				result += value;
				break;
			case '-':
				result -= value;
				break;
			case '*':
				result *= value;
				break;
			case '/':
				if (value == 0) {
					std::cout << "Error: Divide by zero\n";
					std::cout << "  operation ignored\n";
				} else {
					result /= value;
				}
				break;
			default:
				std::cout << "Unknown operator " << oper_char << '\n';
				break;
		}
	}
	return 0;
}
