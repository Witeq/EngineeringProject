#include "ImageProcessModule.h"
#include <iostream>
#include <gtest/gtest.h>

int main(int argc, char* argv[])
{


	std::cout << "HEllo World" << std::endl;

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}