# coding UTF-8
import math
n=600851475143

for i in range(1,int(math.ceil(math.sqrt(n)))):
	if n % i ==0 :
		n/=i
		max =i
print max