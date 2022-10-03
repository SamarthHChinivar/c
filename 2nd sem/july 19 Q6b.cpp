# include<stdio.h>
# include<ctype.h>
           int main()
         {
           char src[10],dest[10];
           int i,k=0;
           printf("enter string with both digits and alphabets :- ");
           gets(src);
           for(i=0; src[i]!='\0';i++)
         {
	if(isalpha(src[i]))
	{
		dest[k]=src[i];
  		k++;
	}
         }
return 0;
}

