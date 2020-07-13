t=int(input())
for i in range(t):
    s=list(input())
    l=[]
    for j in range(len(s)):
        l.append(ord(s[j])-97+1)
    m=[1]*len(s)
    for j in range(len(l)):
        for k in range(0,j):
            if l[k]<l[j]:
                m[j]=max(m[j],m[k]+1)
    print(max(m))
    