input = input("Enter a string: ") 
input_arr = list(input)
indexarr = [0]*len(input)

for i in range(0, len(input_arr)):
    if (input_arr[i].isnumeric()):
        indexarr[i] = 1

cnt_1 = 0
sum = 0

for i in range(len(indexarr) - 1, -1, -1):
    if indexarr[i] == 1:
        cnt_1 += 1
    else:
        cnt_1 = 0
    if (input_arr[i].isnumeric()):
        sum += indexarr[i] * int(input_arr[i]) * (10**(cnt_1 - 1))

print(sum)
