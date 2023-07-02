#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include "Account.h"

class UserInterface {
public:
    UserInterface();

    void Greeting();
    void Options_1();

private:
    Account account;
};

#endif
