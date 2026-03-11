#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int size[n], sum=0;
    for(int i=0; i<n; i++){
        scanf("%d", &size[i]);
        sum+=size[i];
    }
    printf("%d\n", sum);
    return 0;
}
