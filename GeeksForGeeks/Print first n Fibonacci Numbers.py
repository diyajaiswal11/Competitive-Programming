t=int(input())
for i in range(t):
    n=int(input())
    if n==1:
        print("1")
    elif n==2:
        print("1 1")
    else:
        print("1 1",end=" ")
        l=[]
        l.append(1)
        l.append(1)
        for j in range(2,n):
            l.append(l[j-1]+l[j-2])
            print(l[j],end=" ")
        print()
            