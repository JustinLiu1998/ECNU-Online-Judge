//
//  main.cpp
//  2966
//
//  Created by 刘靖迪 on 2017/11/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        printf("case #%d:\n", cas++);
        int n;
        scanf("%d", &n);
        if (n == 0)
            puts("0 0");
        else {
            vector<int> a;
            int x = n;
            while (x) {
                a.push_back(x%2);
                x/=2;
            }
            reverse(a.begin(), a.end());
            for (auto iter = a.begin(); iter != a.end(); iter++)
                printf("%d", *iter);
            printf(" %X\n", n);
        }
    }
    return 0;
}
