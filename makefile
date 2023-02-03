compile: main.c 
	 gcc  main.c -o sort
	 gcc  main.c -o selection

runSelection: selection
	  ./selection

run: sort
	 ./sort

run: selection
	 ./selection


clean: selection
	 rm selection


clean: sort
	 rm sort

