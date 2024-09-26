CC = g++
CFLAGS = -g -Wall -Wextra
TARGET = SortingAlgos

all: $(TARGET)

$(TARGET): selectionSort.o mergeSort.o quickSort.o main.o
	$(CC) $(CFLAGS) -o $(TARGET) selectionSort.o mergeSort.o quickSort.o main.o

selectionSort.o: selectionSort.cpp selectionSort.h
	$(CC) $(CFLAGS) -c selectionSort.cpp

mergeSort.o: mergeSort.cpp mergeSort.h
	$(CC) $(CFLAGS) -c mergeSort.cpp

quickSort.o: quickSort.cpp quickSort.h
	$(CC) $(CFLAGS) -c quickSort.cpp

main.o: main.cpp selectionSort.h mergeSort.h quickSort.h
	$(CC) $(CFLAGS) -c main.cpp

#Clean up files
clean:
	$(RM) $(TARGET) *.o *~