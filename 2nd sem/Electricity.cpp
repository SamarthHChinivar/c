#include <stdio.h>
/*lab manual 5th question ,1st chap */
int main() 
{int n, units, i;

char name[20];

float cost, total;

printf("Enter number of customers:\n");

scanf("%d", &n);

printf("Enter customer details:\n"); 

for (i = 0; i<n; i++)
{printf("\nName = ");
scanf("%s", name);
printf("Units = ");
scanf("%d", &units);
if (units <= 200) 
cost = units * 0.8;

// for next 100 units: 90 paise per unit

else if (units <= 300) 
cost = 200*0.8+((units - 200) * 0.9);
else
cost = 200 * 0.8 + 100 * 0.9+(units - 300)*1;

total = cost + 100;
//Rs. 100 is meter charges for all customers 
if (total > 400)
total = total + (total * 0.15);
// 15% surcharge if cost is more than 400 
printf("Charges = %f", total);
}
return 0;
}

