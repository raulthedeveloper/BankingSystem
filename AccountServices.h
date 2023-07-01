#ifndef ACCOUNTSERVICES_H
#define ACCOUNTSERVICES_H

#include "UserInterface.h"

class AccountServices {
public:
    AccountServices();
    void Init();
    void Exit();
private:
    UserInterface userInterface;
    bool IsExit;

};

#endif
