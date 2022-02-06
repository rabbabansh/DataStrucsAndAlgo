def mpp(l):
    h, s = 0, 0
    for i in l:
        if i > h:
            s = h
            h = i
        elif i > s:
            s = i
    return h * s


if __name__ == "__main__":
    n = int(input())
    l = list(map(int, input().split()))
    print(mpp(l))
