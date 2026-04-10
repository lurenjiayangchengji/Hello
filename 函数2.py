#嵌套函数
def outer():
    print("outer")
    def inner():
        print("inner")
    inner()
outer()
##nonlocal改外部函数的局部变量
def outer():
    x=10
    print(f"outer{x}")
    def inner():
        nonlocal x
        x=100
        print(f"inner{x}")
    inner()
    print(x)
outer()

#作用域
x=100
def fun():
    x=10
    print(f'{x}')
fun()
print(f'{x}')
##global改全局变量
def fun():
    global x
    x=10
    print(f'{x}')
fun()
print(f'{x}')
id(x)
#闭包
#匿名函数