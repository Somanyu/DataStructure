a = [10, 50, 30, 60, 5]

for i in range(len(a)):
    min_idx = i
    for j in range(i+1, len(a)):
        if a[min_idx] > a[j]:
            min_idx = j
    a[i], a[min_idx] = a[min_idx], a[i]

print("sorted array")
for i in range(len(a)):
    print("%d" % a[i], end=' '),
 
