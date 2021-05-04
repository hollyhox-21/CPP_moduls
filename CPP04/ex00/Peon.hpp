//
// Created by Retro Joella on 4/16/21.
//

#ifndef CPP04_PEON_HPP
#define CPP04_PEON_HPP
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include <string>

class Peon : public Victim {
public:
	Peon(std::string name);
	virtual ~Peon();

	virtual void getPolymorphed() const;
private:

};

#endif //CPP04_PEON_HPP
