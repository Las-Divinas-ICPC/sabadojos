s = input()

i = 0
iz = "qwertasdfgzxcvb"
der = "yuiophjklnm"

ok = True

if s[0] in der:
    i = 1

for c in s:
    if(i % 2 == 0 and c not in iz):
        ok = False
        break
    if(i % 2 != 0 and c not in der):
        ok = False
        break

    i += 1

if ok:
    print("yes")
else:
    print("no")
