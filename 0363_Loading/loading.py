H, N = [int(i) for i in input().split()]
jama = dict()
dct = {0: 0, 1: 0}
now_line = ()


def get_can_put_num(now_line, before_line):
    if before_line == zeros:
        if now_line == zeros:
            return 2, ones
        elif sum(now_line) == 1 or now_line in ren:
            return 1,
        else:
            return 0, now_line
    elif sum(before_line) == 1 or before_line in ren:


for _ in range(N):
    xi, yi = [int(i) for i in input().split()]
    if jama.get(yi):
        jama[yi].append(xi)
    else:
        jama[yi] = [xi]


def get_num


print(jama)
