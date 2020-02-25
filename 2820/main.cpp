//
//  main.cpp
//  2820
//
//  Created by 刘靖迪 on 2017/11/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string a;
    getline(cin, a);
    int MAX = 1, tem=1;;
    for (int i=1; i<a.size(); i++) {
        if (a[i] == a[i-1])
            tem = 1;
        else {
            tem++;
            MAX = max(MAX, tem);
        }
    }
    if (a.size() == 0) MAX = 0;
    cout << MAX << endl;
    return 0;
}
