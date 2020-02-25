//
//  main.cpp
//  1078
//
//  Created by 刘靖迪 on 2017/9/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;

int a[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    for (int i=0; i<T; i++) {
        int m, d;
        cin >> m >> d;
        if ((m == 10 && d > 21) || m > 10)
            cout << "What a pity, it has passed!\n";
        else if (m == 10 && d == 21)
            cout << "It's today!!\n";
        else {
            int day=0;
            if (m < 10) {
                for (int j=m; j<10; j++) {
                    day+=a[j-1];
                }
                day+=21, day-=d;
            }
            else {
                day=21-d;
            }
            cout << day << endl;
        }
    }
    return 0;
}
