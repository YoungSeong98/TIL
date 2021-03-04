test_case = int(input())

for i in range (1,test_case+1):
    first,second = map(int,input().split())
    if first < second:
        print(f"#{i} <")
    elif first == second:
        print(f"#{i} =")
    elif first > second:
        print(f"#{i} >")