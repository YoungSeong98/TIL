test_case = int(input())

result = 0

for i in range (test_case):
    number = input()
    if number == number[::-1]:  # number의 숫자들을 반대순서로 뒤집음
        result = 1
    else:
        result = 0
    print(f'#{i+1} {result}')
