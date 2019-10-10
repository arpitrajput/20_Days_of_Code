import math

x,y = map(int,input("Enter length of two adjacent sides of a triangle \n").split())
a = int(input("Enter angle between these two sides in degree \n"))

radian = math.pi/180*a

if x > 0 and x < 20 and y > 0 and y < 20 and a > 0 and a < 90 :
    area = (x*y*math.sin(radian))/2
    print("Are of triangle is : %.2f" %round(area,2))
else:
    pritn("Beyond Limits")