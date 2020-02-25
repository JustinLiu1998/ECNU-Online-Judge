//
//  main.cpp
//  2005
//
//  Created by 刘靖迪 on 2017/9/23.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) == 1) {
        if (n < 4 || n > 11000) {
            continue;
        }
        int x = (int)sqrt(n) + 1;
        while (x>1) {
            if (n%x == 0) {
                cout << x << " " << n/x << endl;
                break;
            }
            x--;
        }
    }
    return 0;
}
