#include<stdio.h>
int main()
{
	int g,a;
	printf("Enter The Grade you scored");
	scanf("%d",&g);
	a=g/10;
/*	if(g>=90&&g<=100){
		a=1;
	}
	else if(g>=80&&g<90)
	{
		a=2;
	}
	else if(g>=70&&g<80){
		a=3;
	}
	else if(g>=60&&g<70){
		a=4;
	}
	else{
		a=5;
	}*/
	switch(a)
	{
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("Fail");
			break;		
	}
	return 0;
}
