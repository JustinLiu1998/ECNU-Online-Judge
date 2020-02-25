//
//  main.cpp
//  2569
//
//  Created by 刘靖迪 on 2017/9/18.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    char c;
    while ((c = getchar()) && c != '\n') {
        if(c >= 'a' && c <= 'z')
            c += ('A'- 'a');
        cout << c;
    }
    cout << endl;
    return 0;
}
