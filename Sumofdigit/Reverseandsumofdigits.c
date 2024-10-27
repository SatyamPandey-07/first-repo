#include<stdio.h>
#include<math.h>

int main(){

long long num,n,t=0, i=1, sum=0; printf("Enter number: ");
 scanf("%d", &num); 
n=num;
while(n>=1)
{ t=t*10; 
t += (n%10); 
n=n/10;  i++; }
  
while(num>=1)
{ sum+=num%10; num=num/10; } 
  printf("Reverse: %d\nSum of digits: %d", t,sum);
 return 0;   
}
