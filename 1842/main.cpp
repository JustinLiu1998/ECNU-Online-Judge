//
//  main.cpp
//  1842
//
//  Created by 刘靖迪 on 2017/9/14.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <stdbool.h>
#include <cstring>

using namespace std;
#define MAX 1000000

bool x[MAX+1];
void pre() {
    memset(x, true , sizeof(x));
    x[0] = x[1] = false; x[2] = true;
    int i,j;
    for(i = 2; i * i <= MAX; i ++) {
        if(x[i]){
            for(j = i + i; j <= MAX; j += i)
                x[j] = false;
        }
    }
}
int main(int argc, const char * argv[]) {
    pre();
    int t;
    cin >> t;
    while (t--) {
        int ki;
        cin >> ki;
        if (x[ki])
            cout << ki << endl;
        else {
            int j=1;
            while (x[ki-j] != true && x[ki+j] != true)
                j++;
            if (x[ki-j])
                cout << ki-j << endl;
            else cout << ki+j << endl;
        }
    }
    return 0;
}
