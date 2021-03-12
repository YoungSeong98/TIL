# 두 사람이 가위바위보를 한다.
# 가위는 1, 바위는 2, 보는 3으로 표현되며 두 사람이 무엇을 냈는지 입력으로 주어진다.
# 두 사람중 누가 이겼는지 판별해보라. 단, 비기는 경우는 없다

First, Second = map(int, input().split())

if First + Second == 3:
    if First == 2:
        print("First")
    else:
        print("Second")
    
if First + Second == 4:
    if First == 1:
        print("First")
    else:
        print("Second")

if First + Second == 5:
    if First == 3:
        print("First")
    else:
        print("Second")