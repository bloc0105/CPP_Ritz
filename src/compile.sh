#g++ -I/usr/local/lib/include/symengine CPP_Ritz.cpp -o cppritz
#g++ -lsymengine CPP_Ritz.cpp -o cppritz
g++ -L/usr/local/lib  -lsymengine CPP_Ritz.cpp -o cppritz
