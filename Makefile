CC=g++ -g -Wall

CFLAGS = `pkg-config --cflags thrift`

LFLAGS = `pkg-config --libs thrift`

LDEXEFLAGS=

OBJS = Serv.o \
        student_types.o \
        student_constants.o 

all:client server


Serv.o: Serv.cpp
	$(CC) $(CFLAGS) -c $^ -o $@
student_types.o: student_types.cpp
	$(CC) $(CFLAGS) -c $^ -o $@
student_constants.o: student_constants.cpp
	$(CC) $(CFLAGS) -c $^ -o $@
Serv_server.skeleton.o: Serv_server.skeleton.cpp
	$(CC) $(CFLAGS) -c $^ -o $@
Client.o: Client.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

server: $(OBJS) Serv_server.skeleton.o
	$(CC) $(LFLAGS) $(OBJS) Serv_server.skeleton.o  $(LDEXEFLAGS) -o $@

client: $(OBJS)  Client.o
	$(CC) $(LFLAGS) $(OBJS)  Client.o  $(LDEXEFLAGS) -o $@


clean:
	rm -f ./*.o client server




