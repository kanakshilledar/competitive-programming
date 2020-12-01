symbols = ['+', '-', '*', '/', '^', '%']
for j in range(int(input())):
    exp = input()
    stack = []
    ans = []
    for i in exp:
        if i == '(':
            stack.append(i)
        elif i in symbols:
            stack.append(i)
        elif i == ')':
            while stack[-1] != '(':
                ele = stack.pop()
                ans.append(ele)
            stack.pop()
        else:
            ans.append(i)
    for j in ans:
        print(j, end = '')
    print('')