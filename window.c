#include<stdio.h>
int main()
{
    int w,i,fs,f[30];
    printf("Enter window size: ");
    scanf("%d",&w);
    printf("\nEnter number of frames: ");
    scanf("%d",&fs);
    printf("\nEnter %d frames: ",fs);
    for(i=1;i<=fs;i++)
    {
    	scanf("%d",&f[i]);
	}
	for(i=1;i<=fs;i++)
    {
    	printf("\n The sent frame is:");
        if(i%w==0)
        {
            printf("%d\n",f[i]);
            printf("the  receiver received the frames\n");
            printf("Acknowledgement of above frames sent is received by sender\n\n");
        }
        else
            printf("%d ",f[i]);
    }
    if(fs%w!=0)
    {
    	printf("\n the  receiver received the frames\n");
    	printf("Acknowledgement of above frames sent is received by sender\n");
	}
        
 
    return 0;
}
