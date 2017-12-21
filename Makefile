CC=g++ -g -Wall

CFLAGS = `pkg-config --cflags --libs  thrift`


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
	$(CC) -o $@ $(OBJS) Serv_server.skeleton.o  $(CFLAGS)

client: $(OBJS)  Client.o
	$(CC) -o $@  $(OBJS) Client.o  $(CFLAGS)


clean:
	rm -f ./*.o client server




