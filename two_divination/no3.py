# TODO: Formulas: M=month, D=day, S=(M*2+D)%3

month, day = map(int, input().split())

if month < 1 or month > 12 or day < 1 or day > 31:
    print("Invalid input")

fortune = (month * 2 + day) % 3


def matching_numbers(fortune):
    switcher = {
        2: "大吉",
        1: "吉",
        0: "普通",
    }
    return switcher.get(fortune, "普通")


print(matching_numbers(fortune))
