#include <iostream>
using namespace std;

int main() {

  int primeiro_numero, segundo_numero, soma;
    
  cout << "Digite dois números: ";
  cin >> primeiro_numero >> segundo_numero;

  soma = primeiro_numero + segundo_numero;

  cout << primeiro_numero << " + " <<  segundo_numero << " = " << soma;     

  return 0;
}