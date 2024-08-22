import sys
input = sys.stdin.readline

def most_sold_book(titles):
    from collections import Counter
    
    title_counts = Counter(titles)
    max_count = max(title_counts.values())
    
    most_sold_titles = []
    for title, count in title_counts.items():
        if count == max_count:
            most_sold_titles.append(title)
    
    return sorted(most_sold_titles)[0]

N = int(input())
titles = []
for _ in range(N):
    title = input()
    titles.append(title)

print(most_sold_book(titles))
