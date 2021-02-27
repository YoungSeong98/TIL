password, input = map(int, input().split())
number_of_times = 0

while password - input >= 0 :
    number_of_times += 1
    input += 1

print(number_of_times)
