* To compile one file:
	g++ -o main_exec main.cpp

* To compile and link multiple files:
	g++ -c lib.cpp
	g++ -c main.cpp
	g++ main.o lib.o -o main_exec

* To create a section of a makefile:
	<target_name>: <dependency_list>
		<commands>

* makefile example: (here's a tutorial: http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)
	#This is a comment line
	
	lib: main.o lib.o
		g++ -o lib main.o lib.o

	main.o: main.cpp frac.h
		g++ -c main.cpp

	lib.o: lib.cpp lib.h
		g++ -c lib.cpp

	clean: 
		rm *.o lib	

