//
//  2DArrayPrac.cpp
//  DataStructuresPractice
//
//  Created by Bravo, Sebastian on 3/22/18.
//  Copyright © 2018 Bravo, Sebastian. All rights reserved.
//

#include "2DArrayPrac.hpp"
#include <string>

void ArrayPrac :: TwoDArray()
{
    string animals [2][3] =
    {
        {"Fox","Dog","Cat"},
        {"Mouse","Squirrel", "Parrot"}
    };
    
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }

}
