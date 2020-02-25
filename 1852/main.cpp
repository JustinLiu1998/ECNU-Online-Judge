//
//  main.cpp
//  1852
//
//  Created by 刘靖迪 on 2018/1/8.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int gcd(int a, int b) {
    return (b == 0 ? a : gcd(b, a%b));
}
class node {
    double val;
    int num, den;
public:
    node (int a, int b) {
        int t = gcd(a, b);
        num = a / t;
        den = b / t;
        val = (double)num / den;
    }
    void print() {
        printf("%d/%d\n", num, den);
    }
    bool operator < (const struct node &y) const {
        return val < y.val;
    }
};
int main(int argc, const char * argv[]) {
    int n;
    set<node> St;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        for (int j=0; j<=i; j++) {
            St.insert(node(j, i));
        }
    }
    for (auto iter = St.begin(); iter != St.end(); iter++) {
        node tem = *iter;
        tem.print();
    }
    return 0;
}
