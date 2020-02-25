//
//  main.cpp
//  1431
//
//  Created by 刘靖迪 on 20/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long long LL;
LL dp[25][25];
int main(int argc, const char * argv[]) {
    for (int i=0; i<=10; i++) {
        dp[i][0] = dp[0][i] = 1;
    }
    for (int i=1; i<=10; i++) {
        for (int j=1; j<=10; j++) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
            printf("%6lld%c", dp[i][j], (j == 10 ? '\n' : ' '));
        }
    }
    cout << "Hello world!" << endl;
    return 0;
}
