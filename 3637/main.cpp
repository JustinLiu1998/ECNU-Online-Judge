//
//  main.cpp
//  3637
//
//  Created by 刘靖迪 on 2019/9/3.
//  Copyright © 2019 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

typedef long long LL;

char letter[100] = "t123456789";

void encrypt(int l, int r) {
    if (l < r) {
        char tem;
        for (int i = 0; i <= (r - l) / 2; i++) {
            tem = letter[r-i];
            letter[r-i] = letter[l+i];
            letter[l+i] = tem;
        }
        int k = (r - l + 1) / 2;
        encrypt(l, l + k - 1);
        encrypt(l + k, r);
    }
}

LL f(LL x, LL l, LL r) {
    if (l < r) {
        x = l + (r - x);
        LL k = (r - l + 1) / 2;
        if (x <= l + k - 1) {
            r = l + k - 1;
        }
        else {
            l = l + k;
        }
        return f(x, l, r);
    }
    return l;
}

int main(int argc, const char * argv[]) {
    encrypt(1, 9);
    printf("%s\n", letter);
    
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        LL len, x;
        cin >> len >> x;
        
        LL l = 1, r = len;
        while (l != r) {
            <#statements#>
        }
    }
    
    return 0;
}
