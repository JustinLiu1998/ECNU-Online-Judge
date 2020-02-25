//
//  main.cpp
//  1221
//
//  Created by 刘靖迪 on 2017/10/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int a[31];
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    while (n--) {
        int x;
        while (scanf("%d", &x) && x != -1)
            a[x]++;
    }
    int flag=1;
    for (int i=1; i<=30; i++) {
        if (a[i] == 0)
            flag = 0;
    }
    if (flag) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
