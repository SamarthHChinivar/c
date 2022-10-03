 //Finding mean,variance,deviation using concept of pointers
 #include <stdio.h>
 #include <math.h>
 int main()
{int i,n;
 float x[20],sum,mean,variance,deviation;
 printf(" Enter the value of n :- \n");
 scanf("%d",&n);
 printf(" Enter n real numbers:- \n");
 for(i=0;i<n;i++)
{scanf("%f",(x+i));}//(x+i)is similar to &x[i] here, address
 // finding mean
 sum=0;
 for(i=0;i<n;i++)
{sum=sum+(*(x+i));}//*(x+i)is similar to x[i] here, value
 mean=sum/n;
 printf(" Mean is :- %f",mean);
 //finding variance
 sum=0;
 for(i=0;i<n;i++)
{sum=sum+((*(x+i)-mean)*(*(x+i)-mean));}
 variance=sum/n;
 printf("\n Variance is :- %f",variance);
 //finding deviation
 deviation=(float)sqrt(variance);
 printf("\n Deviation is :- %f",deviation);
 return 0;
}
