#include <iostream>
using namespace std;

int solution(int length);
int dy[50];
int main() {
    ios_base::sync_with_stdio(false);
    
    int length;
    cin >> length;
    cout << solution(length);
    

}

int solution(int length) {
    
    if(length == 2) return 2;
    else if (length == 3) return 3;
    else {
        return solution(length-1) + solution(length-2);
    }

}