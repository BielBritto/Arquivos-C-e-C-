import random

x = pow(10,4)
i = 0
random.randint(0,1)


with open("entrada.txt","w") as file:
    file.write(f'{x}\n')


with open("entrada.txt","a") as file:
    while(i<x):
        file.write(f'{random.randint(1,pow(10,5))} {random.randint(0,1)}\n')
        i+= 1

        
