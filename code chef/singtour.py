testcase = int(input(''))

for iterate in range(testcase):
    singers = int(input())
    lower_limit = []
    upper_limit = []
    for i in range(singers):
        lower_limit_value, upper_limit_value = map(int, input().split())
        lower_limit.append([lower_limit_value, i])
        upper_limit.append([upper_limit_value, i])

    lower_limit.sort(key = lambda x:x[0], reverse = True)
    upper_limit.sort(key = lambda x:x[0])
    score = [0] * singers
    for i in range(singers):
        score[upper_limit[i][1]] += i
        score[lower_limit[i][1]] += i
    print(*score)