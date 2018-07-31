light_state = [
    ['1', '1', '1'] for _ in range(3)
]

button_press = [
    [int(x) for x in input().strip().split()] for _ in range(3)
]


def toggle(state):
    return '1' if state == '0' else '0'


for i in range(3):
    for j in range(3):
        if button_press[i][j] % 2 == 1:
            light_state[i][j] = toggle(light_state[i][j])
            for x in range(i - 1, i + 2, 2):
                if 0 <= x <= 2:
                    light_state[x][j] = toggle(light_state[x][j])
            for y in range(j - 1, j + 2, 2):
                if 0 <= y <= 2:
                    light_state[i][y] = toggle(light_state[i][y])


for l in light_state:
    print(''.join(l))
