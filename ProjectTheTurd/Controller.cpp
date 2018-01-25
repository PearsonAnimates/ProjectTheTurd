//
//  Controller.cpp
//  ProjectTheTurd
//
//  Created by Amaya Penunuri, Yael on 1/25/18.
//  Copyright © 2018 Amaya Penunuri, Yael. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    for (int index = 0; index < 10; index++)
    {
        cout << "This is the " << index +1 << " time in the loop" << endl;
    }
}
