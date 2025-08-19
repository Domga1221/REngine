#pragma once 

#include "defines.hpp"

struct Application {
    b8 isRunning;
};

void Application_Initialize(Application* app); 
void Application_Run(Application* app);