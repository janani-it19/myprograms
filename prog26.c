#include <stdio.h>
int main() {
    int a[10][10],i,j,m,n,sum=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum+=a[i][j];
        }
    }
printf("%d",sum);
    return 0;
}
