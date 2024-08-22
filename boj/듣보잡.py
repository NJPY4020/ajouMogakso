def find():
    import sys
    input = sys.stdin.read
    data = input().splitlines()
    
    N, M = map(int, data[0].split())
    nheard = set()
    nnheard = set()
    
    for i in range(1, N + 1):
        nheard.add(data[i])
    
    for i in range(N + 1, N + 1 + M):
        nnheard.add(data[i])
    
    unheard_names = nheard & nnheard
    sortname = sorted(unheard_names)
    
    print(len(sortname))
    for name in sortname:
        print(name)