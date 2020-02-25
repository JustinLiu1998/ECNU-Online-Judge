//
//  main.cpp
//  3227
//
//  Created by 刘靖迪 on 2017/11/21.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T; cin >> T;
    for (int cas=1; cas<=T; cas++) {
        int N, K;
        cin >> N >> K;
        int t = (1<<N)-1;
        printf("Case %d: %s\n", cas, ((K&t) == t) ? "ON" : "OFF");
    }
    return 0;
}

