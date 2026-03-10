a=int(input("输入年份"))
if (a%4==0 and a%100!=0) or a%400==0:
    print("这是闰年")
else:
    print("这不是闰年")