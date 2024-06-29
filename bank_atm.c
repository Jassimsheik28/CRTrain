#include<stdio.h>
int main()
{
	int amount=1000,a,i=1,m,w;
	printf("1.Check Balence\n");
	printf("2.Deposit Money\n");
	printf("3.Withdrawl\n");
	printf("4.Exit\n");
	while(i)
	{
		printf("\nEnter your choice\n");
		scanf("%d",&a);
		switch(a)
		{
		case 1:
			printf("%d",amount);
			break;
		case 2:
			printf("Enter the money to deposit\n");
			scanf("%d",&m);
			amount+=m;
			printf("%d",amount);
			break;	
		case 3:
			printf("Money for withdrawl\n");
			scanf("%d",&w);
			if(w<=amount){
				amount-=w;
			}
			else{
				printf("No sufficiant balence\n");
			}
			printf("%d",amount);
			break;
		case 4:
			printf("exit\n");
			i=0;
			break;
		default:
			printf("Thanks\n");
			break;	
	}
	}
}
