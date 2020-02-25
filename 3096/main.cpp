//
//  main.cpp
//  3096
//
//  Created by 刘靖迪 on 2017/11/17.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    char a[100];
    scanf("%s", a);
    for (int i=0; i<8; i++) {
        if (islower(a[i]))
            a[i] = toupper(a[i]);
        if (a[i] <= 'C')
            printf("2");
        else if (a[i] <= 'F')
            printf("3");
        else if (a[i] <= 'I')
            printf("4");
        else if (a[i] <= 'L')
            printf("5");
        else if (a[i] <= 'O')
            printf("6");
        else if (a[i] <= 'S')
            printf("7");
        else if (a[i] <= 'V')
                 printf("8");
        else printf("9");
    }
    puts("");
    return 0;
}
