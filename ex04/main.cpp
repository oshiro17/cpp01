#include "Sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4 || !(*argv[2]))
	{
		std::cout << "Invalid argument" <<std::endl;
		return (1);
	}
	Sed sed(argv[1]);
	if (sed.replace(argv[2], argv[3]) == 1)
		return (1);
	return(0);
}