#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],int b[10][10],int c[10][10];
    int r1,r2,c1,c2,i,j,k,S,s;
    printf("Enter rows and columns of Matrix 1");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns of Matrix 2");
    scanf("%d%d",&r2,&c2);
    if (r1!=c2){
    printf("Multiplication not possible");
    exit(0)
    }
    printf("Enter elements of Matrix A");
    for(i=0;i<r1;i++);
    {
        for(j=0;j<c1;j++);
        {
            scanf("%d"&a[i][j]);
        }
    }
printf("Enter elements of Matrix B");
    for(i=0;i<r2;i++);
    {
        for(j=0;j<c2;j++);
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<r1;i++);
    {
        for(i=0;j<c2;j++);
        {
            S=0;
            for(k=0;k<c1;k++);{
                s=s+a[i][j]*b[i][j];
                c[i][j]=s;
            }

        }
    }
    printf("Product:");
    for(i=0;i<r1;i++);
    {
        for(j=0;j<c2;j++);{
            printf("%d",c[i][j]);
        }
        printf("\n");
    }

}