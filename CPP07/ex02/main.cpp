//
// Created by Retro Joella on 4/29/21.
//

#include "Array.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#define BLACK ("\x1B[30m")
#define RED ("\x1B[31m")
#define GREEN ("\x1B[32m")
#define YELLOW ("\x1B[33m")
#define BLUE ("\x1B[34m")
#define MAGENTA ("\x1B[35m")
#define CYAN  ("\x1B[36m")
#define WHITE ("\x1B[37m")
#define BRIGHT_BLACK ("\x1B[90m")
#define BRIGHT_RED ("\x1B[91m")
#define BRIGHT_GREEN ("\x1B[92m")
#define BRIGHT_YELLOW ("\x1B[93m")
#define BRIGHT_BLUE ("\x1B[94m")
#define BRIGHT_MAGENTA ("\x1B[95m")
#define BRIGHT_CYAN  ("\x1B[96m")
#define BRIGHT_WHITE ("\x1B[97m")
#define BG_BLUE ("\x1B[104m")
#define END ("\033[0m")


int main () {
	try{
		Array<int> test(0);
		
		Array<int> test_1(5);
		for (int i = 0; i < test_1.getsize(); ++i) {
			test_1[i] = i + 1;
		}
		std::cout << BRIGHT_GREEN << "Array <int> - TEST_1" << END << "\n[ ";
		for (int i = 0; i < test_1.getsize(); ++i) {
			std::cout << test_1[i] << (i != test_1.getsize() - 1 ? ", " : " ");
		}
		std::cout << "]" << std::endl;

		Array<double> test_2(5);
		for (int i = 0; i < test_2.getsize(); ++i) {
			test_2[i] = i + 1.55;
		}
		std::cout << BRIGHT_GREEN << "Array <double> - TEST_2" << END << "\n[ ";
		for (int i = 0; i < test_2.getsize(); ++i) {
			std::cout << std::fixed << std::setprecision(2) << test_2[i] << (i != test_2.getsize() - 1 ? ", " : " ");
		}
		std::cout << "]" << std::endl;

		Array<char> test_3(5);
		for (int i = 0; i < test_3.getsize(); ++i) {
			test_3[i] = i + 97;
		}
		std::cout << BRIGHT_GREEN << "Array <char> - TEST_3" << END << "\n[ ";
		for (int i = 0; i < test_3.getsize(); ++i) {
			std::cout << test_3[i] << (i != test_3.getsize() - 1 ? ", " : " ");
		}
		std::cout << "]" << std::endl;

		Array<std::string> test_4(5);
		for (int i = 0; i < test_4.getsize(); ++i) {
			test_4[i] = "Hello";
		}
		std::cout << BRIGHT_GREEN << "Array <string> - TEST_4" << END << "\n[ ";
		for (int i = 0; i < test_4.getsize(); ++i) {
			std::cout << test_4[i] << (i != test_4.getsize() - 1 ? ", " : " ");
		}
		std::cout << "]" << std::endl;

		Array<int> test_5(test_1);
		for (int i = 0; i < test_5.getsize(); ++i) {
			test_5[i] = test_5[i] + 10;
		}
		std::cout << BRIGHT_CYAN << "TEST \"Constructor copy\"\nArray - TEST_1 compare Array - TEST_5" << END << "\n[ ";
		for (int i = 0; i < test_1.getsize(); ++i) {
			std::cout << test_1[i] << (i != test_1.getsize() - 1 ? ", " : " ");
		}
		std::cout << "] - test_1" << std::endl;

		std::cout << "[ ";
		for (int i = 0; i < test_5.getsize(); ++i) {
			std::cout << test_5[i] << (i != test_5.getsize() - 1 ? ", " : " ");
		}
		std::cout << "] - test_5" << std::endl;

		Array<char> test_6(8);
		for (int i = 0; i < test_6.getsize(); ++i) {
			test_6[i] = i + 65;
		}
		std::cout << BRIGHT_GREEN << "Array <char> - TEST_6 operator \'=\'" << END << "\n[ ";
		for (int i = 0; i < test_6.getsize(); ++i) {
			std::cout << test_6[i] << (i != test_6.getsize() - 1 ? ", " : " ");
		}
		std::cout << "] - old test_6" << std::endl;

		test_6 = test_3;

		std::cout << "[ ";
		for (int i = 0; i < test_6.getsize(); ++i) {
			std::cout << test_6[i] << (i != test_6.getsize() - 1 ? ", " : " ");
		}
		std::cout << "] - new test_6" << std::endl;

//		ERROR::
		std::cout << test_1[-10] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Array<int> test_6(8);
		std::cout << test_6[10] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}