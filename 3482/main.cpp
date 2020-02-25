//
//  main.cpp
//  3482
//
//  Created by 刘靖迪 on 2018/1/21.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    puts("50 96");
    puts("1 2");
    puts("1 3");
    for (int i=2; i<48; i+=2) {
        int a = i, b = a+1;
        int x = a+2, y = b+2;
        printf("%d %d\n", a, x);
        printf("%d %d\n", a, y);
        printf("%d %d\n", b, x);
        printf("%d %d\n", b, y);
    }
    puts("48 49");
    puts("1 50");
    return 0;
}
