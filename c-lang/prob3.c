/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/

#include <stdio.h>

int main (void){
	long long current = 600851475143; 
 	int i = 3; // start at 3 for primes... we can do this since subject is ODD
 	int high = 0;
	
	while (1){
		while (!(current % i)) // while no remainder
		{
		   current /= i;  // divide and replace
		   high = i; 
		}
  
  		if (current == 1)
  			break;
	
	  	i +=2 ; // skip all even numbers since not prime
 	}	

 	printf ("Highest prime factor of 600851475143 is %d\n", high);
 	return 1;
}
