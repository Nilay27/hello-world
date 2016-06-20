#include<stdio.h>
#include<cs50.h>
int main(void)
{
    
    printf("Enter the length of your shower in minutes \n");
  int x= GetInt();
  if(x>=0)
  {
    printf("minutes: %d \n",x);
    printf("bottles: %d \n",12*x);
  }
  else 
  return 0;
}