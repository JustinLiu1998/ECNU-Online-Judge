//
//  main.cpp
//  2016
//
//  Created by 刘靖迪 on 2017/9/23.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int a, b, x, y;
    while (scanf("%dvs%d", &a, &b) == 2) {
        scanf("%dvs%d", &x, &y);
        int m=a/y, n=b/x;
        if (m>n)
            cout << "1" << endl;
        else if (m<n)
            cout << "2" << endl;
        else {
            a-=m*y;
            b-=n*x;
            if (a)
                cout << "1" << endl;
            else
                cout << "2" << endl;
        }
    }
    return 0;
}
