#include <stdio.h>
int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
int main()
{
    printf("ÆğÊ¼¾ØÕó\n");
    for(int i=0;i<4;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%d  ",array[i][j]);
            }
        printf("\n");
        }
    printf("\n");
    printf("µ¹ÖÃ¾ØÕó\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d  ",array[j][i]);
        }
    printf("\n");
    }
    return 0;
}
