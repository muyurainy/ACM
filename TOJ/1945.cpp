#include <stdio.h>
int main()
{
    for(int i=2;i<=200;i++)
            for(int j=2;j<i;j++)
                    for(int k=j;k<i;k++)
                            for(int n=k;n<i;n++)
                                    if(i*i*i == j*j*j + k*k*k + n*n*n)
                                              printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,n);
    return 0;
}
