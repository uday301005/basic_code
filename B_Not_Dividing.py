for _ in range (int(input())):
    n = int(input())
    a = list(map(int,input().split()))

    for i in range(n-1):
        
        if a[i+1] % a[i] == 0:
            a[i+1] += 1
    print(*a)
    