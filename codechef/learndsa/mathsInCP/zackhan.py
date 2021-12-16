import math
for i in range(int(input())):
    l, b = map(int, input().split())
    print(math.gcd(l, b))