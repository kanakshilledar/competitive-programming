# # CODE: KOL15A
#     first line of input contains testcase and the following n
#     lines contains an alphanumeric string. we need to find the
#     sum of digits in the string.

#     logic:
#         for each testcase we input the string into the variable
#         string and then split the characters of the string into
#         a list and redeclare string as string with datatype
#         string. with the help of for loop we visit each element
#         of the list and then check if the element is digit or not
#         using the isdigit() function which returns boolean values.
#         if the is digit value is true then we add the number to 
#         the variable sum. we need to convert the datatype of str
#         to int because when we split the integers are also in the
#         format of string. so we convert them to int by adding 
#         int(i)

testcase = int(input(''))

for t in range(testcase):
    string = input('')
    string = list(string)
    sum = 0
    for i in string:
        if i.isdigit() == True:
            num = int(i)
            sum += num
        
    print(sum)
