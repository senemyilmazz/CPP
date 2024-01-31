#include <iostream>

int main(int argc, char** argv) {
    int	i;
	int	j;

	i = 0;
    while (++i < argc)
    {
		j = -1;
		while (argv[i][++j])
			std::cout << (char)std::toupper(argv[i][j]);
	}
}