result = []
for i in range(int(input())):
    x1, y1, x2, y2 = map(int, input().split())
    counts = 0
    for j in range(int(input())):
        x, y, r = map(int, input().split())
        d1 = ((x - x1)**2 + (y - y1)**2)**0.5
        d2 = ((x - x2)**2 + (y - y2)**2)**0.5
        if r > d1:
            if r < d2:
                counts += 1
        elif r > d2:
            counts += 1
    result.append(counts)
for k in result:
    print(k)
