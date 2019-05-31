//
//  Controller.hpp
//  VectorProject
//
//  Created by Runyan, Jacob on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
using namespace std;

class Controller
{
private:
    vector<int> integers;
    vector<string> strings;
public:
    Controller();
    void start();
};

#endif /* Controller_hpp */
