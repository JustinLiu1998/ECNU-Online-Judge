//
//  main.cpp
//  2888
//
//  Created by 刘靖迪 on 2017/9/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int n, k, m;
    while (scanf("%d%d%d", &n, &k, &m) == 3) {
        double money = n, earning = n;
        double house = 270;
        int flag = 1;
        for (int i=2; i<=30; i++) {
            house *= (100.0+k)/100;
            earning *= (100.0+m)/100;
            money += earning;
            if (money >= house) {
                cout << i << endl;
                flag=0;
                break;
            }
        }
        if (flag)
            cout << "Impossible" << endl;
    }
    return 0;
}

