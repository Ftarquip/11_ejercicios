//2
#include <iostream>
using namespace std;
int main(){
    int n, max, A[20], aux;
    cout << "Ingrese la cantidad de Numeros a comparar (max 20)";
    cin >> n;
    for (int i=0; i < n; i++){
        cout << "Ingrese el numero: ";
        cin >> A[i];
    }

    for (int i=0;i<(n/2);i++){
        aux =A[i];
        A[i]= A[n- i-1];
        A[n-i-1] =aux;
    }
    cout << endl;
    for (int i = 0; i<n;i++){
        cout << A[i] << endl;
    }
    return 0;
}
