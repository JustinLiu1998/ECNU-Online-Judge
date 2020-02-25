//
//  main.cpp
//  3345
//
//  Created by 刘靖迪 on 2017/9/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int l=-1e9, r=1e9, m;
    string s1="big", s2="small", s3="equal";
    while (l<r) {
        cin >> m;
        if (m==l || m==r) {
            cout << s3 << endl;
            break;
        }
        if (m-l < r-m) {
            cout << s2 << endl;
            l=m+1;
        }
        else if (m-l > r-m) {
            cout << s1 << endl;
            r=m-1;
        }
    }
    return 0;
}
