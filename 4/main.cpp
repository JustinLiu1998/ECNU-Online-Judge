//
//  main.cpp
//  4
//
//  Created by 刘靖迪 on 2017/10/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int a[10];
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        int n;
        scanf("%d", &n);
        printf("%d ", n);
        for (int i=0; i<10; i++) {
            scanf("%d", &a[i]);
        }
        sort(a, a+10);
        cout << a[7] << endl;
    }
    return 0;
}
