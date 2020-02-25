//
//  main.cpp
//  25
//
//  Created by 刘靖迪 on 18/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[1010];
    double T;
    int n;
    cin >> T >> n;
    string s;
    for (int i=0; i<n; i++) {
        cin >> s;
        if (s == "UP")
            a[i] = 1;
        else
            a[i] = 0;
    }
    for (int i=0; i<n; i++) {
        if (i+1 < n && a[i] + a[i+1] == 1) {
            if (a[i])
                printf("%.1lf\n", (T = 30));
            else
                printf("%.1lf\n", (T = 0));
        }
        else {
            if (a[i])s
                printf("%.1lf\n", T+=0.1);
            else
                printf("%.1lf\n", T-=0.1);
        }
    }
    return 0;
}
