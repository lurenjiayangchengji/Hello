import random
answer=random.randint(1,100)
guess=0
count=0
print('数字在1-100哦--')
while guess != answer:
    guess=int(input('请输入数字'))
    count+=1
    if guess<answer:
        print('太小了')
    elif guess>answer:
        print('太大了')
    else:
        print(f'猜对啦，答案就是{guess}，共猜了{count}次')