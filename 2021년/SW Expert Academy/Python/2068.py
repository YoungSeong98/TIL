# 10개의 수를 입력받아, 그 중에서 가장 큰 수를 출력하여라

# Case 1 - C언어 방식으로 표현한 최대값 구하기. bubble sort 방식으로 list의 index들을 일일히 비교해가며 가장 큰 수를 찾기
Test_number = int(input())

temp = 0

for i in range (1,Test_number+1):
    receive_number = list(map(int, input().split()))
    for j in range (0,9):
        for k in range (0,9-j):
            if receive_number[k] < receive_number[k+1]:
                temp = receive_number[k]
                receive_number[k] = receive_number[k+1]
                receive_number[k+1] = temp
    print(f"#{i} {receive_number[0]}")


#Case 2 - .sort()로 list의 항목들을 오름차순으로 정렬할 수 있다
k = int(input())
for i in range(k):
    j = list(map(int, input().split()))
    j.sort()
    print("#%d" %(i+1), j[9])


#Case 3 - max 함수로 list중 가장 큰 값을 찾을 수 있다
T = int(input())
for t in range(T):
    print( "#%d %d" % (t+1, max(map(int, input().split()))))