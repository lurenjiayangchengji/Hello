#1基本
def add(a,b):
    return a/b
a=1
b=2
c=add(a,b)
print(c)
def say_hello():
    print("hello world")
say_hello()
#2关键
d=add(b=2,a=1)
print(d)
#3默认参数
def power(x,y=2):
    return x**y
print(power(2))
print(power(2,3))
#4可变
def num(*num):
    return print(num)
num(1,2,3,4)
def nums(**nums):
    print(nums)
nums(a=1,b=2)
#6混和
def func(a,*num,b=10,**nums):
    print(a,b,num,nums)
func(1,2,3,b=2,c=30,d=40)
#7特殊
def f(a,/,*,b,c,d):
    print(a,b,c,d)
f(1,b=2,c=3,d=4)
#8返回值(无return回None，可回多个值（但本质是元组））
def get():
    return 1,2
x,y=get()
print(x,y)
z=get()
print(z)


