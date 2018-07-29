matrix = [
    [int(x) for x in input().strip().split()] for _ in range(5)
]


def get_pos_1():
    for i in range(5):
        for j in range(5):
            if matrix[i][j] == 1:
                return [i, j]


pos_x, pos_y = get_pos_1()
moves = 0

while pos_x != 2 or pos_y != 2:
    if pos_x > 2:
        pos_x -= 1
    elif pos_x < 2:
        pos_x += 1
    elif pos_y > 2:
        pos_y -= 1
    elif pos_y < 2:
        pos_y += 1
    else:
        continue
    moves += 1

print(moves)
