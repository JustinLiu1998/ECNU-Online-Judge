//
//  main.cpp
//  3004
//
//  Created by 刘靖迪 on 2017/9/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int day[40000];
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    for (int cas=0; cas<T; cas++) {
        memset(day, 0, sizeof(day));
        int p, e, i, d, ans=0;
        cin >> p >> e >> i >> d;
        for (int j=0; j<1000; j++) {
            day[p+23*j]++;
            day[e+28*j]++;
            day[i+33*j]++;
        }
        for (int j=d+1; j<d+21253; j++) {
            if (day[j] == 3 && j >= d) {
                ans = j - d;
                break;
            }
        }
        printf("case #%d:\nthe next triple peak occurs in %d days.", cas, ans);
        cout << endl;
    }
    return 0;
}
