#By Jack Tsai

import random


def ran_keep(S2):
    b=S2
    S2=random.randint(1,S2)
    if S2 == 1:
        return 1
    elif S2 == a:
        return 1
    else:
        return 1+ran_keep(S2)

S=int(input(""))
throw=1
avg=0
if S==1:
    avg=throw
else:
    for j in range (10):
        throw=1
        for i in range (10000):
            S1=random.randint(1,S)
            if S1==1:
                throw = throw+1
            else:
                S2=random.randint(1,S1)
                if S2 == 1:
                    throw = throw+2
                else:
                    a=S2
                    S2=random.randint(1,S2)
                    if S2==1:
                        throw = throw+3
                    elif S2==a:
                        throw = throw+3
                    else:
                        throw = throw + 3+ ran_keep(S2)
        average=[round(throw/10000)]
    avg=min(average)
print(avg)
