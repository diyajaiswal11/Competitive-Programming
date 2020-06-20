t=int(input()) 
for i in range(t):
   n=int(input())
   a=list(map(int,input().split()))
   ei=[]
   oi=[]
   for j in range(2*n):
      if a[j]%2==0:
         ei.append(j+1)
      elif a[j]%2!=0:
         oi.append(j+1)
   s=1
   #print(ei)
   #print(oi)
   for k in range(0,len(ei)-1,2):
      if s<=n-1:
         print(ei[k],ei[k+1])
         s+=1
         
   for k in range(0,len(oi)-1,2):
      if s<=n-1:
         print(oi[k],oi[k+1])
         s+=1