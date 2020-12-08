
CC=arm-linux-gnueabihf-gcc
CFLAGS=-O -g -lreadline

objs = prudbg.o cmdinput.o cmd.o printhelp.o da.o uio.o

prudebug : ${objs}
	${CC} ${objs} -o prudebug ${CFLAGS}

clean:
	rm -f ${objs} prudebug

