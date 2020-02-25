//
//  main.cpp
//  2053
//
//  Created by 刘靖迪 on 2017/9/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int P, Q;
    while (scanf("%d%d", &P, &Q) != EOF)
        cout <<  P + Q - 1 << "\n";
    return 0;
}
