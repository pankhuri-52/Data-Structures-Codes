# -*- coding: utf-8 -*-
"""
Created on Sun Jun 16 18:52:44 2019

@author: Pankhuri Trikha
"""

def myfunc():
    print("Hii, this is my world")
    
def rotate_left3(list,n):
    return list[n:] + list[:n]

#a general solution to this problem
    
def rotate_left(nums):
    l=len(nums)
    k=[]
    for i in range(1,l):
        k.append(nums[i])
    k.append(nums[0])
    return k

#given two arrays, a and b, each length 3, return a new array of length 2 containing their middle elements
def middle_way(a,b):
    k=[]
    l=len(a)
    half=int(l/2)
    k.append(a[half])
    l1=len(b)
    half1=int(l1/2)
    k.append(b[half1])
    return k

#given two arrays of int,a and b, return true if they have the same first or last element else false
def common_end(a,b):
    l=len(a)
    l1=len(b)
    if a[0]==b[0]:
        return True
    elif a[l-1]==b[l1-1]:
        return True
    else:
        return False
    
#given an array of ints, return True if the sequence of numbers 1,2,3 appears in the array somewhere.
def array123(nums):
    flag=0
    for i in range(len(nums)-2):
        if nums[i]==1 and nums[i+1]==2 and nums[i+2]==3:
            flag=1
    if flag==1:
        return True
    else:
        return False
    
#given a non-empty string like "Code" return a string with the following pattern
#string_splosion('Code')='CCoCodCode'
def string_splosion(string):
    str1=""
    for i in range(0,len(string)+1):
        str=string[0:i]
        str1=str1+str
    return str1

#password_generator----it should contain lowercase, uppercase, special characters and numericals
p="ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyz"
p=list(p)
import numpy
k=numpy.random.randint(0,69,6)
password=p[k[0]]+p[k[1]]+p[k[2]]+p[k[3]]+p[k[4]]+p[k[5]]
print(password)

#the hangman game
def hangman(string,n):
    l=list(string)
    if n in l:
        return True
    else:
        return False
    
#the complete hangman game
def game(string):
    l=list(string)
    k=[]
    for i in range(0,2*len(l)):
        x=input('Enter the character')
        if x in l:
            k.append(x)
            
#solution of the hangman game
print("GAME- THE HANGMAN WELCOMES YOU!!")
print("The word capital of the country with length 10")
word="WASHINGTON"
word=list(word)
gword="_"*len(word)
gword=list(gword)
count=0
ip=input("Enter the guessed letter ")
while True:
    if ip.upper() in word:
        index=word.index(ip.upper())
        gword[index]=ip.upper()
        print(''.join(gword))
        word[index]="_"
    if '_' not in gword:
        print("You won the game")
        break
    else:
        ip=input("Enter the guessed letter ")
        count=count+1
        print(str(int(2.5*len(word))-count)+" attempts left")
        if count>2.5*len(word):
            
            
            print("You lost the match")
            

        
        
        

        


















