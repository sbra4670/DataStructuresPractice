//
//  DataStructPrac.cpp
//  DataStructuresPractice
//
//  Created by Bravo, Sebastian on 3/20/18.
//  Copyright © 2018 Bravo, Sebastian. All rights reserved.
//

#include "DataStructPrac.hpp"
#include <string.h>

void Practice :: start()
{
    string input;
    string CorrectPW = "Execute Ordah 66";
    
    for(int i = 0; i <= 5; i ++)
    {
        cout << "Enter the password:" << endl;
        cin >> input;
        
        if (input == CorrectPW)
        {
            cout << "Access Granted." << endl;
        }
        if(i == 5 && i != 4)
        {
            cout << "You have entered the password incorrectly too many times." << endl;
        }
    }
}
