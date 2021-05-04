//
// Created by Retro Joella on 4/16/21.
//

#ifndef CPP04_VICTIM_HPP
#define CPP04_VICTIM_HPP
#include <string>

class Victim {
public:
	Victim(std::string name);
	Victim(const Victim & other);
	virtual ~Victim();
	
	Victim &	operator=(const Victim & other);
	
	void				anounce() const;
	virtual void		getPolymorphed() const;
	
	std::string	getName() const;

protected:
	std::string _name;
};

std::ostream &		operator<<(std::ostream & o, Victim const & obj);


#endif //CPP04_VICTIM_HPP
