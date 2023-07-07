//Finding the Transpose of Given Matrix.
#include<stdio.h>
int main()
{
    int i, j, m, n,trans[10][10];
    int matrix[10][20];
    printf("Enter number of rows Matrix : ");
    scanf("%d", &m);
    printf("Enter number of columns Matrix : ");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
     printf(" Matrix: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf(" Transpose of Matrix : \n");
    for (i = 0; i < m; i++)
    {
       trans[i][j]=0;
        for (j = 0; j < n; j++)
        {
           trans[i][j]=matrix[j][i]; 
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
      return 0;
}
