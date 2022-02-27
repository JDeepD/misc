#include <iostream>
#include <string>

std::string colorise(std::string str, int colorcode);

int main(void)
{

	std::cout << colorise("C++\t90%\n", 93);
	std::cout << colorise("Python\t10%\n", 34);

	return 0;
}


std::string colorise(std::string str, int colorcode)
{
	return "\033[" + std::string("2;") + std::to_string(colorcode) + "m" + str + "\033[0m";
}
