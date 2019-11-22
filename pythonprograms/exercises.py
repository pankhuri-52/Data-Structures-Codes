

#Exercise No.1
def rotate_left3(nums):
    l=len(nums)
    k=[]
    for i in range(1,l):
        k.append(nums[i])
    k.append(nums[0])
    return k

#Exercise No. 2
'''Given 2 int arrays, a and b, each length 3, return a new array of length
2 containing their middle element'''
def middle_way(a,b):
    k=[]
    l=len(a)
    half=int(l/2)
    k.append(a[half])
    l1=len(b)
    half1=int(l1/2)
    k.append(b[half1])
    return k

#Exercise No. 3
'''Given 2 arrays of ints, a and b,return True if they have the same first
element or they have the same last element'''
def common_end(a,b):
    first=a[0]
    first1=b[0]
    l=len(a)
    l1=len(b)
    end=a[l-1]
    end1=b[l1-1]
    if first==first1 or end==end1:
        return True
    else:
        return False
    
#Exercise No. 4
'''Given an array of ints, return True if the sequence of numbers 1,2,3
appears in the array somewhere.'''
def array123(nums):
    flag=0
    for i in range(len(nums)-2):
        if nums[i]==1 and nums[i+1]==2 and nums[i+2]==3:
            flag=1
    if flag==1:
        return True
    else:
        return False
    
#Exercise No. 5
'''Password Generator Code'''
p="ABCDEFGHIJKLMNOPQRSUVWXYZabcdefghijklmnopqrstuvwxyz~!@#$%^&*"
p=list(p)
import numpy 
k=numpy.random.randint(0,61,6)
password=p[k[0]]+p[k[1]]+p[k[2]]+p[k[3]]+p[k[4]]+p[k[5]]
print(password)