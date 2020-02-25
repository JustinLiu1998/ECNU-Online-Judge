//
//  main.cpp
//  3366
//
//  Created by 刘靖迪 on 2017/9/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
#define MOD 11

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    if (n == 0)
        cout << "infiniteee" << endl;
    else {
        n %= MOD;
        if (n > 9 || n == 0)
            cout << "ultmaster" << endl;
        else cout << "infiniteee" << endl;
    }
    return 0;
}
