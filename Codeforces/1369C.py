t=int(input()) 
for i in range(t):
   n,k=list(map(int,input().split()))
   a=list(map(int,input().split()))
   w=list(map(int,input().split()))
   a.sort(reverse=True)
   w.sort()
   w1=[]
   s=0
   start=0
   for j in range(k):
      if w[j]==1:
         s+=2*a[start]
         start+=1
      else:
         w1.append(w[j])
   finish=n-1
   w1.sort(reverse=True)
   for j in range(len(w1)):
      s+=a[start]+a[finish]
      start+=1
      finish-=(w1[j]-1)
   print(s)