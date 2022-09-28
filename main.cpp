#include <iostream>
#include <vector>

using namespace std;
int main()
{ unsigned int n=0;

  cout << "Numero de elementos : ";
  cin >> n;

  vector<int> v(n);
  //-- se leen datos al vector
  unsigned int c=0;
  for(auto &i:v)
  {
    cout << "Dato " << c << " = ";
    cin >> i;
    c++;
  }
  //-- imprimimos el vector de varias maneras
  cout << "\nRecorrido con indices\n";
  for(int i=0; i<v.size(); i++)
    cout << v[i] << "\n";

  cout << "\nRecorrido con iteradores  \n";
  for(auto i=begin(v); i!=end(v); i++)
    cout << *i << "\n";

  cout << "\nRecorrido con for con rango \n";
  for(const auto &iter:v)
    cout << iter << "\n";

  //--- imprimimos al reves
  cout << "\nSe imprime al reves\n";
  for(auto i=rbegin(v); i!= rend(v); i++)
    cout << *i << "\n";

  return 0;
}

