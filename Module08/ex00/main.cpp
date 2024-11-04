#include "easyfind.hpp"

int main ()
{
    std::list<int> li ;
    std::vector<int> ve ;
    for (int i = 1; i < 4 ; i++)
    {
        li.push_back(i);
        ve.push_back(i+4);
    }

    try{
        std::list<int>::iterator itli = ::easyfind(li, 3);
        std::cout << "List: Number found at index " << std::distance(li.begin(), itli) << std::endl;
        std::vector<int>::iterator veli = ::easyfind(ve, 3);
        std::cout << "Vector: Number found at index" << std::distance(ve.begin(), veli) << std::endl;
    } catch (const NotFoundException &e){
        std::cout << e.what() << std::endl;
    }
}