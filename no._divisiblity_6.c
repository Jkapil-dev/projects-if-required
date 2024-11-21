#include<stdio.h>
int main()
{
   int count=1,terms;
   int divider;


   printf("enter the number of terms required and divider:\n");
   scanf("%d  %d",&terms,&divider);
  
   printf("\n \n");

     for (int i; count<=terms; i++)
     {
      

        if (divider==0)
        {
          printf("can't divide by 0:");
          break;
          
        }
        

        else if(i%divider==0)
        {
          
           printf("%d",i);
        
             printf("\n");
             count++;
        }

    }         


    return 0;  
    
}




