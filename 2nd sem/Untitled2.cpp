#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,n;
    int a[10],sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%d",&a[i]);    
    }
    for(i=1;i<=n;i++){
    sum=sum+a[i];    
    }
    printf("\n%d",sum);
    return 0;
}
