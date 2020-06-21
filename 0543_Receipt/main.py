while True:
    sum_ = int(input())
    if not sum_:
        break
    ans = sum_ - sum([int(input())for _ in range(9)])
    print(ans)
