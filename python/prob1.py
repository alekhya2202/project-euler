#Project Euler problem-1 solution in python

#If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

#Find the sum of all the multiples of 3 or 5 below 1000.

def multiples_sum(start : int, end : int) -> int:
	req_sum = sum(x for x in range (start, end) if x % 3 == 0 or x % 5 == 0)
	return req_sum

print(multiples_sum(1, 10)) #prints 23
print(multiples_sum(1, 1000)) #prints 233168
  
