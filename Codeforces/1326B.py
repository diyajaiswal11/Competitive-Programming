n=int(input()) 
b=list(map(int,input().split()))
a=[]
x=0
for j in range(n):
   a.append(x+b[j])
   if b[j]>0:
      x+=b[j]
      
for j in range(n):
   print(a[j],end=" ")
   
 