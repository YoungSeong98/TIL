# 하나의 자연수를 입력받아 각 자릿수의 합을 계산하라

receive_number = int(input())

result = (receive_number // 1000) + ((receive_number % 1000) // 100) + ((receive_number % 100) // 10) + receive_number % 10   
print(result)
