//
// Created by Retro Joella on 4/29/21.
//

#ifndef CPP07_ITER_HPP
#define CPP07_ITER_HPP

template <typename T>
void iter(T mass[], const int & length, void (*myIter)(T const &)) {
	for (int i = 0; i < length; ++i) {
		myIter(mass[i]);
	}
}

template <typename T>
void myfunk(T const &a) {
	std::cout << a << " ";
}

#endif //CPP07_ITER_HPP
