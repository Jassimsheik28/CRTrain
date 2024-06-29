#include<stdio.h>
int main()
{
	int i=1,p;
	char user[50];
	printf("Enter the user Name");
	scanf("%s",user);
	while(i==1){
		printf("Enter the password");
		scanf("%d",&p);
		if(p==1234){
			printf("You are right");
			i=0;
			break;
		}
		else 
		{   printf("You have entered wrong one please re enter again 2 attempts left");
			scanf("%d",&p);
		}
			if(p!=1234){
			printf("You have entered wrong one please re enter again 1 attempts left");
			scanf("%d",&p);
		}
			else{
			printf("You entered  right password");
			break;
		}
		if(p!=1234)
		{
			printf("please enter the correct password");
			scanf("%d",&p);
		}
		else{
			printf("You entered  right password");
			break;
		}
		if(p==1234)
		{
			printf("You entered rigth password");
			break;
		}
		printf("Your account is locked");
		i=0;
	}
	return 0;		
	}
