How to Run:

Create Object Files:
>g++ -c  .\SymbolX.cpp -o X.o    
>g++ -c  .\SymbolO.cpp -o O.o                               
>g++ -c  .\Board.cpp -o B.o                                 
>g++ -c  .\Game.cpp -o G.o                                  
>g++ -c  .\Player.cpp -o Pl.o   

Link your client code(main.cpp) with object files 
>g++ X.o O.o B.o G.o Pl.o  main.cpp -o main

Run the Final Exe
>.\main.exe   