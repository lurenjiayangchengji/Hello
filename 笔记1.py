a="Hello world"
print(a)
b=tuple(a)
print(b)
b=set(a)
print(b)
b=list(a)
print(b)
#bin()二进制
#oct（）八进制
#hex()十六
#int()
c=0x7
print(c)
A=(a,b,c)#a为tuple，元祖不能改且元祖只有一个元素时要a=（10，），不然是括号用
B=[a,b,c]#b为list，列表能改
C={a,b,c}