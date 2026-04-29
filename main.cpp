#include<iostream>
<<<<<<< HEAD
#include "./ab/ab.cpp"

=======
#include "./mushfiq/mushfiq.cpp"
>>>>>>> 8012862 (fix merge error implement senior engineer:mushfiq)
using namespace std;

int main() {
    string engineers[] = {AB::show()};

    for(auto people : engineers){
        cout << people << endl;
    }
    
    return 0;
}