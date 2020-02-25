//
//  main.cpp
//  2968
//
//  Created by 刘靖迪 on 2017/11/16.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
const int a[6] = {100, 50, 20, 10, 5, 1};
int main(int argc, const char * argv[]) {
    int T, cas=0; cin >> T;
    while (T--) {
        int n; cin >> n;
        printf("case #%d:\n", cas++);
        for (int i=0; i<6; i++) {
            printf("%d%c", n/a[i], i<5?' ':'\n');
            n %=a [i];
        }
    }
    return 0;
}
