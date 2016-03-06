//
//  main.cpp
//  sqrt
//
//  Created by sunhongyin on 16/3/6.
//  Copyright © 2016年 sunhongyin. All rights reserved.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    double area;
    cout << "Enter the floor area, in square feet, of your homme: ";
    
    cin >> area;
    double side;
    side = sqrt(area);

    cout << "That is the equivalent of a square " << side
    << " feet to he side." << endl;
    cout << "How fascinating!" << endl;
    
    return 0;
}
