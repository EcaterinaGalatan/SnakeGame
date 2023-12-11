all: SnakeGame

SnakeGame: main.o libpoint.a libapple.a libpainter.a libboard.a libdirection.a libsnake.a
	g++ -o SnakeGame main.o -L. -lpoint -lapple -lpainter -lboard -ldirection -lsnake

main.o: main.cpp
	g++ -c main.cpp -o main.o

libpoint.a: point.cpp point.h
	g++ -c point.cpp -o point.o
	ar rcs libpoint.a point.o

libapple.a: apple.cpp apple.h point.h
	g++ -c apple.cpp -o apple.o
	ar rcs libapple.a apple.o

libpainter.a: painter.cpp painter.h point.h
	g++ -std=c++11 -fPIC -shared -o libpainter.so painter.cpp

libboard.a: board.cpp board.h
	g++ -std=c++11 -fPIC -shared -o libboard.so board.cpp

libdirection.a: direction.cpp direction.h
	g++ -std=c++11 -fPIC -shared -o libdirection.so direction.cpp

libsnake.a: snake.cpp snake.h point.h apple.h
	g++ -c snake.cpp -o snake.o
	ar rcs libsnake.a snake.o

clean:
	rm -f *.o *.a SnakeGame
