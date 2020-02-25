//
//  main.cpp
//  2952
//
//  Created by 刘靖迪 on 2017/12/6.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
const int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int isleapyear (int a) {
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
        return 1;
    else return 0;
}
int main(int argc, const char * argv[]) {
    int y, m, d;
    cin >> y >> m >> d;
    int ans = 0;
    for (int i=0; i<m-1; i++) {
        ans += a[i];
    }
    ans += isleapyear(y) + d;
    cout << ans << endl;
    return 0;
}
