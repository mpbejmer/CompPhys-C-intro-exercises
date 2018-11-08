CC = gcc # c- compiler
CFLAGS = # compiler flags such as -O3 -W
LIBS = # libraries such as -lm -lgsl -lgslcblas
OBJECTS = fun_scalar_prod.o exercis2_2.o # object files to produce
PROGRAM = exercise2_2 # name of executable to be built
# build .o files
%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
# compile program
all : $(PROGRAM)
$(PROGRAM): $(OBJECTS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

clean:
		rm -f *.o
		touch *.c
