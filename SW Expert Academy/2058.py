receive_number = int(input())

result = (receive_number // 1000) + ((receive_number % 1000) // 100) + ((receive_number % 100) // 10) + receive_number % 10   
print(result)
