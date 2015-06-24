CC	:= gcc -D NDEBUG -Wall -g -lpthread

CPP	:= g++ -D NDEBUG=3 -Wall -g -lpthread

all:
	$($(comtype)) $(CFLAGS) -o ${filename} ${file} `pkg-config opencv --cflags` `pkg-config opencv --libs` 
clean:
	rm -f  *.o 1  
