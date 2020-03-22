def solve(A, B, C, D):
    l, s = [], 0
    l.append(A)
    l.append(B)
    l.append(C)
    for i in range(len(l)):
            for j in range(len(l)):
                    if l[i] != l[j]:
                            if l[i] % l[j] == 0:
                                    l[i] = -1
    for i in l:
            if i != -1:
                    s = s + D//i
    return l