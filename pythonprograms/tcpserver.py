import socket
s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
host='127.0.0.1'
port=12345
s.bind((host,port))
s.listen(5)
while True:
    ts,addr=s.accept()
    ts.send(b'HELLO')
    print(ts.recv(1024))
    ts.close()

