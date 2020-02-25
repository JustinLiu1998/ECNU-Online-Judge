//
//  main.cpp
//  2538
//
//  Created by 刘靖迪 on 2017/9/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

#define max 4000
int a[max+1][max+1]={0};
int main(int argc, const char * argv[]) {
    int ans[max+1]={0};
    for (int i=1; i<max+1; i++) {
        int x=0;
        for (int j=1; j*j<i+1; j++) {
            if (i%j == 0) {
                a[i][j] = 1;
                a[i][i/j] = 1;
                if (j==1)   a[i][i/j]=0;
            }
        }
        for (int j=1; j<i; j++) {
            if (a[i][j])    x+=j;
        }
        if (x == i)
            ans[i] = 1;
    }
    for (int i=1; i<max+1; i++) {
        if (ans[i]) {
            cout << i << " its factors are";
            for (int j=1; j<i; j++) {
                if (a[i][j])
                    cout << " " << j;
            }
            cout << "\n";
        }
    }
    return 0;
}
