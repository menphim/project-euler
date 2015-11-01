# coding UTF-8
a=range(52)
a[1]=1;a[0]=1;sum =0
for i in range(50):
	a[i+2]=a[i]+a[i+1]
 	if a[i+2]%2==0 and a[i+2]<4000000:
 		sum += a[i+2]
print sum