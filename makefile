#arquivo de construção
#alvo: prerequisitos
#<TAB>COMANDOS GCC (RECEITA)

all: plotrlc

plotrlc: main.o rlc.o
	gcc -o plotrlc main.o rlc.o -lm

main.o: main.c rlc.h
	gcc -o main.o main.c -c -W -Wall -lm

rlc.o: rlc.c rlc.h
	gcc -c -w -Wall -lm -o rlc.o rlc.c 

clean:
	rm -rf *.o *.png *.dat *.log *~plotrlc