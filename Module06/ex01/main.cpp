#include "Serializer.hpp"

int main()
{
	Data data;
	data.name = "senem";
	data.age = 27;

	uintptr_t raw = Serializer::serialize(&data);
	Data *data2 = Serializer::deserialize(raw);

	std::cout << "data.color: " << data2->name << std::endl;
	std::cout << "data.price: " << data2->age << std::endl;

	return 0;
}