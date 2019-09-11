#This is a makefile for my first matrix library
#Author: Skye Mceowen
#Summer 2019

exec_matrix: main.o matrixLib.o
	g++ -o exec_matrix main.o matrixLib.o

main.o: main.cpp matrixLib.h
	g++ -c main.cpp

matrixLib.o: matrixLib.cpp matrixLib.h
	g++ -c matrixLib.cpp

clean:
	rm *.o exec_matrix
