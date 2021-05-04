//
// Created by Retro Joella on 4/30/21.
//

#ifndef CPP08_SPAN_HPP
#define CPP08_SPAN_HPP
#include <string>
#include <iostream>
#include <vector>
#include <cmath>

class Span {
private:
	unsigned int		_size;
	std::vector<int>	_array;
public:
	Span(unsigned int count = 0);
	Span(const Span &);
	~Span();
	
	Span & operator=(const Span &);
	
	class spanExcept : public std::exception {
	private:
		std::string _except;
	public:
		spanExcept(std::string str);
		~spanExcept() throw();
		
		const char * what() const throw();
	};
	
	void	addNumber(int);
	
	template<class T>
	void	addNumber (typename T::iterator it, typename T::iterator ite) {
		if (_size == std::distance(it, ite)){
			while (it != ite){
				addNumber(*it);
				++it;
			}
		}
		else
			throw spanExcept("Invalid count");
	}
	int		shortestSpan();
	int		longestSpan();
};

#endif //CPP08_SPAN_HPP
