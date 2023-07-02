#include "AccountServices.h"

bool IsExit = false;


void AccountServices::Exit() {
    IsExit = true;
}


void AccountServices::Init() {
        
    while (!IsExit)
    {
        userInterface.Greeting();
        userInterface.Options_1();
    }
        
 
    }
    
