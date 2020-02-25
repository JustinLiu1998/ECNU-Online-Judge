//
//  main.cpp
//  2606
//
//  Created by 刘靖迪 on 2017/9/18.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    for (int i=0; i<T; i++) {
        int a, b, h;
        cin >> a >> b >> h;
        cout << setiosflags(ios::fixed) << setprecision(2);
        cout << (double)h*b/a << endl;
    }
    return 0;
}
