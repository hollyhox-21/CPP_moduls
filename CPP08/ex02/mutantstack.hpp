//
// Created by Retro Joella on 5/1/21.
//

#ifndef CPP08_MUTANTSTACK_HPP
#define CPP08_MUTANTSTACK_HPP
#include <string>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() {}
	MutantStack(const MutantStack & src) : std::stack<T>(src) {}
	~MutantStack() {}
	MutantStack &	operator=(const MutantStack & src) {*this = src; return *this;}
	
	class iterator : std::iterator<std::bidirectional_iterator_tag, T>{
	private:
		T *_current;
	public:
		iterator(T* first) : _current(first) {}
		iterator(const iterator & src) : _current(src._current) {}
		
		iterator&	operator=(const iterator & src) { if (this != &src) _current = src._current; return *this; }
		iterator&	operator++(int) { _current--; return *this; }
		iterator&	operator++() { --_current; return *this; }
		iterator&	operator--(int) { _current++; return *this; }
		iterator&	operator--() { ++_current; return *this; }
		bool		operator!=(const iterator & it) { return _current != it._current; }
		bool		operator==(const iterator & it) { return _current == it._current; }
		T&			operator*() { return *_current; }
	};
	iterator	begin() { return iterator(&this->top()); }
	iterator	end() { return iterator(&this->top() - this->size());}
};

#endif //CPP08_MUTANTSTACK_HPP
