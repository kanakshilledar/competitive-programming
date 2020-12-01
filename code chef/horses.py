testcase = int(input(''))
for t in range(testcase):
    num_horses = int(input(''))
    horses = list(map(int, input('').strip().split()))[:num_horses]
    horses.sort()
    min_difference = []
    for horse in range(len(horses) - 1):
        diff = horses[horse + 1] - horses[horse]
        min_difference.append(diff)

    min_difference.sort()
    print(min_difference[0])
        