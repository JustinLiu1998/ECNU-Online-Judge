//
//  main.cpp
//  3043
//
//  Created by 刘靖迪 on 2017/9/19.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int GCD (int m, int n){
    if (m < n){
        int tem = m;
        m = n;
        n = tem;
    }
    if (m % n == 0)
        return n;
    else return GCD(n, m%n);
}
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    for (int i=0; i<T; i++) {
        int a, b;
        cin >> a >> b;
        cout << "case #" << cas++ << ":\n" << GCD(a, b) << endl;
    }
    return 0;
}
