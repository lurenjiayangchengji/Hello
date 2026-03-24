for i in range(1,11):
    for j in range(1,i+1):
        print(f'{i}*{j}={i*j:2d}',end='  ')
    print("")
i=1
j=1
while i<=10:
    while j<=i:
        print(f'{i}*{j}={i*j:2d}',end='  ')
        j+=1
    j=0
    print("")
    i+=1