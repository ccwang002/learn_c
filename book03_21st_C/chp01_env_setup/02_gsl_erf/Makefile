P=gsl_erf
OBJECTS=
CFLAGS=-Wall -g -std=gnu11 `pkg-config --cflags gsl`
LDLIBS=`pkg-config --libs gsl`
CC=clang

$(P): $(P:=.o)

.PHONY: clean
clean:
	rm -f $(P) $(P:=.o)
	rm -rf $(P:=.dSYM)
