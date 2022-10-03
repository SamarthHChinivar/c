#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],m,n,i,j;
    
    printf("enter the rows and columns of both matrices\n");
    scanf("%d %d",&m,&n);    // read both matrices total no of rows and columns
    
    printf("enter the elements of matrix a\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);   // read matrix a elements 
        }
    }
    printf("enter the elements of matrix b\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);   // read matrix b elements 
        }
    }
    
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                   c[i][j]=a[i][j]+b[i][j]; // add elements from both matrix and store the result in matrix c
        
    printf("the elements of matrix c \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);   // print matrix c 
        }
        printf("\n");
    }

    return 0;
}

