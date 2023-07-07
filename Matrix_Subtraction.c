#include<stdio.h>
int main()
{
    int i, j, m, n,r,c,sub[10][10];
    int matrix[10][20];
    int mat[10][20];
    printf("Enter number of rows Matrix A: ");
    scanf("%d", &m);
    printf("Enter number of columns Matrix A: ");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
printf("Enter number of rows Matrix B: ");
    scanf("%d", &r);
    printf("Enter number of columns Matrix B: ");
    scanf("%d", &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
   printf(" Matrix A: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf(" Matrix B: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
if(m==r && n==c)
{
printf("Subtraction of the matrices:-\n");
    for (i= 0; i < m; i++) {
      for (j = 0 ; j < n; j++) {
         sub[i][j] = matrix[i][j] - mat[i][j];
         printf("%d\t", sub[i][j]);
      }
      printf("\n");
   }
}
else
printf(" Subtraction not possible");
return 0;
}
