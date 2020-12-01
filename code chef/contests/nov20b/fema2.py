t = int(input(''))
while (t > 0):
    # print(t)
    e = input('')
    n, k = e.split()
    n = int(n)
    k = int(k)
    string = input('')
    count = 1
    for i in string:
        if i == "X":
            count += 1
    
    print(count)

    t -= 1