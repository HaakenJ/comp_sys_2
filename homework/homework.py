from random import randint
from statistics import mean

blockSize = 2048
iterations = 10000
maxInt = 20000
minInt = 1
results = []

for i in range(0, iterations):
    p = randint(minInt, maxInt)
    internalFrag = blockSize - (p % blockSize)
    results.append(internalFrag)


mean = mean(results)

print("The mean internal fragmentation is " + str(mean))
