//
// Created by Retro Joella on 5/1/21.
//

#include "mutantstack.hpp"
#include <iostream>
#include <stack>
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "SIZE --> " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	it++;
	it--;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::cout << "---TEST COPY CONSTRUCTOR---" << std::endl;
	std::cout << "SIZE mstack--> " << mstack.size() << std::endl;
	std::stack<int> s(mstack);
	MutantStack<int> copy_stack(mstack);
	std::cout << "SIZE s --> " << s.size() << std::endl;
	std::cout << "SIZE copy_stack --> " << copy_stack.size() << std::endl;
	copy_stack.push(10);
	std::cout << "SIZE copy_stack --> " << copy_stack.size() << std::endl;
	std::cout << "SIZE mstack --> " << mstack.size() << std::endl;
	std::cout << "----------------" << std::endl;
	
	std::list<int> mstack_list;
	mstack_list.push_front(5);
	mstack_list.push_front(17);
	std::cout << mstack_list.front() << std::endl;
	mstack_list.pop_front();
	std::cout << "SIZE --> " << mstack_list.size() << std::endl;
	mstack_list.push_front(3);
	mstack_list.push_front(5);
	mstack_list.push_front(737);

	mstack_list.push_front(0);
	std::list<int>::iterator it_l = mstack_list.begin();
	std::list<int>::iterator ite_l = mstack_list.end();
	++it_l;
	--it_l;
	while (it_l != ite_l)
	{
		std::cout << *it_l << std::endl;
		++it_l;
	}
	
	std::cout << "SIZE --> " << mstack_list.size() << std::endl;
	return 0;
}