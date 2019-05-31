//
//  Controller.cpp
//  VectorProject
//
//  Created by Runyan, Jacob on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    this->integers.push_back(666);
    this->integers.push_back(420);
    
    this->strings.push_back("skylar");
    this->strings.push_back("jake");
}

void Controller :: start()
{
    for(int index = 0; index < integers.size(); index++)
    {
        cout << integers[index] << endl;
    }
    
    for(int index = 0; index < strings.size(); index++)
    {
        cout << strings[index] << endl;
    }
};
