//
//  main.cpp
//  2895
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;
int main(int argc, const char * argv[]) {
    int m, n;
    int a[10000];
    while (scanf("%d/%d", &m, &n) == 2) {
        if (m<=0 || n<=0)
            break;
        memset(a, 0, sizeof(a));
        int x = m;
        int i=0;
        while (x != 0) {
            a[i] = x/n;
            x %= n;
            if (x == 0) {
                cout << "0" << endl;
                break;
            }
            
            int start=1, flag=0;
            for (int j=1; j<i; j++) {
                if (a[j] == a[i]) {
                    start = j;
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                for (int j=start; j<i; j++) {
                    cout << a[j];
                }
                cout << endl;
                break;
            }
            x *= 10;
            i++;
        }
    }
    return 0;
}
