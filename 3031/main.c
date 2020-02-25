//
//  main.c
//  3031
//
//  Created by 刘靖迪 on 2017/6/18.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void division(char *x) {
    int len = (int)strlen(x);
    int i=0,tem;
    for (i=0; i<len; i++) {
        x[i] -= '0';
    }
    tem = 0;
    for (i=0; i<len; i++) {
        x[i] += tem*10;
        tem = x[i] % 2;
        x[i] /= 2;
    }
    for (i=0; i<len; i++) {
        x[i] += '0';
    }
}
void multi(int *m,int len) {
    int tem=0;
    for (int i=len-1; i>=0; i--) {
        m[i]*=2;
        m[i]+=tem;
        tem = m[i]/10;
        m[i]%=10;
    }
}
void add(int *m, int n, int len) {
    int tem=0;
    m[len-1] += n;
    for (int i=len-1; i>=0; i--) {
        m[i]+=tem;
        tem = m[i]/10;
        if (tem)    m[i]-=10;
    }
}
void trans(char *a, int b[], int len) {
    int c[110]={0};
    for (int i=len-1; i>=0; i--) {
        multi(c, 110);
        add(c, b[i], 110);
    }
    int k=0;
    while (c[k++] != 0);
    int j;
    for (j=0; j<110; j++) {
        a[j] = c[j] + '0';
    }
    a[j] = '\0';
    
}
/*
int main() {
    char a[100];
    scanf("%s",a);
    division(a);
    printf("%s\n",a);
    return 0;
}
*/

int main() {
    int cas,t;
    scanf("%d",&cas);
    for (t=0; t<cas; t++) {
        char a[102];
        int b[340], i=0, len, flag = 1;
        scanf("%s",a);
        len = (int)strlen(a);
        while (flag ) {
            b[i++] = (a[len-1]-'0') % 2;
            division(a);
            int s=0;
            for (int j=0; j<len; j++) {
                s+=(a[j] - '0');
            }
            if (!s) flag = 0;
        }
        int len2 = i;                   //二进制的长度为len2，用整型数组储存；
        /*                              //到此修改一下即为任意长度正整数转2进制
        char c[102];
        for (i=0; i<len2; i++) {
            c[i] = b[i] + '0';
        }
        c[i] = '\0';
        printf("%s\n",c);
        */
        char key[112];
        trans(key, b, len2);
        char ans[102];
        int k=0, len3 = (int)strlen(key), m=0;
        while (key[k++] != '0') ;
        k--;
        for (m=0; m<len3-k; m++) {
            ans[m] = key[k+m];
        }
        ans[m]='\0';
        printf("case #%d:\n%s\n",t,ans);
    }
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int e,i,j,k,n,b,str;
    char s[100]={0};
    scanf("%d\n",&e);
    for(i=0;i<e;i++)
    {
        printf("case #%d:\n",i);
        int a[334]={0},t[100]={0};
        gets(s);
        str=strlen(s);
        j=b=0;
        for(k=0;k<str;k++)s[k]-='0';
        while(s[b]!=0)
        {
            a[j]=(s[str-1])%2;
            for(k=0;k<str;k++){s[k+1]+=((s[k])%2)*10;s[k]/=2;s[str]=0;}
            j++;
            if(!s[b])b++;
        }//转换为二进制 前j项为反置的二进制 接下来转换十进制
        // for(k=0;k<334;k++){printf("%d",a[k]);}printf("\n");
        // for(k=0;k<344;k++){printf("%d",s[k]);}
        for(k=0;k<j;k++)
        {
            t[99]+=a[k];
            // for(n=99;n>0;n--){if(t[n]>9){t[n-1]++;t[n]%=10;}}
            for(n=99;n>0;n--)if(k!=j-1)t[n]*=2;
            for(n=99;n>1;n--)if(t[n]>9){t[n-1]+=t[n]/10;t[n]%=10;}
        }b=0;
        
        for(k=0;k<100;k++){if(t[k]){b=1;break;}}
        if(b==1)
        {for(n=k;n<100;n++)
            printf("%d",t[n]);}else printf("0");
        printf("\n");
    }
    return 0;
}
*/
