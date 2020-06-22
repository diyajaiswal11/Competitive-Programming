t=int(input())
for i in range(t):
    n,k=list(map(int,input().split()))
    a1=input()
    a=list(a1)
    #print(a)
    l=[]
    for j in range(n):
        if a[j]=='1':
            l.append(j+1)
    #print(l)
    if len(l)==0:
        print(int((n-1)/(k+1))+1)
    else:
        c=0
        if l[0]>=k:
            p=l[0]
            while p>0:
                p-=(k+1)
                if p>0:
                    c+=1 
        if n-l[-1]>k:
            p=l[-1]
            while p<=n:
                p+=(k+1)
                if p<=n:
                    c+=1
        for j in range(len(l)-1):
            if l[j+1]-l[j]>2*k+1:
                p=l[j]
                while l[j+1]-p>=k+1:
                    p+=(k+1)
                    if l[j+1]-p>=k+1:
                        c+=1
        print(c)
                
                
            