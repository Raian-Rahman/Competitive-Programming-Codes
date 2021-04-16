t = int(input())
T = t
while(t!=0):
    t-=1
    n = int(input())
    s = input()
    #print(n,s)
    cur = 1
    f=0

    while 1:
        if(len(s)==3):
            c1=0
            c2=0
            for i in range(0,3):
                if s[i]=='A':
                    c1+=1
                else:
                    c2+=1
            if c1!=0 and c2!=0:
        
                f=1
                break
            else:
                break
        if cur==len(s):
            break

        c1=0
        c2=0
        for i in range(cur-1,min(cur+1,len(s))):
            if s[i]=='A':
                c1+=1
            else:
                c2+=1
        if c1!=0 and c2!=0:
            #print("dhukse")
            if c1>c2:
                ch = 'A'
            else:
                ch = 'B'
            s = s[:cur-1] + ch + s[cur+2:]
        cur+=1
        #print(s)
    if f==1:
        print("Case #" + str(T-t) + ": " + 'Y')
    else:
        print("Case #" + str(T-t) + ": " + 'N')