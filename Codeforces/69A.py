n = int(input())
sum_x = sum_y = sum_z = 0

for i in range(n):
    nums = [int(x) for x in input().strip().split()]
    sum_x = sum_x + nums[0]
    sum_y = sum_y + nums[1]
    sum_z = sum_z + nums[2]

print("YES" if sum_x == sum_y == sum_z == 0 else "NO")
