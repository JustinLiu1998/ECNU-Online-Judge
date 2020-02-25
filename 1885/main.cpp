//
//  main.cpp
//  1885
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        int count = 1;
        for (int i=1; i<n; i++) {
            if (a[i] == a[i-1]) {
                count ++;
                if (count >= (double)n/2)
                    cout << a[i] << endl;
            }
            else count = 1;
        }
    }
    return 0;
}
