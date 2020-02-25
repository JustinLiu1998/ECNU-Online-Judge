//
//  main.cpp
//  2986
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        printf("case #%d:\n", cas++);
        cout << (int)pow(2, n) << endl;
    }
    return 0;
}
