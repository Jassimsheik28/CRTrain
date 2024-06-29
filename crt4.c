#include <stdio.h>
int countWaysToDistributeCandies(int n) {
    int count = 0;
    for (int a = 1; a <= n / 2; ++a) {
        int b = n - a;
        if (a > b) {
            count++;
        }
    }   
    return count;
}
int main() {
    int t; 
    scanf("%d", &t);
    while (t--) {
        int n; 
        scanf("%d", &n);
        printf("%d\n", countWaysToDistributeCandies(n));
    }
    return 0;
}

