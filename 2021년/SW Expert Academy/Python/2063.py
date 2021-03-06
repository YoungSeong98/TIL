# 입력으로 N개의 정수가 주어졌을 때, 중간값을 출력하라
# N은 항상 홀수로 주어진다. 9 <= N <=199
# 입력 첫줄에 N이 주이지고 둘째 줄에 N개의 정수가 주어진다

# Case 1 - statistics 모듈의 median 함수를 이용하여 중간값 구하기

import statistics

number = int(input())

array = list(map(int, input().split()))

print(statistics.median(array))


# Case 2 - sort 함수를 이용하여 list의 항목들을 오름차순으로 정렬한 후 첫줄에 입력받은 number을 2로 나누어 list의 중간에 있는 index의 값을 출력

number = int(input())

array = list(map(int, input().split()))

number = (number-1)//2

array.sort()

print(array[number])