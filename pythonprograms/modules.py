# -*- coding: utf-8 -*-
"""
Created on Sun Jun  9 11:05:14 2019

@author: Pankhuri Trikha
"""

import numpy
x=numpy.array([4,5,6,7,8])
print(x)

from numpy import array
y=array([1,2,3,4,5])
print(y)

from numpy.linalg import *
z=array([4,5,6,7,8,1,2])
print(z)

from numpy.linalg import *
a=array([[4,5],[6,-3]])
b=array([23,3])
x=solve(a,b)
print(x)

from numpy.linalg import *
k=array([[4,-6],[3,7]])
l=array([[18],[25]])
m=solve(k,l)
print(m)

#pandas
#Data visualisation
#datetime

