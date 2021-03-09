# 10개의 수를 입력 받아, 그 중에서 홀수만 더한 값을 출력하는 프로그램을 작성하라.
# 단, 각 수는 0이상 10000이하의 정수이다
# 입력의 첫 줄에는 테스트 케이스의 개수가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
# 출력의 각 줄은 '#t' 로 시작하고, 공백을 한 칸 둔 다음 정답을 입력한다 

test_case = int(input())

result = 0

for i in range (test_case):
    number = list(map(int, input().split()))
    for j in range (10):
        if number[j] % 2 != 0:
            result += number[j]
    print("#%d %d" % (i + 1, result))
    result = 0