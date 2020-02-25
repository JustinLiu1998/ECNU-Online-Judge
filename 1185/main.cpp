//
//  main.cpp
//  1185
//
//  Created by 刘靖迪 on 18/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, x, y;
    scanf("%d", &n);
    while (n--) {
        scanf("%d%d", &x, &y);
        puts(x >= y ? "MMM BRAINS" : "NO BRAINS");
    }
    return 0;
}
