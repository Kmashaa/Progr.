lab7: main.cpp
	g++ main.cpp -o main.exe  
lab7test: main.cpp maintest.cpp
	g++ main.cpp maintest.cpp -o test -Dmain=_main
checkCov:
	gcov maintest.cpp main.cpp	
