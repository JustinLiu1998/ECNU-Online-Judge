//
//  main.cpp
//  3086
//
//  Created by 刘靖迪 on 2018/1/7.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    for (int i=100; i<1000; i++) {
        int z = i%10;
        int y = i%100/10;
        int x = i/100;
        if (i == x*x*x + y*y*y + z*z*z)
            printf("%d\n", i);
    }
    return 0;
}
