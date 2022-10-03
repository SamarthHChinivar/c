 #include<stdio.h>
 int main()
{int i;
 char str1[10],str2[10];
 printf("\n Enter any string :- ");
 scanf("%s",str1);
 for(i=0;str1[i]!='\0';i++)
{str2[i]=str1[i];
}
 printf("\n String 2 is:- ");
 puts(str2);
 return 0;
}
