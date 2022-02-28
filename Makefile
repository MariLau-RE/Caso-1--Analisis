#Maria Laura Retana Elizondo, 2019390522, Analisis de algoritmos
#Este es el make file para compilar el caso1

all: Caso1

Caso1: Caso 1.o
	g++ -o Caso 1.o 

clean:
	rm -f Caso1 *.o