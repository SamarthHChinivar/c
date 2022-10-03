#include<stdio.h>
#include<string.h>
int main()
{char S1[30],S2[30];
int count,c2;
printf("Enter String S1 ");
S1 = "SVIT\0";
printf("\n Enter String S2 ");
scanf("%s",&S2);
count=strlen(S1);
c2=strlen(S2);
printf("\n No of charecters in S1 & S2 is %d,%d ",count,c2);
strcpy(S1,S2);
strcat(S1,S2);
strrev(S2);
strncpy(S1,S2,2);
printf("\n After certain String Operations :-");
printf("\n String S1 is %s",S1);
printf("\n String S2 is %s",S2);
return(0);
}
