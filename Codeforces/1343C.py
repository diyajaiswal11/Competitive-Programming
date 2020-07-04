def sign(n):
   return n>0
 
t=int(input()) 
for i in range(t):
   n=int(input())
   a=list(map(int,input().split())) 
   ans=0
   j=0
   while j<n:
      k=j
      mx=a[j]
      while k<n and sign(a[j])==sign(a[k]):
         mx=max(mx,a[k])
         
         k+=1 
      ans+=mx 
      j=k
   print(ans)