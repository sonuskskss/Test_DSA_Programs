// Unordered_map in stl
// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    
    unordered_map<int, int> um;
    um[1] = 111;
    um[5] = 555;
    um[2] = 222;
    um[66] = 666;
    um[0] = 0;
    for(auto i : um) cout << i.first << " " << i.second << endl;
    
    return 0;
}
