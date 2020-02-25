//
//  main.cpp
//  3389segment tree
//
//  Created by 刘靖迪 on 2018/1/28.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef struct node{
    int l, r, v;
} NODE;
NODE ne[400000010];
void build(int k, int l, int r) {
    ne[k].l = l;
    ne[k].r = r;
    if (l == r) return;
    int mid = (l + r) >> 1;
    build(k<<1, l, mid);
    build(k<<1|1, mid+1, r);
}
int mn(int k) {
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
