#include <stdio.h>
void starpattern(int rows)
{
  for (int i = 0;i< rows; i++)
   {
     for (int j = 0; j <= i; j++)
     {
        printf("*");
     }
        printf("\n");
   }
}   
void reversestarpattern(int rows)
{
  for (int i = 0;i < rows;i++)
   {
      for (int j = 0;j<= i;j++)
      {
        printf("*");
      }
        printf("\n");
   }
}
int main()
{
    int rows,type;
    printf("Enter 0 for star pattern and enter 1 for reverse star pattern\n");
    scanf("%d",&type);
    printf("Enter the number 0f rows you want?\n");
    scanf("%d",&rows);
    switch (type)       
    {
    case 0:
        starpattern(rows);
        break;
        
    case 1:
        reversestarpattern(rows);
        break;

    default:   
        printf("You have entered invalid input\n"); 
        break;
    
    }
    
    return 0;
}






