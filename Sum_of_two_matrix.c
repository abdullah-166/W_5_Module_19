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
    int B[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    int Sum[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}