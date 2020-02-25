//
//  main.cpp
//  3419
//
//  Created by 刘靖迪 on 2017/10/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    for (int i=0; i<10000; i++) {
        int re = 0, x = i;
        while (x > 0) {
            re += pow((x%10), 4);
            x /= 10;
        }
        if (re == i)
            cout << i << endl;
    }
    return 0;
}
