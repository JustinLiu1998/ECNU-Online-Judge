//
//  main.cpp
//  3351
//
//  Created by 刘靖迪 on 2017/9/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        if (a == 0)
            cout << "LBB made no coffee today." << endl;
        else if (a == 1)
                cout << "LBB made a cup of coffee today." << endl;
        else cout << "LBB made " << a << " cups of coffee today." << endl;
        
        if (b == 0)
            cout << "JDG made no coffee today." << endl;
        else if (b == 1)
            cout << "JDG made a cup of coffee today." << endl;
        else cout << "JDG made " << b << " cups of coffee today." << endl;
        
        if (a + b == 0)
            cout << "BOSS had no coffee today." << endl;
        else if (a + b == 1)
            cout << "BOSS had a cup of coffee today." << endl;
        else cout << "BOSS had " << a + b << " cups of coffee today." << endl;
    }
    return 0;
}
