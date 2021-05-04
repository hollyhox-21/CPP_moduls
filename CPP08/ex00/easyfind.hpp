//
// Created by Retro Joella on 4/30/21.
//

#ifndef CPP08_EASYFIND_HPP
#define CPP08_EASYFIND_HPP

template<typename T>
typename T::iterator easyfind(T & sequence, int nb) {
	typename T::iterator temp =  std::find(sequence.begin(), sequence.end(), nb);
		if (temp == sequence.end())
			throw std::invalid_argument("Argument isn't find");
	return temp;
}

#endif //CPP08_EASYFIND_HPP
