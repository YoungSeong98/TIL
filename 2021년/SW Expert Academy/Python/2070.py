# 2개의 수를 입력 받아 크기를 비교하여 등호 또는 부등호를 출력하는 프로그램을 작성하라

test_case = int(input())

for i in range (1,test_case+1):
    first,second = map(int,input().split())
    if first < second:
        print(f"#{i} <")
    elif first == second:
        print(f"#{i} =")
    elif first > second:
        print(f"#{i} >")