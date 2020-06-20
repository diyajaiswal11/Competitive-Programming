n=int(input())
r=list(map(int,input().split()))
b=list(map(int,input().split())) 
if r==b:
   print("-1") 
elif sum(r)>sum(b):
   print("1") 
else:
   rs=sum(r) 
   bs=sum(b)
   #print(rs) 
   #print(bs)
   ct=0
   for j in range(n):
      if r[j]==1 and b[j]==0:
         ct+=1  
   #print(ct)
   if ct==0:
      print("-1") 
   else:
      if (bs-rs)%ct==0:
         print((bs-rs)//ct+2) 
      else:
         print(int((bs-rs)/ct)+2)