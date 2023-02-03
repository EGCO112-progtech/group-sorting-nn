compile: main.c 
	 gcc  main.c -o selection

runSelection: selection
	  ./selection

run: selection
	 ./selection

clean: selection
	 rm selection

