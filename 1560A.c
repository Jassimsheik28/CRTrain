#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int k;
		scanf("%d",&k);
		int count=0;
		int i=0;
	while(1)
	{
		if(i%3!=0&& i%10!=0){
			count++;
		}
		if(count==k){
			printf("%d\n",i);
		}
		break;
	}
	i++;
}
return 0;
}
