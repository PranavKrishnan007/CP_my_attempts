n = int(input())
for x in range(n):
    text = input()
    rep = text.count(text[0])
    if rep == len(text):
        print(-1)
        continue
    else:
        l = sorted(text)
        s = ''
        for x in l:
            s = s + x
        print(s)
