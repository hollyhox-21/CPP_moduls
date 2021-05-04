//
// Created by Retro Joella on 4/19/21.
//

#include "Squad.hpp"

Squad::Squad() : _size(0), _squad(nullptr) {

}

Squad::Squad(const Squad &other) {
	_size = other._size;
	_squad = new ISpaceMarine*[_size];
	for (int i = 0; i < _size; i++)
		_squad[i] = other._squad[i]->clone();
}

Squad::~Squad() {
	for(int i = 0; i < _size; i++)
		delete _squad[i];
	delete[] _squad;
}

Squad & Squad::operator=(const Squad &other) {
	if (_squad) {
		for(int i = 0; _squad[i]; i++)
			delete _squad[i];
		delete[] _squad;
	}
	
	_size = other._size;
	_squad = new ISpaceMarine*[_size];
	for (int i = 0; i < _size; i++)
		_squad[i] = other._squad[i]->clone();
	return (*this);
}

int Squad::push(ISpaceMarine *unit) {
	if (unit) {
		ISpaceMarine **tmp = _squad;
		_squad = new ISpaceMarine*[_size + 1];
		for (int i = 0; i < _size + 1; ++i)
			_squad[i] = nullptr;
		for (int i = 0; i < _size + 1; i++) {
			if (i == _size)
				_squad[_size] = unit;
			else
				_squad[i] = tmp[i];
		}
		delete[] tmp;
		_size++;
	}
	return getCount();
}


ISpaceMarine * Squad::getUnit(int numb) const {
	return (_squad[numb]);
}
int Squad::getCount() const {return _size;}