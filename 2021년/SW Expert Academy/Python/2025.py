# 1부터 주어진 숫자만큼 모두 더한 값을 출력하시오.

receive_number = int(input())
result = 0

while receive_number > 0 :
    result += receive_number
    receive_number -= 1

print(result)

