//
// Created by Retro Joella on 3/30/21.
//

void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}
