# 알파벳으로 이루어진 문자열을 입력 받아 
# 각 알파벳을 1부터 26까지의 숫자로 변환하여 출력하라
# *제약 사항* 문자열의 최대 길이는 200이다. 알파벳은 대문자만 입력된다

string = list(input())

for i in range(len(string)):
    print(ord(string[i])-64, end=' ')

# len() = list의 크기를 알려줌 
# ex) len([1,2,3,4,5]) 
#     output = 5

# ord() = 문자의 ASCII Code값을 돌려줌
# ex) ord('a')
#     output = 97