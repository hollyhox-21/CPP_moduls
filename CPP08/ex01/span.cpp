//
// Created by Retro Joella on 4/30/21.
//

#include "span.hpp"

Span::spanExcept::spanExcept(std::string str) : std::exception(), _except(str) {

}

Span::spanExcept::~spanExcept() throw() {

}

const char * Span::spanExcept::what() const throw() {return _except.c_str();}

Span::Span(unsigned int count) : _size(count) {
	if (count > UINT32_MAX / 2)
		throw spanExcept("Invalid count");
}

Span::Span(const Span & src) {
	_size = src._size;
	_array = src._array;
}

Span::~Span() {
	_array.clear();
}

Span & Span::operator=(const Span & src) {
	_size = src._size;
	_array = src._array;
	return *this;
}

void Span::addNumber(int nb) {
	if (_size) {
		_array.push_back(nb);
		_size--;
	}
	else
		throw spanExcept("Full storeg");
}

int Span::shortestSpan() {
	int shorts = INT32_MAX;
	std::vector<int>::const_iterator it = _array.begin();;
	
	if (_array.size() > 1) {
		while (it != _array.end()) {
			if ((it + 1) != _array.end() && abs(*it - *(it + 1)) < shorts)
				shorts = abs(*it - *(it + 1));
			++it;
		}
	}
	else
		throw spanExcept("Missing items");
	return shorts;
}

int Span::longestSpan() {
	if (_array.size() > 1) {
		std::sort(_array.begin(), _array.end());
		return abs(_array[0] - *(_array.end() - 1));
	}
	else
		throw spanExcept("Missing items");
}

