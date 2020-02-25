//
//  main.cpp
//  2613
//
//  Created by 刘靖迪 on 2017/9/11.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

#define N 1999
int a[1010]={0};
int main(int argc, const char * argv[]) {
    a[1]=1;
    for (int i=1; i<1000; i++) {
        a[i+1] = (a[i] + ((i-1)*a[i]) % N) % N;
    }
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}
