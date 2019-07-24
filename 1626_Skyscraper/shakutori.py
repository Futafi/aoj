while True:
    b = int(input())
    if b == 0:
        break
    k = j = s = 1
    while True:
        while s < b:
            k += 1
            s += k
        while s > b:
            s -= j
            j += 1
        if s == b:
            print(j, k - j + 1)
            break
