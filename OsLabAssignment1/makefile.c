a: client.o server.o gcc
   client.o server.o client.o : client.o server.h gcc
   - c client.c server.o : server.o server.h gcc
   - c server.c	
