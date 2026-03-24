for a in range(2,101):
    flag=1
    for i in range(2,a):
         if a%i==0 :
            flag=0
            break
    if flag == 1:
        for b in range(2, 101):
            FLAG = 1
            for i in range(2, b):
                if b % i == 0:
                    FLAG = 0
                    break
            if FLAG == 1:
                if b-a==2:
                    print(f"({a},{b})")
