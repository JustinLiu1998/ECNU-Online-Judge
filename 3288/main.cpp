//
//  main.cpp
//  3288
//
//  Created by 刘靖迪 on 2017/9/8.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        int x, num=0, max=0, min=100, tot=0;
        while (cin >> x && x!=-1) {
            max = x > max ? x : max; min = x < min ? x : min;
            tot += x; num++;
        }
        printf("case #%d:\n", cas++);
        cout << max << endl << min << endl << tot/num << endl;
    }
    return 0;
}
