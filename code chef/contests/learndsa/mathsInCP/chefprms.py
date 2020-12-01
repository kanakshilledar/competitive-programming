l=[2,3,5,7,11,13,17,19,23,29,31,37,41,43]
res=[]
for i in l:
    for j in l:
        if j!=i:
            res.append(i*j)
for i in range(int(input())):
    n=int(input())
    for i in res:
        if (n-i) in res:
            print("YES")
            break
    else:
        print("NO")