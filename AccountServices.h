#ifndef ACCOUNTSERVICES_H
#define ACCOUNTSERVICES_H

#include "UserInterface.h"

class AccountServices {
public:
    void Init();
    void Exit();
private:
    UserInterface userInterface;
    bool IsExit;

};

#endif
