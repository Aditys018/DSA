//Program based on Iteration
//static iteration

#include<stdio.h>

void Display(int iNo)
{
  
   int iCnt = 0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
   {
      printf("Jay Ganesh.....\n");
   }
}


int main()
{
   
    int iIteration = 0;

    printf("Enter the loop iteration count:\n");
    scanf("%d" , &iIteration );

    Display(iIteration);

    return 0;
    

}