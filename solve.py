axis = [0]*105
n, m = map(int, input().split())
for _ in range(n):
    x, y = map(int, input().split())
    axis[x+1:y+1] = [1]*(y-x)
for i in range(1, m+1):
    if not axis[i]:
        print("No")
        exit(0)
print("YES")
