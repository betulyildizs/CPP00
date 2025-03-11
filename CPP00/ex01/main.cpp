#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstring>

int	main(void)
{
	PhoneBook	phone_book;
	char		line[512];

    std::cout << "enter one command (ADD, SEARCH, EXIT)> ";
	while (std::cin.getline(line, 512)  && strcmp(line, "EXIT") != 0)
	{
		if (line[0] == '\0')
			std::cout<<"no command!\n";
		else if (strcmp(line, "ADD") == 0)
			phone_book.add();
		else if (strcmp(line, "SEARCH") == 0)
			phone_book.search();
		else
			std::cout<<"invalid command!\n";
		std::cout << "enter one command (ADD, SEARCH, EXIT)> ";
	}
	return (0);
}
