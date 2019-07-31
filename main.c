#include <stdio.h>

int main(void)
{

    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=9-i;j<10;j++)
        {
            printf("*");
        }
        printf("\n");
    }
 /* ***********************************************   */    printf("\n\n");

     for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            printf("*");
        }
        printf("\n");
    }
  /* ***********************************************   */    printf("\n\n");

    for(i=0;i<10;i++)
    {
        for(j=i;j>0;j--)
        {
            printf(" ");
        }
        for(j=i;j<10;j++)
        {
            printf("*");
        }
        printf("\n");
    }
 /* ***********************************************   */    printf("\n\n");

     for(i=1;i<11;i++)
    {
        for(j=i;j<10;j++)
        {
            printf(" ");
        }
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
 /* ***********************************************   */    printf("\n\n");



    return 0;
}
