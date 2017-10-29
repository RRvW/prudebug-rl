
CC=arm-linux-gnueabihf-gcc
CFLAGS=-O -g -lreadline

objs = prudbg.o cmdinput.o cmd.o printhelp.o da.o uio.o

prudebug : ${objs}
	${CC} ${CFLAGS}  ${objs} -o prudebug

clean:
	rm -f ${objs} prudebug

