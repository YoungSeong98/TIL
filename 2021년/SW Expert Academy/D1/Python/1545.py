# 입력받은 숫자부터 0까지 한줄에 순서대로 출력하라

number = int(input())

for i in range(number+1):
    print(number, end = ' ')
    number -= 1