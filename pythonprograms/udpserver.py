'''UDP server form a server bind address sending data'''

import socket
s=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
host='127.0.0.1'
port=12346
s.bind((host,port))
msg,addr=s.recvfrom(2048)
s.sendto(b"Hii CLient",addr)
print(msg.decode())