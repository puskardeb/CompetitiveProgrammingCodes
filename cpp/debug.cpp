#include <iostream>

using namespace std;

int main(){
    
#ifdef DEBUG
    cout << "Hallelujah" << endl;
#endif
#ifdef TEST
    cout << "Debugging" << endl;
#endif
    cout << "Always" << endl;
    return 0; 
}