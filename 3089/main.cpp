//
//  main.cpp
//  3089
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdbool>

using namespace std;

#define MAX 10000
bool x[MAX+1];
int main()
{
    memset(x, true , sizeof(x));
    x[0] = x[1] = false; x[2] = true;
    int i,j;
    for(i = 2; i * i <= MAX; i ++) {
        if(x[i]){
            for(j = i + i; j <= MAX; j += i)
                x[j] = false;
        }
    }
    int n;
    cin >> n;
    cout << "2";
    for (int i=3; i<=n; i++) {
        if (x[i])
            cout << " " << i;
    }
    cout << endl;
    return 0;
}
