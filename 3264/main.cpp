//
//  main.cpp
//  3264
//
//  Created by 刘靖迪 on 20/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
int main(int argc, const char * argv[]) {
    stack<int> sk;
    int n, x, y;
    scanf("%d", &n);
    int ans = n;
    for (int i=0; i<n; i++) {
        scanf("%d%d", &x, &y);
        if (y == 1)
            sk.push(x);
        else {
            while (sk.size()) {
                if (sk.top() < x) {
                    sk.pop();
                    ans--;
                }
                else {
                    ans--;
                    break;
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
