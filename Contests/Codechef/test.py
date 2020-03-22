import random

n = random.randint(1, 50)
k = random.randint(1, n - 1)

print("n = " + str(n) + " k = " + str(k))

for i in range(n):
    print(random.randint(1, 100), end='\t')


