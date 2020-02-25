//
//  main.cpp
//  2877
//
//  Created by 刘靖迪 on 2017/11/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
bool prime[20010];
void pre() {
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i=2; i<10010; i++) {
        if (prime[i])
        for (int j=i+i; j<20010; j+=i) {
            prime[j] = false;
        }
    }
}
int main(int argc, const char * argv[]) {
    pre();
    int a;
    while (scanf("%d", &a) == 1) {
        for (int i = a/2; i>=2; i--) {
            if (prime[i] && prime[a-i]) {
                cout << i << ' ' << a-i << endl;
                break;
            }
        }
    }
    return 0;
}
