#include <stdio.h>
#include <conio.h>
int n , e ,i ;
int prime ( int n , int i)
{
 if (n == 1 || n == 0  )
 {
 return 2;
}
 else
{
 if (i == 1 )
 return 0;
 else
 {
  if (n%i != 0){
   prime(n , i-1); 
  }
  else
  {
   return 1 ;
  }
}
}
}
int main ()
{
printf("Input a number to check whether number is prime or not: "); 
scanf("%d" ,&n);
e = prime ( n , n-1);
if (e == 0 )
printf("\nThe number is  prime");
if (e == 1 )
printf("\nThe number is not prime");
if (e == 2 )
printf("\nThe number is neither prime nor not prime");
getch() ;
return 0 ; 
}
