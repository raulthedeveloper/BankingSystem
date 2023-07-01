#include "UserInterface.h"
#include <iostream>
#include <cstdlib>  // For system("command")

UserInterface::UserInterface() {}

void UserInterface::Greeting() {
    std::cout << "Welcome to World Bank!\nHow can we be of service to you?" << std::endl;
}

void UserInterface::Options_1() {
    enum AccountChoices {
        CreateAccount = 1,
        Deposit,
        Withdraw,
        CheckBalances
    };

    int usersChoice; // Change data type to int

    std::cout << "What would you like to do today?" << std::endl;
    std::cout << "Please type in the number of the option and press enter.\n"
        << "1. Create account\n"
        << "2. Deposit\n"
        << "3. Withdraw\n"
        << "4. Check Balances\n";

    while (!(std::cin >> usersChoice)) {
        std::cout << "Invalid input. Please enter a number." << std::endl;
        std::cin.clear();   // Clear error flags
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        system("cls");  // Clear console
        std::cout << "What would you like to do today?" << std::endl;
        std::cout << "Please type in the number of the option and press enter.\n"
            << "1. Create account\n"
            << "2. Deposit\n"
            << "3. Withdraw\n"
            << "4. Check Balances\n";
    }

    switch (usersChoice) {
    case CreateAccount:
        std::cout << "Creating account..." << std::endl;
        // Call function to create account
        break;

    case Deposit:
        std::cout << "Performing deposit..." << std::endl;
        // Call function to perform deposit
        break;

    case Withdraw:
        std::cout << "Performing withdrawal..." << std::endl;
        // Call function to perform withdrawal
        break;

    case CheckBalances:
        std::cout << "Checking balances..." << std::endl;
        // Call function to check balances
        break;

    default:
        std::cout << "Invalid choice. Please try again." << std::endl;
        system("cls");
        Options_1();
        break;
    }
}
