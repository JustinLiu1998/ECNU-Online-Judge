//
//  main.c
//  2858
//
//  Created by 刘靖迪 on 2017/8/31.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N;
    scanf("%d",&N);
    int i=0;
    for (i=0; i<N; i++) {
        int H, W;
        scanf("%d%d",&H, &W);
        int hm4, wm4, h4, w4;
        hm4 = H % 4;
        wm4 = W % 4;
        h4 = H / 4;
        w4 = W / 4;
        int a, b, c, d=0, m, n;
        a=h4 * w4 * 8;
        b=h4 * 2 * wm4 + w4 * 2 * hm4;
        if (hm4 > 2 && wm4 > 2) {
            c=4;
            if (hm4 >= 2) {
                m=hm4-2;
            }
            else m=hm4;
            if (wm4 >= 2) {
                n=wm4-2;
            }
            else n=wm4;
            d=m*n;
        }
        else if (hm4 > 2 && wm4 <= 2) {
            c=2*wm4;
        }
        else if (wm4 > 2 && hm4 <=2 ) {
            c=2*hm4;
        }
        else c=hm4 * wm4;
        
        printf("%d\n",a+b+c+d);
    }
}
