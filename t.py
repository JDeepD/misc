val_arr = [0, 1, 2, 3, 4]
indexes = [0, 1, 2, 2, 1]

target = []

for i in range(len(val_arr)):
    target.insert(indexes[i], val_arr[i])

print(target)
