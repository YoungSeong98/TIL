# 숫자 N은 아래와 같다.
# N=2**a x 3**b x 5**c x 7**d x 11**e
# N이 주어질 때 a, b, c, d, e 를 출력하라. 단, N은 2 이상 10,000,000 이하이다.
# [입력]
# 가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
# 각 테스트 케이스의 첫 번째 줄에 N 이 주어진다.
# [출력]
# 출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력한다.
# (t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)

test_case = int(input())

a = 0  #이 선언들을 for문 안에 넣어 반복문의 시작때마다 a~e를 0으로 초기화 해줄 수 있다
b = 0
c = 0
d = 0
e = 0

for i in range (test_case):
    number = int(input())
    while number % 2 == 0:
        if number == 1:    # 1 % 2 = 1 이므로 불필요한 구문이다
            break
        a += 1
        number //= 2
    while number % 3 == 0:
        if number == 1:   # 1 % 3 = 1 이므로 불필요한 구문이다
            break
        b += 1
        number //= 3
    while number % 5 == 0:
        if number == 1:   # 1 % 5 = 1 이므로 불필요한 구문이다
            break
        c += 1
        number //= 5
    while number % 7 == 0:   
        if number == 1:   # 1 % 7 = 1 이므로 불필요한 구문이다
            break
        d += 1
        number //= 7
    while number % 11 == 0:
        if number == 1:   # 1 % 11 = 1 이므로 불필요한 구문이다
            break
        e += 1
        number //= 11
    print("#%d %d %d %d %d %d" % (i + 1, a, b, c, d, e))

    a = 0  #이 선언들을 for문 안에 넣어 반복문의 시작때마다 a~e를 0으로 초기화 해줄 수 있다
    b = 0
    c = 0
    d = 0
    e = 0