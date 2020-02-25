//
//  main.cpp
//  2970
//
//  Created by 刘靖迪 on 2017/11/16.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T, cas = 0; cin >> T;
    while (T--) {
        printf("case #%d:\n", cas++);
        int n, m;
        cin >> n >> m;
        int a, b;
        a = (n*4-m)/2;
        b = n-a;
        if (m % 2 ==1 || a<0 || b<0)
            cout << "Impossible" << endl;
        else cout << a << " " << b << endl;
    }
    return 0;
}
