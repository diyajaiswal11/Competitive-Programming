t=int(input()) 
for i in range(t):
   n,k=list(map(int,input().split())) 
   p=list(map(int,input().split())) 
   s=0 
   for j in range(n):
      if p[j]>k:
         s+=(p[j]-k) 
         
   print(s)