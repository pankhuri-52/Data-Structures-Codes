# -*- coding: utf-8 -*-
'''
Created on Sat Jun  1 22:47:51 2019

@author: Pankhuri Trikha
'''
#single line comment

'''
x=input('Enter the first number')
y=input('Enter the second number')
z=int(x)+int(y)
print(z)
'''

weight=int(input('Enter the weight of fuel'))
height=int(input('Enter the height of fuel'))
height=height/100;
bmi=weight/(height*height)
print(bmi)
if bmi<25:
    print('You do hard work,eat well and sleep well, that life')
    print('get a job at sweet shop')
elif bmi>25 and bmi<30:
    print('you are fit seems you do yoga')
    print('seems you dont like outside food like lazy programmers')
else:
    print('you are overweight')
    print('leave computer engineering, join mechanical or construction')
print('hii')