# Python Program to find prime numbers in a range 

import math 

def is_prime(n): 
	if n <= 1: 
		return False
	if n == 2: 
		return True
	if n > 2 and n % 2 == 0: 
		return False
	l = math.floor(math.sqrt(n)) 
	for i in range(3, 1 + l, 2): 
		if n % i == 0: 
			return False
	return True


count = 0
for n in range(1,100000): 
	x = is_prime(n) 
	count += x 
	
print("Total prime numbers in range :", count)