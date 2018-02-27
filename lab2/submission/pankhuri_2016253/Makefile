SHLIB = libmainshared.so
STLIB = libmainstatic.a

CFLAGS = -fpic

OBJS = main.o

all: $(SHLIB) $(STLIB)

shared: $(SHLIB)

static: $(STLIB)

$(SHLIB): $(OBJS)
	gcc -shared $(OBJS) -o $(SHLIB)

$(STLIB): $(OBJS)
	ar rcs $(STLIB) $(OBJS)

main.o: main.c main.h
	gcc -c $(CFLAGS) main.c


.PHONY: clean

clean:
	rm -f $(OBJS) $(SHLIB) $(STLIB)