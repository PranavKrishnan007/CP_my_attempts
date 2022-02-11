s = input()
t = input()
count = 0
m = min(len(s), len(t))
j = len(s) - 1
k = len(t) - 1
while(m != 0):
    if s[j] == t[k]:
        count += 1
        k -= 1
        j -= 1
    else:
        break
    m = m-1
print((len(s)-count) + (len(t)-count))
