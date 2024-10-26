#include <iostream>
using namespace std;
int main() {
int a ;
cout << "Enter a number:" ;
cin >> a;
for(int i=0;i<a;i++){
    for(int k=0;k < a-i;k++){
        cout << " " ;  
    }
    for(int l=0;l < i+1;l++){
        cout << "*" ;  
    }
    cout << "  ";
    for(int j=0;j<i+1;j++){
        cout << "*" ;  
    }
    cout << "\n" ; 
}
return 0;
}
