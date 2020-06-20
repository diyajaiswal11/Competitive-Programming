n,l,r=list(map(int,input().split()))
s1=0 
s2=1
s1+=(n-l+1)
c=2
for j in range(n-l+1,n):
   s1+=c 
   c*=2 
d=1
r-=1
for j in range(1,n):
   if r>0:
      d*=2 
      r-=1
   s2+=d 
   
print(s1,s2)