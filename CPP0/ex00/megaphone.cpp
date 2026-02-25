#include <iostream>
#include <string>
#include <cctype>

std:: string	print(std::string input)
{
	std:: size_t i;
	for (i = 0; i < input.length(); i++)
		input[i] = toupper(input[i]);
	return(input);
}

int	main(int ac, char **av)
{
	
	if(ac == 1)
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
	else if (ac >= 2)
	{
		for(int i = 1; i < ac; i++)
			std:: cout << print(av[i]);
		std:: cout<<"\n";
	}
	return (0);
}