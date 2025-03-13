m=int(input('Enter the M value(start value):'))
n=int(input('Enter the N value(end value):'))
p=int(input('Enter the P value(increment value):'))


for i in range(m,n+1,p):
    print(i, end=' ')
    i += 2