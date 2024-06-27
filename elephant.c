#include<stdio.h>
int main()
{
	int w;
	scanf("%d",&w);
	if (w<=5)
	{
		printf("1");
	}
	else{
		if(w%5==0){
		printf("%d",w/5);
		}
		else{	
		printf("%d",(w/5)+1);	
		}
		
		
	}
}
