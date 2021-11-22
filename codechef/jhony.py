# # CODE: JHONY
# first line of input contains the number of testcases 
# the next line contains the playlist and the next line
# contains the position of uncle jhony. we need to find the 
# position of uncle jhony after sorting the list
#     logic:
#         we are given with the play list and the position of
#         uncle jhony as the position is in human form we need
#         to subtract 1 from it to get the actual index of
#         uncle jhony. after that we sort the list and then 
#         check which what index is assigned to uncle jhony
#         with the help of index() function and add 1 to it to
#         get the position in human form, i.e., if the index 
#         position is 0 then we should get the position as 1.
testcases = int(input(''))

for t in range(testcases):
    play_list_length = int(input(''))
    play_list = list(map(int, input('').strip().split()))[:play_list_length]
    uncle_jhony_index = int(input(''))
    uncle_jhony_element = play_list[uncle_jhony_index - 1]
    play_list.sort()
    uncle_jhony_index = play_list.index(uncle_jhony_element) + 1

    print(uncle_jhony_index)
