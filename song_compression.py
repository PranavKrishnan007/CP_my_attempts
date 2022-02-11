n, m = map(int, input().split())
a = []
b = []
c = []
for x in range(n):
    i, j = map(int, input().split())
    a.append(i)
    b.append(j)
    c.append(i-j)
 
if sum(b) > m:
    print(-1)
else:
    c.sort(reverse=True)
    count = 0
    h = sum(a)
    for x in range(n):
        if h > m:
            h = h - c[x]
            count += 1
            continue
        else:
            break
    print(count)
