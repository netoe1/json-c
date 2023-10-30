attribute.o: ./include/attribute.h ./src/attribute.c
	gcc -c ./src/attribute.c -o ./obj/attribute.o

main.o: ./obj/attribute.o
	gcc -o ./obj/main.o ./src/main.c ./obj/attribute.o
run:
	./obj/main.o

all:
	make attribute.o main.o
clean:
	rm -rf ./obj/*.o