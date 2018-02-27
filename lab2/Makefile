SHLIB = liblab2shared.so
STLIB = liblab2static.a

CFLAGS = -fpic

OBJS = lab2.o

all: $(SHLIB) $(STLIB)

shared: $(SHLIB)

static: $(STLIB)

$(SHLIB): $(OBJS)
	gcc -shared $(OBJS) -o $(SHLIB)

$(STLIB): $(OBJS)
	ar rcs $(STLIB) $(OBJS)

lab2.o: lab2.c lab2.h
	gcc -c $(CFLAGS) lab2.c


.PHONY: clean

clean:
	rm -f $(OBJS) $(SHLIB) $(STLIB)
