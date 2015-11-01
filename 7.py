prime=[0]*100001
isPrime=[True]*1000001
def sieve(n):
	p=0
	isPrime[0]=isPrime[1]=False
	for i in range(2,n+1):
		if isPrime[i]==True:
			prime[p]=i
			p+=1
			for j in range(2*i,n+1,i) :
				isPrime[j]=False

sieve(200000)
print prime[10001]