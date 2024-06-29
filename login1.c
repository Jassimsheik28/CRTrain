#include<stdio.h>
int main()
{
	char user[50],p[50],s[50];
	int i=1;
	printf("Enter the user Name");
	scanf("%s",user);
	printf("Enter the password");
	scanf("%s",&p);
	strcpy(s,p);
	while(i==1){
		if(strcmp(s,p)){
			printf("You are right");
			i=0;
			break;
		}
		else 
		{   printf("You have entered wrong one please re enter again 2 attempts left");
			scanf("%s",&p);
		}
			if(p!=s){
			printf("You have entered wrong one please re enter again 1 attempts left");
			scanf("%s",&p);
		}
			else{
			printf("You entered  right password");
			break;
		}
		if(p!=s)
		{
			printf("please enter the correct password");
			scanf("%s",&p);
		}
		else{
			printf("You entered  right password");
			break;
		}
		if(p==s)
		{
			printf("You entered rigth password");
			break;
		}
		printf("Your account is locked");
		i=0;
	}
	return 0;		
	}
