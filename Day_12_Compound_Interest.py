# Python3 program to find compound interest for given values. 

def compound_interest(principle, rate, time): 

	CI = principle * (pow((1 + rate / 100), time)) - principle
	print("Compound interest is", CI) 


principal = float(input("Enter the principal amount: \n"))
rate = float(input("Enter the interest rate: \n"))
time = float(input("Enter the time in years: \n"))

compound_interest(principal,rate,time) 
