CC = gcc

LIBJKS = libantispam-example.so
OBJJKS = antispam.o

FLAGS = -O2 -fPIC -w

all: jks

jks: $(LIBJKS)

$(LIBJKS): $(OBJJKS)
	$(CC) -shared -Wl -fPIC -o $@ $(OBJJKS) -lstdc++
	
%.o : %.cpp
	$(CC) $(INCDIR) $(FLAGS) -c $< -o $@

clean:
	-rm -f $(LIBJKS) $(OBJJKS) *.elf *.gdb *.o *.a *.so

