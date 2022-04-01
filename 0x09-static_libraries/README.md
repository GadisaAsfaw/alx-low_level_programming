static Libraries

1-Create the static library libmy.a containing all the functions listed 
      gcc -c *.c (create object files)
      ar rc libmy.a *.o (create static library)
      
2-Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
