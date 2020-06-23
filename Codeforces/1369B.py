t=int(input()) 
for i in range(t):
   n=int(input())
   s=input()
   l=list(s)
   if sorted(l)==l:
      print(s)
   else:
      c0=0 
      c1=0 
      j=0 
      k=n-1
      while l[j]=='0' and j<n:
         c0+=1
         j+=1 
      while l[k]=='1' and k>=0:
         c1+=1 
         k-=1 
      print('0'*c0+'0'+'1'*c1)
      
         
