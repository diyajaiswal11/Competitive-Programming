n=int(input())
a=list(map(int,input().split()))
x=max(a) 
xd=[]
j=0
while j<len(a):
   if x%a[j]==0 and a[j] not in xd:
      xd.append(a[j])
      a.pop(j)
   else:
      j+=1
#print(xd)
y=max(a)
print(x,y)