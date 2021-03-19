# 두 수도회사 A, B사가 있다.
# A사 : 1리터당 P원의 돈을 내야 한다.
# B사 : 기본 요금이 Q원이고, 월간 사용량이 R리터 이하인 경우 요금은 기본 요금만 청구된다. 
# 하지만 R 리터보다 많은 양을 사용한 경우 초과량에 대해 1리터당 S원의 요금을 더 내야 한다.
# 한 달간 사용하는 수도의 양이 W리터라고 할 때, 두 회사중 요금이 더 저렴한 회사를 골라 그 요금을 출력하는 프로그램을 작성하라.
# [입력]
# 첫 번째 줄에 테스트 케이스의 수 T가 주어진다.
# 각 테스트 케이스마다 첫 번째 줄에 위 본문에서 설명한 대로 P, Q, R, S, W(1 ≤ P, Q, R, S, W ≤ 10000, 자연수)가 순서대로 공백 하나로 구분되어 주어진다.
# [출력]
# 각 테스트 케이스마다 ‘#x’(x는 테스트케이스 번호를 의미하며 1부터 시작한다)를 출력하고, 내야 하는 수도 요금을 출력한다.

test_case = int(input())

for i in range (test_case):
    a_use = 0                       # 불필요한 문장                      
    b_use = 0
    a_fee, b_min, b_std, b_add, water_use  = map(int, input().split())

    a_use = water_use * a_fee

    if water_use <= b_std:          # b_use = b_min         
        b_use = b_min               # if water_use > b_std
    else:                           # b_use += (water_use - b_std) * b_add 로 간단화 할 수 있다
        b_use = b_min + (water_use - b_std) * b_add
    
    if a_use > b_use:               # cost = min(a_use, b_use)
        print(f'#{i+1} {b_use}')    # print(cost) 로 간단화 할 수 있다
    elif a_use < b_use:
        print(f'#{i+1} {a_use}')



