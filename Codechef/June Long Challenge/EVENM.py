t=int(input()) 
for i in range(t):
   n=int(input()) 
   if n%2!=0:
      c=1
      for j in range(n):
         for k in range(n):
            print(c,end=" ") 
            c+=1
         print()  
   else:
      c=1
      for j in range(n):
         if j%2==0:
            for k in range(n):
               print(c,end=" ") 
               c+=1 
         else:
            c1=c+n-1
            for k in range(n):
               print(c1,end=" ") 
               c1-=1 
            c+=n
         print()
            
            
         
   
         