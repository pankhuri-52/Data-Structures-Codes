# -*- coding: utf-8 -*-
"""
Created on Sun Jun  2 14:37:44 2019

@author: Pankhuri Trikha
"""

def myfun():
    print("Welcome to the world of python")
    print("hii")
    
def add(a,b):
    print(a+b)
    
def myfun1(a,b):
    return a+b

'''Object Oriented Programming'''
class A:
    x=5
    def myfunA(self):
        print("I am a function of class A")
        print(self.x+20)
        self.c=20
        
    def myfun4(my,a,b):
        print(my.c)
        print(a+b)
        return a-b
    
class B(A):#inheritance
    def yourfun(self):
        print("I am a function of class B")