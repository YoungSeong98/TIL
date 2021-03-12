test_case = int(input())

for i in range (test_case):
    numbers = list(map(int, input().split()))
    print("#%d %d" % (i+1, round(sum(numbers) / 10)))


