#g++ -I/usr/local/lib/include/symengine CPP_Ritz.cpp -o cppritz
#g++ -lsymengine CPP_Ritz.cpp -o cppritz
#g++ -L/usr/local/lib  -lsymengine CPP_Ritz.cpp -o cppritz
compile_flags=`cmake --find-package -DNAME=SymEngine -DCOMPILER_ID=GNU -DLANGUAGE=CXX -DMODE=COMPILE`
link_flags=`cmake --find-package -DNAME=SymEngine -DCOMPILER_ID=GNU -DLANGUAGE=CXX -DMODE=LINK`

g++ $compile_flags CPP_Ritz.cpp $link_flags -std=c++11
