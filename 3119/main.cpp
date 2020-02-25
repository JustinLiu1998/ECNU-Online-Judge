//
//  main.cpp
//  3119
//
//  Created by 刘靖迪 on 2017/9/19.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    int a[3];
    cin >>a[0]>>a[1]>>a[2];
    sort(a, a+3);
    cout <<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    return 0;
}
