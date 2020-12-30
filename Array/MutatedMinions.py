test = int(input())

for t in range(test):
    wolverine = 0
    n,k = map(int,input().split())
    power = list(map(int,input().split()))
    power_after = [x+k for x in power]
    for item in power_after:
        if item%7==0:
            wolverine=wolverine+1
    print(wolverine)
