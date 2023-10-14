How to Run:

Create Object Files:
>g++ -c  .\SymbolO.cpp -o O.o                               
>g++ -c  .\Board.cpp -o b.o                                 
>g++ -c  .\Game.cpp -o g.o                                  
>g++ -c  .\Player.cpp -o Pl.o   

Link your client code(main.cpp) with object files 
>g++ .\x.o .\O.o .\b.o .\Pl.o .\g.o main.cpp -o main

Run the Final Exe
>.\main.exe   