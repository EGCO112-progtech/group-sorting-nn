compile: main.c 
	 gcc  main.c -o sort

runSelection: selection
	  ./selection

run: sort
	 ./sort




clean: selection
	 rm selection

