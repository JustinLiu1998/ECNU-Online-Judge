//
//  main.cpp
//  3000
//
//  Created by 刘靖迪 on 18/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    int T, cas=0;
    scanf("%d", &T); getchar();
    while (T--) {
        printf("case #%d:\n", cas++);
        getline(cin, s);
        for (int i=0; i<s.length(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
                s[i]+=13;
            else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
                s[i]-=13;
        }
        cout << s << endl;
    }
    return 0;
}
