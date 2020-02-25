//
//  main.cpp
//  2981
//
//  Created by 刘靖迪 on 2017/11/1.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;
int main(int argc, const char * argv[]) {
    int T, cas=0; cin >> T;
    while (T--) {
        printf("case #%d:\n", cas++);
        multiset<int> St;
        int n, x; cin >> n; getchar();
        char c;
        while (n--) {
            scanf("%c", &c);
            if (c == 'B') {
                scanf("%d", &x);
                St.insert(x);
            }
            else {
                printf("%d\n", *St.begin());
                St.erase(St.begin());
            }
            getchar();
        }
    }
    return 0;
}
