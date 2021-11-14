zero = []
one = []


def fibonacci(n):
    r_zero = [1, 0]
    r_one = [0, 1]
    if n <= 1:
        return

    for i in range(2, n+1):
        r_zero.append(r_zero[i-1]+r_zero[i-2])
        r_one.append(r_one[i-1]+r_one[i-2])

    return r_zero, r_one


T = int(input())
r_zero, r_one = fibonacci(40)

for i in range(T):
    n = int(input())
    zero.append(r_zero[n])
    one.append(r_one[n])
for x in range(T):
    print(f"{zero[x]} {one[x]}")
