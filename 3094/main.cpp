//
//  main.cpp
//  3094
//
//  Created by 刘靖迪 on 2017/9/19.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int a[25];
    int n, sum=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i=n-1; i>0; i--) {
        cout << a[i] << " ";
    }
    printf("%d\n%d %.2lf\n", a[0], sum, double(sum)/n);
    return 0;
}
