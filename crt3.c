#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if (n==0||n==1){
            printf("0");
        }
        else{
            if(n%2==0){
                printf("%d",(n/2)-1);
            }
            else{
                printf("%d",(n/2));
            }
        }
    }
}
