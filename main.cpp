#include<iostream>
#include "./ab/ab.cpp"

using namespace std;

int main() {
    string engineers[] = {AB::show()};

    for(auto people : engineers){
        cout << people << endl;
    }
    
    return 0;
}