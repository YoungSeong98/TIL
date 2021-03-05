# 다음의 텍스트를 그대로 출력하라
# #++++
# +#+++
# ++#++
# +++#+
# ++++#

for row in range (5):
    for column in range (5):
        if row == column:
            print("#", end="")
        else:
            print("+", end="")
    print()
