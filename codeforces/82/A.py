n = int(raw_input())

n -= 1
while n >= 5:
    n -= 5
    n /= 2

names = ["Sheldon", "Leonard", "Penny", "Rajesh", "Howard"]
print names[n]
