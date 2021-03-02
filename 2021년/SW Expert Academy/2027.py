for row in range (5):
    for column in range (5):
        if row == column:
            print("#", end="")
        else:
            print("+", end="")
    print()
