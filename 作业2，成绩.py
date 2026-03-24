a=int(input("请输入数字"))
if a>=90 and a<=100:
    print("优秀")
elif a>=80 and a<=90:
    print("良好")
elif a>=70 and a<=80:
    print("中等")
elif a>=60 and a<=70:
    print("及格")
elif a>=0 and a<60:
    print("不及格")
else:
    print("数据错误")