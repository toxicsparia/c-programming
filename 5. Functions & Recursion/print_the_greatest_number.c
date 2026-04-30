#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    int x = a>b;
    int y = b>=a;
    int z = c>d;
    int m = d>=c;
    int n = (x*a)+(y*b);
    int o = (z*c)+(m*d);
    int p = n>o;
    int q = o>=n;
    int r = (p*n)+(q*o);
    return r;
}