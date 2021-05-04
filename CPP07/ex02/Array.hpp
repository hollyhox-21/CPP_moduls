//
// Created by Retro Joella on 4/29/21.
//

#ifndef CPP07_ARRAY_HPP
#define CPP07_ARRAY_HPP
#include <iostream>

template< typename T >
class Array {
private:
	unsigned int	_size;
	T				*_array;
public:
	Array()	: _size(0), _array(nullptr) {};
	Array(unsigned int count) {
		if (!count)
			std::cout << "create empty array 0" << std::endl;
		if (count > UINT32_MAX / 2)
			_size = UINT32_MAX / 2;
		else
			_size = count;
		if (!(_array = new T[count]))
			throw std::bad_alloc();
	}

	Array(const Array<T> &src) : _size(0), _array(nullptr) {
		_size = src._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; ++i) {
			_array[i] = src._array[i];
		}
	}
	~Array(){
		delete[] _array;
	}
	
	Array<T>&	operator=(const Array<T> & src) {
		if (_size > 0)
			delete[] _array;
		_size = src._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; ++i) {
			_array[i] = src._array[i];
		}
		return (*this);
	}
	
	T&	operator[](unsigned int idx) {
		if (idx >= 0 && idx < _size)
			return _array[idx];
		else
			throw std::out_of_range("Invalid idx");
	}
	
	int 	getsize() const{return _size;}
};

#endif //CPP07_ARRAY_HPP
