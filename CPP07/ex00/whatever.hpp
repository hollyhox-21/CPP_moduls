//
// Created by Retro Joella on 4/29/21.
//

#ifndef CPP07_WHATEVER_HPP
#define CPP07_WHATEVER_HPP

namespace my {
	template <typename T>
	void ft_swap(T &a, T &b) {
		T c = a;
		a = b;
		b = c;
	}
	
	template <typename T>
	const T& ft_max(const T& a, const T& b) {
		return (a >= b) ? a : b;
	}
	
	template <typename T>
	const T& ft_min(const T& a, const T& b) {
		return (a <= b) ? a : b;
	}
}



#endif //CPP07_WHATEVER_HPP
