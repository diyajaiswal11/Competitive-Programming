

def icecream(a,n): 
   a5=0 
   a10=0
   for j in range(n): 
      if a[j]==5:
         a5+=1 
      elif a[j]==10:
         if a5>0:
            a5-=1 
            a10+=1
         else:
            return 0
      else:
         if a10>0:
            a10-=1 
         elif a5>1:
            a5-=2 
         else:
            return 0
   return 1


t=int(input())
for i in range(t):
   n=int(input())
   a=list(map(int,input().split()))
   if icecream(a,n):
      print("YES") 
   else:
      print("NO") 