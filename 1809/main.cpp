//
//  main.cpp
//  1809
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    for (int i=0; i<k-1; i++) {
        cout << a[i] << " ";
    }
    cout << a[k-1] << endl;
    return 0;
}
