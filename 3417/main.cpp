//
//  main.cpp
//  3417
//
//  Created by 刘靖迪 on 2017/10/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
typedef unsigned long long ull;
int main(int argc, const char * argv[]) {
    ull a, b, ans=1;
    cin >> a >> b;
    for (int i=0; i<b; i++)
        ans *= a;
    cout << ans << endl;
    return 0;
}
