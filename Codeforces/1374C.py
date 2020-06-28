t=int(input())
for i in range(t):
   n=int(input())
   s=input()
   l=list(s)
   c=0
   ans=0
   for j in range(n):
      if l[j]=='(':
         c+=1 
      elif l[j]==')':
         c-=1 
      if c<0:
         ans+=abs(c) 
         c=0 
   print(ans)