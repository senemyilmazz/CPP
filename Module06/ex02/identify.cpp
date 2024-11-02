#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	srand(static_cast<unsigned int>(time(0)));
	int random = rand() % 3;
	if (random == 0)
		return new A;
	else if (random == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The object pointed to by p: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The object pointed to by p: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The object pointed to by p: C" << std::endl;
}


void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "The object pointed to by p: A" << std::endl;
	} catch (std::bad_cast) {
		try{
			B& b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "The object pointed to by p: B" << std::endl;
		} catch (std::bad_cast){
			try{
				C& c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "The object pointed to by p: C" << std::endl;
			} catch (std::bad_cast){
				std::cout << "The object pointed to by p: unknown" << std::endl;
			}
		}
	}
}