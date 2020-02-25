//
//  main.cpp
//  3226（2）
//
//  Created by 刘靖迪 on 2017/9/6.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T; cin >> T;
    for (int i=0; i<T; i++) {
        int N, K;
        cin >> N >> K;
        int t = (1<<N)-1;
        printf("Case %d: %s\n", i+1, ((K&t) == t) ? "ON" : "OFF");
    }
    return 0;
}
