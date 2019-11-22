#Assertions
#def myfun(htincm):
#    assert (htincm>0),"Please enter a valid height"
#    return int(htincm)/100

#Handling Predefined Exceptions
#try:
#    f=open('object.py','w')
#    f.write("Trying to write data in a file")
#except IOError:
#    print("Trying to write in a file with read permission")
#else:
#    print("You are successful")
    
    
#Use of finally keyword
#try:
#    f=open('object.py','w')             
#    f.write('I am trying to write data to the file')
#    print('Hello World')
#finally:  
#    print('Use of finally keyword')
    
#Nested try
try:
    f=open('myfile.txt','w')
    try:
        f.write("Writing in myfile.txt")
    finally:
        print("Done with writing and closing")
        f.close()
except:
    print("We got error");


