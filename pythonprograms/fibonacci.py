# -*- coding: utf-8 -*-
"""
Created on Sun Jun  2 12:23:57 2019

@author: Pankhuri Trikha
"""
#THis is simple array
f=[0,1]
a=f[0]
b=f[1]
n=int(input("enter the number till you want fibonacci"))
for i in range(2,n):
   c=a+b
   a=b
   b=c
   f.append(c)
print(f)
    
    
 #fibonacci using lists
#list=[0,1]
#l=int(input("Enter the length"))
#for i in range(l-2):
#     result=list[-1]+list[-2]
#     list.append(result)
#print(list)