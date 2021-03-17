# 입력받은 숫자를 1배, 2배... k배만큼 증가시키며 각 자리수에서 0부터 9까지의
# 모든 숫자를 보는 때는 몇배를 했을때인지 구하라
# 입력의 첫줄에는 test case가 주어지고 각 테스트 케이스의 첫 번째 줄에는 (1 ≤ N ≤ 106) 크기의 정수가 주어진다
# 출력의 처음에는 #test case를 출력하고 최소 몇 배만큼 증가시켰을 때 0부터 9까지의 모든
# 숫자를 보게 되는지 출력한다



test_case = int(input())
for x in range(1, test_case+1):
    number = int(input())
    count = 0
    
    zero_to_nine = [str(i) for i in range(10)]  # 0부터 9까지를 문자열로 저장. zero_to_nine = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
    while zero_to_nine:
        count += 1
        room = number * count
        room = str(room)
        
        for c in room:                          # python은 직관적인 조건문 사용이 가능
            if c in zero_to_nine:
                zero_to_nine.remove(c)          # zero_to_nine에서 
                
    print('#{} {}'.format(x, room))
    