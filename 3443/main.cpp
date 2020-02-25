//
//  main.cpp
//  3443
//
//  Created by 刘靖迪 on 2017/12/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int Sec2HMS(int second);
int Sec2HMS(int second) {
    return second/3600 * 10000 + (second % 3600 / 60) * 100 + second % 60;
}
int main(int argc, const char * argv[]) {
    int second;
    scanf("%d", &second);
    printf("%d\n", Sec2HMS(second));
    return 0;
}
