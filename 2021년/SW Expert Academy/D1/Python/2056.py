test_case = int(input())

md = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

for i in range (test_case):
    date_input = input()
    year = int(date_input[0:4])
    month = int(date_input[4:6])
    day = int(date_input[6:8])
    res = -1

    if month >= 1 and month <=12 and day >= 1 and day <= md[month - 1]:
        res = date_input[0:4]+"/"+date_input[4:6]+"/"+date_input[6:8]
    print(f'#{i+1} {res}')




# md = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
# test_case = int(input())
# for i in range(test_case):
#     date_input = input()
#     month = int(date_input[4:6])                                      # list를 구간을 설정하여 나눌 수 있다
#     day = int(date_input[6:8])
#     res = -1                                                          # if문의 조건에 해당되지 않는 input이 들어올 때 -1을 출력  
#     if 1<=month and month<=12 and 1<=day and day<=md[month-1]:        # 월과 index의 숫자를 맞춰주기위해 month - 1을 함
#         res = date_input[0:4]+"/"+date_input[4:6]+"/"+date_input[6:8]
#     print( f"#{i+1} {res}" )



#     test_case = int(input())
# md = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

# for i in range(test_case):
#     cal = input()
#     year = int(cal[0:4])
#     month = int(cal[4:6])
#     day = int(cal[6:8])

#     print("#%d " %(i+1), end = '')

#     if(((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0)):  # 윤년 
#         md[1] = 29
#     if month <= 0 or month >= 13:
#         print(-1)
#     else:
#         if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12):
#             if(day>0 and day <32):
#                 print("%.4d/%.2d/%.2d" %(year, month, day))           # 0을 포함해서 출력하기 위함
#             else:
#                 print(-1)
#         else:
#             if(month == 2):
#                 if (day>0 and day<=md[1]):
#                     print("%.4d/%.2d/%.2d" %(year, month, day))
#                 else:
#                     print(-1)
#             else:
#                 if(day>0 and day <31):
#                     print("%.4d/%.2d/%.2d" %(year, month, day))
#                 else:
#                     print(-1)