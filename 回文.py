s=input().replace(" ","")
if s==s[::-1]:
    print("Yes")
    s=s.lower()
    print(len(s))
    for c in s[:len(s)//2]:
        a=s.count(c)
        print(f'{c}:{a}')
else:
    print("No")
print(len(s))