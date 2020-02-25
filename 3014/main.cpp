//
//  main.cpp
//  3014
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;
#define max 2000000001
int a[max];
int main(int argc, const char * argv[]) {
    memset(a, 0, sizeof(a));
    for (int i=1; i<max; i++) {
        for (int j=i+1; j<max; j++) {
            i+=j;
            a[i]++;
        }
    }
    int T, cas=0;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        printf("case #%d:\n", cas++);
        cout << a[n]+1 << endl;
    }
    return 0;
}
