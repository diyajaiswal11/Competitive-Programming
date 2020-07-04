n,sx,sy=list(map(int,input().split()))
xl,xg,yl,yg=0,0,0,0
for j in range(n):
   x,y=list(map(int,input().split()))
   if x<sx:
      xl+=1 
   elif x>sx:
      xg+=1 
   if y<sy:
      yl+=1 
   elif y>sy:
      yg+=1 
mxm=max(xl,yl,xg,yg)
if mxm==yl:
   sy-=1
elif mxm==yg:
   sy+=1
elif mxm==xl:
   sx-=1
else:
   sx+=1
print(mxm)
print(sx,sy)