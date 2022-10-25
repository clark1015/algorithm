#include <iostream>
using namespace std;

int network(int length) ;

int dy[100];

int main(){
    
    for(int i=0; i<100; i++) {
        dy[i] = 0;
    }
    dy[1]=1;
    dy[2]=2;
    int n;
    cin >> n;
    cout << network(n);
}

int network(int length) {
    if(dy[length] != 0) {
        return dy[length];
    }
    else {
        return network(length-1) + network(length-2);
    }

}