# 10814 나이순 정렬
import sys
n = int(sys.stdin.readline())

dic = {}
for i in range(n):
	user = sys.stdin.readline().rstrip("\n").split()
	if int(user[0]) in dic:
		dic[int(user[0])] = dic[int(user[0])] + " " + user[1]
	else :
		dic[int(user[0])] = user[1]

sdic = sorted(dic.items())

for key, name in sdic:
	users = name.split()
	for usr in users:
		print(f"{key} {usr}")
