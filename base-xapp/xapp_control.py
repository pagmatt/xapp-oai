import socket


# open control socket
def open_control_socket(port: int):

    print('Waiting for xApp connection on port ' + str(port))

    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    # host = socket.gethostname()
    # bind to INADDR_ANY
    server.bind(('', port))

    server.listen(5)

    control_sck, client_addr = server.accept()
    print('xApp connected: ' + client_addr[0] + ':' + str(client_addr[1]))

    return control_sck


# send through socket
def send_socket(socket, msg: str):
    bytes_num = socket.send(msg)
    print('Socket sent ' + str(bytes_num) + ' bytes')


# receive data from socker
def receive_from_socket(socket) -> str:

    print("----------receive from socket called")

    data = socket.recv(8192)

    if len(data) > 0:
        print("Received: ", str(data))
        return data
    else:
        print("received 0 data")
        return ''

