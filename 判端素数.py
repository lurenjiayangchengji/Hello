a=int(input("请输入数字"))
flag=1
if a==1:
    flag=0
    print(f"{a}不是素数")
for i in range(2,a):
    if a%i==0 :
        print(f"{a}不是素数")
        flag=0
        break
if flag==1:
    print(f"{a}是素数")