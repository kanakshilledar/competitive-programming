import math
testcase = int(input(''))
while testcase > 0:
    lenSequence = int(input(''))
    sequence = list(map(int, input('').split()))[:lenSequence]
    numSequence = []
    for i in range(lenSequence):
        numSequence.append(i + 1)
    # print(numSequence)
    for i in range(lenSequence):
        for j in range(lenSequence):
            tempSeq = numSequence
            temp = math.gcd(tempSeq[i], tempSeq[j])
            tempSeq[i] = tempSeq[j] = temp
            # print(tempSeq)
            if sequence == tempSeq:
                print("YES")
    if sequence != numSequence:
        print("NO")

    testcase -= 1
