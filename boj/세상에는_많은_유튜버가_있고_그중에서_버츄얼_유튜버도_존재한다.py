from collections import defaultdict
from datetime import datetime, timedelta

def calc_dur(s, e):
    FMT = '%H:%M'
    return datetime.strptime(e, FMT) - datetime.strptime(s, FMT)

n, m = map(int, input().split())

yt_times = defaultdict(lambda: defaultdict(timedelta))

for _ in range(n):
    entry = input().strip()
    name, day, start, end = entry.split()
    day = int(day)
    duration = calc_dur(start, end)
    yt_times[name][day] += duration

yt_sum = {}

for name, days in yt_times.items():
    total_dur = sum(days.values(), timedelta())
    total_hrs = total_dur.total_seconds() / 3600
    days_count = len(days)
    yt_sum[name] = (total_hrs, days_count)

real_yt = [name for name, (hrs, days) in yt_sum.items() if hrs >= 60 and days >= 5]

real_yt.sort()

if real_yt:
    for yt in real_yt:
        print(yt)
else:
    print(-1)
