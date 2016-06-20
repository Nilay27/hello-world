#include<stdio.h>
#include<cs50.h>
int main()
{
    int i=0,j=0,k=0;
    
    printf("Enter the height of the half pyramid \n");
   int n= GetInt();
    while(n>=24)
    {
        printf("Enter the height of the half pyramid \n");
        scanf("%d", &n);
    }
     if(n==0)
    {
        return 0;
    }
    else if(n>0)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            for(k=0;k<=i;k++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
   else
   {
       printf ("height: %d \n",n);
   }
}
