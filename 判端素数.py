def a(a):
    flag=1
    if a==1:
        flag=0
    for i in range(2,a):
        if a%i==0 :
            flag=0
            break
    if flag==1:
        print(f"{a}是素数")
    else:
        print(f"{a}不是素数")

s=int(input())
a(s)