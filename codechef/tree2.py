# # CODE: TREE2
# first line of input contains the testcases
# next line contains number of sticks (n) and the next line
# contains height of the sticks
#     logic:
#         we input the heights of sticks into a list (sticks)
#         then we extract all the unique elements of the sticks
#         and append them to a new list (uniqueHeight) the length
#         of the unique list will be number of passes required to 
#         cut the sticks because the number of passes will be equal
#         to the number of unique elements in the list. The cut part
#         should be equal i.e., h - H should be equal for all the sticks
#         being cut.


# enter testcase
testcase = int(input(''))


while testcase > 0 :
    if testcase >= 51:
        break
    # number of sticks
    numSticks = int(input(''))
    # subtask 1
    if numSticks >= 51: 
        break
    else:
        # height of individual stick
        sticks = list(map(int, input('').strip().split()))[:numSticks]

        # unique elements list
        uniqueHeight = []
        # storing unique elements in uniqueHeight
        for stick in sticks:
            if stick not in uniqueHeight:
                uniqueHeight.append(stick)
        
        # finding how many passes are required to cut the sticks
        uniqueHeight.sort()
        if uniqueHeight[0] == 0:
            print(len(uniqueHeight) - 1)
        
        else:
            print(len(uniqueHeight))

        # decrementing testcase
    testcase -= 1