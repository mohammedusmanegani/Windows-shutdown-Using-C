#include<stdio.h>
#include<stdlib.h>
int main()
{
      int choice;
      for( ; ; )
      {
            printf("\n 1.Shutdown\n 2.Restart\n 3.Exit\n\n Enter your choice: ");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1: 
                  system ("c:\\windows\\system32\\shutdown /s /t 5 \n\n");
                  printf("\n Your computer will Shutdown in 5 seconds\n");
                  system("CLS");
                  break;

            case 2: 
                  system ("c:\\windows\\system32\\shutdown /r /t 5 \n\n");
                  printf("\n Your computer will Restart in 5 seconds\n");
                  system("CLS");
                  break;

            case 3: 
                  exit(0);
            
            default:
                  printf("\n Invalid Option\n\n\n\n\n");
                  system("PAUSE");
                  system("CLS");
                  break;
            }
      }
}