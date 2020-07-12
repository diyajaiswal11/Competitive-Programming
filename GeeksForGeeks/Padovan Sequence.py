#code
t=int(input())
for i in range(t):
    n=int(input())
    p=[]
    p.append(1)
    p.append(1)
    p.append(1)
    for j in range(3,n+1):
        p.append(p[j-2]+p[j-3])
    
    print(p[n]%1000000007)