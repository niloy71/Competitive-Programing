def squrert(n):
    x = n;
    y = (x+1)//2

    while(y < x):
        x = y;
        y = (x + n//x)//2

    return x

t = int(input())

while(t > 0):
    input()
    n = int(input())
    print(squrert(n))
    t -= 1
    if(t > 0):
        print()

