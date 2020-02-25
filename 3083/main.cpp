//
//  main.cpp
//  3083
//
//  Created by 刘靖迪 on 2017/9/19.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    int a[4];
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
    sort(a, a+4);
    for (int i=0; i<3; i++)
        cout << a[i] << " ";
    cout << a[3] << endl;
    return 0;
}
