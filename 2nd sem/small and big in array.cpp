# include <stdio.h>
int main()
{int i,n,a[35],big,small;
printf("\n Enter the number of elements to be entered :- ");
scanf("%d",&10);
printf("\n Enter all the Elements of the Array :- ");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
big=a[0];
for(i=1;i<n;i++)
{if(a[i]>big)
 big=a[i];
}
small=a[0];
for(i=1;i<n;i++)
{if(a[i]<small)
 small=a[i];
}
printf("\n The Biggest Element is %d ",big);
printf("\n The Smallest Element is %d ",small);
return 0;
}

