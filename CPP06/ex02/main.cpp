//
// Created by Retro Joella on 4/29/21.
//

#include <string>
#include <iostream>
#include <typeinfo>

class Base {
public:
	Base(std::string a) : _type(a) {};
	virtual ~Base() {};
	std::string _type;
};

class A : public Base {
public:
	A() : Base("A"){};
	~A(){};
};

class B : public Base {
public:
	B() : Base("B"){};
	~B(){};
};

class C : public Base {
public:
	C() : Base("C"){};
	~C(){};
};

void identify_from_pointer(Base * p) {
	if (!(dynamic_cast<A*>(p)) && !(dynamic_cast<B*>(p)))
		std::cout << "It's C" << std::endl;
	else if (!(dynamic_cast<B*>(p)) && !(dynamic_cast<C*>(p)))
		std::cout << "It's A" << std::endl;
	else
		std::cout << "It's B" << std::endl;
	
}

void identify_from_reference(Base & p) {
	if (!(dynamic_cast<A*>(&p)) && !(dynamic_cast<B*>(&p)))
		std::cout << "It's C" << std::endl;
	else if (!(dynamic_cast<B*>(&p)) && !(dynamic_cast<C*>(&p)))
		std::cout << "It's A" << std::endl;
	else
		std::cout << "It's B" << std::endl;
}

Base *	generate() {
	int nb = rand() % 3;
	
	if (nb == 0) {
		Base *a = new A;
		return a;
	}
	else if (nb == 1) {
		Base *b = new B;
		return b;
	}
	else if (nb == 2) {
		Base *c = new C;
		return c;
	}
	return (nullptr);
}

int main() {
	srand(time(0));
	Base *p = generate();
	
	std::cout << typeid(*p).name() << std::endl;
	std::cout << p->_type << std::endl;
	
		identify_from_pointer(p);
		identify_from_reference(*p);

	delete p;
	return 0;
}
