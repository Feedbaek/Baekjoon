li = []
for i in range(int(input())):
    a, b = map(int, input().split())
    result = []
    r = 1
    for j in range(b):
        r = r * a
        r = r % 10
        if r in result:  # 결과가 반복되면 정지
            break
        result.append(r)
    x = result[(b % len(result))-1]
    if x == 0:
        li.append(10)
    else:
        li.append(x)
for k in li:
    print(k)
