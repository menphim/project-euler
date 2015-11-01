prime=[0]*1000000
isPrime=[True]*2000001
def sieve(n):
	p=0
	isPrime[0]=isPrime[1]=False
	for i in range(2,n+1):
		if isPrime[i]==True:
			prime[p]=i
			p+=1
			for j in range(2*i,n+1,i) :
				isPrime[j]=False
	return p

sum =0
for i in range(sieve(2000000)):
	sum+=prime[i]
print sum