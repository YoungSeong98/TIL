# 1부터 입력받은 정수까지의 숫자에서 홀수는 더하고 짝수는 뺐을 때 최종 누적된 값을 구해보자
# 입력받은 정수 1 이상 10 이하의 정수이다
# 가장 첫 줄에는 테스트 케이스의 개수가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
# 각 테스트 케이스에는 입력받은 정수가 주어진다.
# 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 누적된 값을 출력한다.

test_case = int(input())

result = 0

for i in range (test_case):
    number = int(input())
    for j in range (number):
        if number % 2 == 0:
            result -= number
            number -= 1
        else:
            result += number
            number -= 1
    print(f"#{i+1} {result}")
    result = 0