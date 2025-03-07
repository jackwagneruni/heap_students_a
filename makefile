game: address.o date.o student.o
	g++ -g address.o date.o student.o

main.o: address.h date.h student.h main.cpp
	g++ -g main.cpp

address.o: address.cpp address.h
	g++ -g address.cpp

date.o: date.h date.cpp
	g++ -g date.cpp

student.o: student.h student.cpp
	g++ -g student.h student.cpp

clean:
	rm *.o
	rm game

run: game
	./game

debug: game
	gdb game
