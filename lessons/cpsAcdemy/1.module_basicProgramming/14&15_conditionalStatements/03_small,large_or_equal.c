// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_A
#include <stdio.h>

int main() {

    int a,b;
    scanf("%d%d", &a,&b);

    if(a<b) printf("a < b\n");
    else if(a>b) printf("a > b\n");
    else printf("a == b\n");

    // int ans;
    // printf("%d\n", ans);
    
    return 0;
}