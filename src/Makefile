main: gui.o tokenizer.o history.o
	gcc -o run gui.o tokenizer.o 

gui.o: gui.c
	gcc -c gui.c

tokenizer.o: tokenizer.c tokenizer.h
	gcc -c tokenizer.c

history.o: history.c history.h
	gcc -c history.c 


clean:
	rm -f *.o *~ *#

