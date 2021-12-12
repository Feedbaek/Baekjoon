n = int(input())
input_vals = input().split()
dict = {}
dup_num_dict = {}
ret = ""

for num in input_vals:
	if num not in dict:	# 이미 딕셔너리에 키가 없으면
		dict[num] = 0
		dup_num_dict[num]	# 숫자의 개수를 카운트
		for cmp in input_vals:
			if dup_num_dict[cmp] == 0:
				dup_num_dict[cmp] = 1;
				if int(num) > int(cmp):
					dict[num] += 1
	print(dict[num], end=" ")

#for num in input_vals:
#	ret += str(dict[num]) + " "

#print(ret[:-1])
