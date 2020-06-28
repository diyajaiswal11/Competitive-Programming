t=int(input())
for i in range(t):
   n=int(input())
   c=0
   f=0
   while n>1:
      if n%6==0:
         n=n//6 
         c+=1
      elif n%6==3:
         n*=2 
         c+=1 
      else:
         f=1
         print("-1")
         break
   if f==0:
      print(c)
   