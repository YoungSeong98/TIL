Test_number = int(input())

for i in range (1, Test_number + 1):
    First_number, Second_number = map(int, input().split())
    print(f'#{i} {First_number // Second_number} {First_number % Second_number}')