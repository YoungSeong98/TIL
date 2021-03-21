def init():
    N, M = map(int, input().split())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    return N, M, A, B

def swap(A, B):
    if len(A) > len(B):
        return B, A
    return A, B

def calculate(A, B):
    maxNumber = float('-inf')
    diff = len(B) - len(A)
    for i in range(diff+1):
        tempNumber = 0
        for j in range(len(A)):
            tempNumber += A[j] * B[j+i]
        maxNumber = max(maxNumber, tempNumber)        
    return maxNumber

for t in range(int(input())):
    N, M, A, B = init()
    A, B = swap(A, B)
    answer = calculate(A, B)
    print('#{} {}'.format(t+1, answer))