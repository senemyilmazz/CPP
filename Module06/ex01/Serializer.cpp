#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer Default Constructor called" << std::endl;
}

Serializer::Serializer(const Serializer& copy)
{
	std::cout << "Serializer Copy Constructor called" << std::endl;
	*this = copy;
}

Serializer::~Serializer()
{
	std::cout << "Serializer Deconstructor called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer& copy)
{
	std::cout << "Serializer Assignation operator called" << std::endl;
	if (this == &copy)
		return *this;
	return *this;
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}