number = int(input())
result = []
for i in range(number):
    x1,y1,r1,x2,y2,r2 = map(int,input().split())
    x = x1 - x2
    y = y1 - y2
    r = (x**2 + y**2)**0.5
    if r2 > r1:
        t = r1
        r1 = r2
        r2 = t

    if r > r1 :
        if r > (r1 + r2):
            result.append(0)
        elif r == (r1 + r2):
            result.append(1)
        else:
            result.append(2)
    elif r < r1 and r > r2:
        if r + r2 == r1 :
            result.append(1)
        elif r + r2 > r1 :
            result.append(2)
        else :
            result.append(0)
    else:
        if r + r2 < r1 :
            result.append(0)
        elif r + r2 == r1 :
            if r1 == r2 :
                result.append(-1)
            else:
                result.append(1)
        else :
            result.append(2)
            
for n in result:
    print(n)
