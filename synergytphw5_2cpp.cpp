#include<stdio.h>

main()
{
    int mas[100][100];

    int n = 0;
    int m = 0;
    
    while ((n < 1) || (n > 100))
    {
        printf("Ведите колличество строк массива от 1 до 100 включительно ");
        scanf("%i",&n);
    }
    while ((m < 1) || (m > 100))
    {
        printf("Ведите колличество строк массива от 1 до 100 включительно ");
        scanf("%i",&m);
    }

    printf("Вводите значения двумерного массива последоватенльно через Enter \n");

    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            scanf("%i",&mas[j][i]);
        }
    }
    
    printf("\nВведенный массив \n");
    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("%3i",mas[j][i]);
        }
        printf("\n");
    }
    
}

