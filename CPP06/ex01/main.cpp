//
// Created by Retro Joella on 4/28/21.
//

#include <iostream>
#include <string>

typedef struct	s_data{
	std::string str_1;
	int			numb;
	std::string str_2;
}				Data;

void*	serialize (void){
	std::string test_str_1;
	std::string test_str_2;
	int			test_nb;
	char *one = new char[52];
	
	for (int nCount = 0; nCount < 24; ++nCount) {
		one[nCount] = (rand() % (126 - 32) + 32);
		test_str_1 += one[nCount];
	}
	
	test_nb = rand() % INT32_MAX;
	*(reinterpret_cast<int *>(one) + 6) = (test_nb);
	
	for (int nCount = 28; nCount < 52; ++nCount) {
		one[nCount] = (rand() % (126 - 32) + 32);
		test_str_2 += one[nCount];
	}
	std::cout << "--------CODING_DATA--------" << std::endl;
	std::cout << test_str_1<< std::endl;
	std::cout << test_str_2 << std::endl;
	std::cout << test_nb << std::endl;
	
	return reinterpret_cast<void *>(one);
}

Data * deserialize (void * raw) {
	Data *data = new Data;

	data->str_1.assign(reinterpret_cast<char *>(raw), 24);
	data->str_1 += '\0';
	data->numb = *(reinterpret_cast<int *>(raw) + 6);
	data->str_2.assign(reinterpret_cast<char *>(raw) + 28, 24);
	data->str_2 += '\0';
	return data;
}

int main() {
	srand(time(0));
	void	*seria = nullptr;
	Data	*data = nullptr;
	seria = serialize();
	data = deserialize(seria);
	
	
	std::cout << "--------RESULT_SERIALIZE--------" << std::endl;
	std::cout << data->str_1 << std::endl;
	std::cout << data->str_2 <<  std::endl;
	std::cout << data->numb << std::endl;
	
	delete static_cast<char *>(seria);
	delete data;
	return 0;
}
