# 1부터 주어진 횟수까지 2를 곱한 값(들)을 출력하시오.
# 주어질 숫자는 30을 넘지 않는다

number = int(input())
result = 1

for i in range (number + 1):
    result = 2 ** i
    print(result, end = " ")

# 파이썬에서 제곱 표현 방법 = a ** i ==> a의 i승 
