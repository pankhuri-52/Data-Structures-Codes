"""
TCP server asscoiating an ip address with the server 
socket accepting the client request and printing the message
"""
#server side

import socket
s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)

host='127.0.0.1'
port=12345

#binding the address with the socket
s.bind((host,port))

#now server has to listen to multiple clients
s.listen(5)

#now the server needs to accept the request of client and return temporary
#socket and address
while True:
    ts,addr=s.accept()
    ts.send("Hello from server",addr)
    ts.close()
