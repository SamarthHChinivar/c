 //count of vowels and consonants in a string
 #include<stdio.h>
 int main()
{int v=0,c=0,i;
 char s[30];
 printf("\nEnter a string :- ");
 scanf("%s",s);
 for(i=0;s[i]!='\0';i++)
{if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'
 ||s[i]=='I'||s[i]=='O'||s[i]=='U')
{v++;
}
 else
{c++;
} 
}
 printf("\nNo. of vowels are :- %d",v);
 printf("\nNo. of consonants are :- %d",c);
 return 0;
}
