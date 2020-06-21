while True:
    n = int(input())
    if not n:
        break
    m = int(input())
    li = [[] for _ in range(n + 1)]
    for _ in range(m):
        a, b = [int(i) for i in input().split()]
        li[a].append(b)
        li[b].append(a)
    ans = set()
    print(li)
    for i in li[1]:
        print(i)
        ans.add(i)
        for j in li[i]:
            ans.add(j)
    if 1 in ans:
        ans.remove(1)
    print(len(ans))
