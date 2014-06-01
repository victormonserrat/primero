crucigrama.x: libMemoria.a ficheros.o crucigrama.o
	gcc -o crucigrama.x ficheros.o crucigrama.o libMemoria.a
	
ficheros.o: ficheros.c ficheros.h
	gcc -c ficheros.c
	
crucigrama.o: crucigrama.c ficheros.h
	gcc -c crucigrama.c
	
libMemoria.a: reservaMemoria.o liberaMemoria.o
	ar -rsv libMemoria.a reservaMemoria.o liberaMemoria.o
	
reservaMemoria.o: reservaMemoria.c memoria.h
	gcc -c reservaMemoria.c
	
liberaMemoria.o: liberaMemoria.c memoria.h
	gcc -c liberaMemoria.c
	
clean:
	rm *.o libMemoria.a crucigrama.x
