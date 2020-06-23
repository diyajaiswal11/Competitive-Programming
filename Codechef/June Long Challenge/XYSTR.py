t=int(input()) 
for i in range(t):
   s=input() 
   l=len(s)
   p=0 
   i=0 
   while i<l-1:
      if s[i]=='x' and s[i+1]=='y' or s[i]=='y' and s[i+1]=='x':
         p+=1 
         i+=1 
      i+=1 
   print(p)