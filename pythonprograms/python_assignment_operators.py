''' Add and '''
c+=a
'''Subtract and'''
c-=a
'''Multiply and'''
c*=a

'''Python Logical Operators'''
1 and 0
Out[1]: 0

1 and 1
Out[2]: 1

0 and 0
Out[3]: 0

1 or 0
Out[4]: 1

1 or 1
Out[5]: 1

0 or 1
Out[6]: 1

not(1)
Out[7]: False

not(1 and 0)
Out[8]: True

not(1 and 1)
Out[9]: False

'''Python membership Operators'''
if '$' in 'g$uest':
    print('$ is present')
else:
    print('Not Present')
    
'''Conversions in Python'''
x=2.879
print(int(x))
y=5
print(float(y))
h=7
complex(h)

'''Python Mathematical Functions'''
import math

math.ceil(2.5)
Out[16]: 3

math.floor(2.5)
Out[17]: 2

math.log(10)
Out[18]: 2.302585092994046

'''Parsing tqo lists simultaneously'''
x=['John','Raj','Ramesh','Sohan','Elizabeth']
age=[32,45,43,26,32]
for i in range(len(x)):
    print("The age of %s is %d"%(x[i],age[i]))
    
'''Set'''    
s={'hii',2,3,4,5.67,8,9}

type(s)
Out[21]: set

s.add(45)

s
Out[23]: {2, 3, 4, 45, 5.67, 8, 9, 'hii'}

v={4,5,6,7,8,9}

z=s.intersection(v)

z
Out[26]: {4, 8, 9}

j=s.union(v)

j
Out[28]: {2, 3, 4, 45, 5, 5.67, 6, 7, 8, 9, 'hii'}

g=((1,2,3,4))

type(g)
Out[30]: tuple

h=set((1,2,3,4))

type(h)
Out[32]: set

n=set([7,8,9,10])

n
Out[34]: {7, 8, 9, 10}