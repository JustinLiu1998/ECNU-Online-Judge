//
//  main.cpp
//  1042
//
//  Created by 刘靖迪 on 2017/9/18.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]) {
    int a[] = {100, 50, 20, 10, 5, 2, 1};
    int b[7];
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int m;
        scanf("%d", &m);
        memset(b, 0, sizeof(b));
        for (int j=0; j<7; j++) {
            b[j] = m/a[j];
            m %= a[j];
        }
        for (int j=0; j<7; j++) {
            if (j < 6)
                cout << b[j] << " ";
            else cout << b[j] << endl;
        }
    }
    return 0;
}
