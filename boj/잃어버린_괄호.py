def minusnanugi(pulma):
    parts = pulma.split('-')
    
    ahp = sum(map(int, parts[0].split('+')))
    
    total = ahp
    for part in parts[1:]:
        psum = sum(map(int, part.split('+')))
        total -= psum
    
    return total

pulma = input()

print(minusnanugi(pulma))