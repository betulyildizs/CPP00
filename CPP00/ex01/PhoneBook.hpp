#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact     contact[8];
        int         nbr;
        
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    add(void);
        void    search(void);
        void    print_phonebook(void);
};

#endif