a = [1, 6.1, 3, 4, 5, 6.4, 7, 8, 9, 10]

for i in range(len(a)):
    for j in range(i+1, len(a)):
        if a[i] > a[j]:
            a[i], a[j] = a[j], a[i]

print("sorted array")
for i in range(len(a)):
    print("%d" % a[i], end=' '),
 
