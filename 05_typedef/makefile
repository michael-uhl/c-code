bin/main: obj/kunde.o obj/main.o
	gcc -o bin/main obj/kunde.o obj/main.o

obj/main.o: obj/kunde.o
	gcc main.c -c -o ./obj/main.o

obj/kunde.o:
	gcc kunde.c -c -o ./obj/kunde.o

clean:
	rm ./obj/kunde.o
	rm ./obj/main.o
	rm ./bin/main




