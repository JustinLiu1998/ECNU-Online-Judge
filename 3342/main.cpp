//
//  main.cpp
//  3342
//
//  Created by 刘靖迪 on 2017/9/6.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    int l=-1e9, r=1e9, mid=0;
    cout << mid << endl;
    while (l < r) {
        cin >> s;
        if (s == "big") r=mid-1;
        else if (s == "small") l=mid+1;
        else return 0;
        mid=(l+r) >> 1;
        cout << mid << endl;
    }
    return 0;
}
