//
//  main.cpp
//  2009
//
//  Created by 刘靖迪 on 2017/9/23.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;
#define gg 100010
int main(int argc, const char * argv[]) {
    int a[gg];
    memset(a, 0, sizeof(a));
    int m, x;
    cin >> m;
    for (int i=0; i<m; i++) {
        scanf("%d", &x);
        a[x] = 1;
    }
    int n, y;
    cin >> n;
    for (int i=0; i<n; i++) {
        scanf("%d", &y);
        if (a[y])
            cout << "yes!" << endl;
        else cout << "no!" << endl;
    }
    return 0;
}
