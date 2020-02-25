//
//  main.cpp
//  2953
//
//  Created by 刘靖迪 on 2017/11/11.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
const string a[5] = {"Excellent", "Cheer", "Nice", "Ultimate", "Accept"};
int main(int argc, const char * argv[]) {
    char c;
    scanf("%c", &c);
    if (c == 'E')
        cout << a[0];
    else if (c == 'C')
        cout << a[1];
    else if (c == 'N')
        cout << a[2];
    else if (c == 'U')
        cout << a[3];
    else if (c == 'A')
        cout << a[4];
    else cout << "Error";
    puts("");
    return 0;
}
