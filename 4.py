x = int(input())
y = int(input())

while y != 0:
    temp = y
    y = x % y
    x = temp

print(x)
