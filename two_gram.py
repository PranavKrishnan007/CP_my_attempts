num = int(input())
text = input()
a = []
b = []
for x in range(num-1):
    st = text[x] + text[x+1]
    if st not in a:
        count = 0
        for y in range(x, num-1):
            if text[y] + text[y+1] == st:
                count += 1
        a.append(st)
        b.append(count)
print(a[b.index(max(b))])
