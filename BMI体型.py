a=float(input("输入身高"))
b=float(input("输入体重"))
BMI=b/a**2
if BMI<18.5:
    print("偏瘦")
elif BMI>=24:
    print("偏重")
else:
    print("正常")