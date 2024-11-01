#include  "iter.hpp"
#include <string.h>

int main ()
{
    int arrayInt[] = {3, 5, 9, 10};
    char arrayChar[] = {'s', 'e', 'n', 'e', 'm'};
    std::string arrayString[] = {"senem", "yilmaz"};

    int ilen = sizeof(arrayInt) / sizeof(arrayInt[0]);
    int clen = sizeof(arrayChar) / sizeof(arrayChar[0]);
    int slen = sizeof(arrayString) / sizeof(arrayString[0]);

    ::iter(arrayInt, ilen, printElements);
    ::iter(arrayChar, clen, printElements);
    ::iter(arrayString, slen, printElements);


}