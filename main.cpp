#include<iostream>
#include "./ab/ab.cpp"
#include "./mushfiq/mushfiq.cpp"
#include "./azwad/azwad.cpp"
#include "./Rk/Rk.cpp"
#include "./Rakib/rakib.cpp"

using namespace std;

int main() {
    string engineers[] = {AB::show(), mushfiq::show(), RAKIB::show(), azwad::show(), RK::show()};

    for(auto people : engineers){
        cout << people << endl;
    }
    
    return 0;
}