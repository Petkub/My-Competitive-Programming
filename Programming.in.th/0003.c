#include <stdio.h>

int main()
{
    unsigned int m, n;

    scanf("%u%u", &m, &n);
    int mat1[m][n];
    int mat2[m][n];
    int sum[m][n];

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }        
    }

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            scanf("%d", &mat2[i][j]);
        }        
    }

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j]; 
        }   
    }

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return (0);
}