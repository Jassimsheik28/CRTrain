#include <stdio.h>
int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);	
    if (m * a <= b) {
        printf("%d\n", n * a);
    } else {
        int min= (n/m)*b + ((n%m)*a<b ? (n%m)*a:b);
        printf("%d\n",min);
    }
    return 0;
}

