# unit = (12 * 5) / 360

while True:
    h, m = map(int, input().split(':'))
    if h == 0 and m == 0:
        break

    h_angle = (h * 5 * 6) + (m * 2 / 4)
    m_angle = m * 6

    h_angle, m_angle = map(lambda x: x - 360 if x > 360 else x, (h_angle, m_angle))
    if h_angle > m_angle:
        result = h_angle - m_angle
    else:
        result = m_angle - h_angle
    if result > 180:
        result = 360 - result
    print('{:.3f}'.format(result))
