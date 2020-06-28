t=int(input())
for i in range(t):
   x,y,n=list(map(int,input().split()))
   if x*(n//x)+y<=n:
      print(x*(n//x)+y)
   else:
      print(x*(n//x-1)+y)