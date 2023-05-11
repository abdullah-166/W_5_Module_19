#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row, &col);
    int i,j;
    int A[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Before Mirror: \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\nAfter Mirror: \n");
     for(i=0;i<row;i++)
    {
        for(j=col-1;j>=0;j--)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}