n = int(input())
a = list(map(int, input().split()))
a.sort()
b = []
b.append(a[-2] - a[0])
b.append(a[-1] - a[1])
print(min(b))
