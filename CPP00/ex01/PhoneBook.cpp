#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

PhoneBook::PhoneBook(void) : nbr(0) {}

PhoneBook::~PhoneBook(void) {}

void PhoneBook::add(void) {
    int index = this->nbr % 8;

    while (true) {
        std::cout << "Enter first name: ";
        std::string firstName;
        std::getline(std::cin, firstName);
        if (!firstName.empty()) {
            this->contact[index].setFirstName(firstName);
            break;
        }
        std::cout << "First name cannot be empty. Please try again.\n";
    }

    while (true) {
        std::cout << "Enter last name: ";
        std::string lastName;
        std::getline(std::cin, lastName);
        if (!lastName.empty()) {
            this->contact[index].setLastName(lastName);
            break;
        }
        std::cout << "Last name cannot be empty. Please try again.\n";
    }

    while (true) {
        std::cout << "Enter nickname: ";
        std::string nickname;
        std::getline(std::cin, nickname);
        if (!nickname.empty()) {
            this->contact[index].setNickname(nickname);
            break;
        }
        std::cout << "Nickname cannot be empty. Please try again.\n";
    }

    while (true) {
        std::cout << "Enter phone number: ";
        std::string phoneNumber;
        std::getline(std::cin, phoneNumber);
        if (!phoneNumber.empty()) {
            this->contact[index].setPhoneNumber(phoneNumber);
            break;
        }
        std::cout << "Phone number cannot be empty. Please try again.\n";
    }

    while (true) {
        std::cout << "Enter darkest secret: ";
        std::string darkestSecret;
        std::getline(std::cin, darkestSecret);
        if (!darkestSecret.empty()) {
            this->contact[index].setDarkestSecret(darkestSecret);
            break;
        }
        std::cout << "Darkest secret cannot be empty. Please try again.\n";
    }

    this->nbr++;
}

void PhoneBook::search(void) {
    if (this->nbr == 0) {
        std::cout << "Phonebook is empty!!\n";
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "\n";
    std::cout << "--------------------------------------------\n";
    for (int i = 0; i < std::min(this->nbr, 8); i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << (this->contact[i].getFirstName().length() > 10 ?
                                      this->contact[i].getFirstName().substr(0, 9) + "." :
                                      this->contact[i].getFirstName()) << "|"
                  << std::setw(10) << (this->contact[i].getLastName().length() > 10 ?
                                      this->contact[i].getLastName().substr(0, 9) + "." :
                                      this->contact[i].getLastName()) << "|"
                  << std::setw(10) << (this->contact[i].getNickname().length() > 10 ?
                                      this->contact[i].getNickname().substr(0, 9) + "." :
                                      this->contact[i].getNickname()) << "\n";
    }
    int index;
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index;
    if (std::cin.fail() || index < 0 || index >= std::min(this->nbr, 8)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid index.\n";
        return;
    }
    std::cout << "First Name: " << this->contact[index].getFirstName() << "\n";
    std::cout << "Last Name: " << this->contact[index].getLastName() << "\n";
    std::cout << "Nickname: " << this->contact[index].getNickname() << "\n";
    std::cout << "Phone Number: " << this->contact[index].getPhoneNumber() << "\n";
    std::cout << "Darkest Secret: " << this->contact[index].getDarkestSecret() << "\n";

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void PhoneBook::print_phonebook(void) {
    if (this->nbr == 0) {
        std::cout << "Phonebook is empty. Add contacts first.\n";
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "\n";
    std::cout << "--------------------------------------------\n";

    for (int i = 0; i < std::min(this->nbr, 8); i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << (this->contact[i].getFirstName().length() > 10 ?
                                      this->contact[i].getFirstName().substr(0, 9) + "." :
                                      this->contact[i].getFirstName()) << "|"
                  << std::setw(10) << (this->contact[i].getLastName().length() > 10 ?
                                      this->contact[i].getLastName().substr(0, 9) + "." :
                                      this->contact[i].getLastName()) << "|"
                  << std::setw(10) << (this->contact[i].getNickname().length() > 10 ?
                                      this->contact[i].getNickname().substr(0, 9) + "." :
                                      this->contact[i].getNickname()) << "\n";
    }
}