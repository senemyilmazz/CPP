# include "Span.hpp"

int main()
{
    Span<std::vector<int> > sp3(5);

    try{
        Span<std::vector<int> > sp(6);
        sp.addNumber(2);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::vector<int> vec = sp.getContainer();
        
        Span<std::vector<int> > sp2(5);
        sp2.addNumber(vec.begin() +1, vec.end());
        
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
        
        sp3 = sp;
    } catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        std::cout << sp3.shortestSpan() << std::endl;
        std::cout << sp3.longestSpan() << std::endl;
    } catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}
