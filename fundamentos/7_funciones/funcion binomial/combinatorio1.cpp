


/*ejemplo binomial =https://www.youtube.com/watch?v=XAfU0TfzRzY */

#include <iostream>
using namespace std;

int main(){
  int n, k, m;
  int n_fact = 1, k_fact = 1, m_fact = 1;

  cout << "Entra n y k ";
  cin >> n >> k;

  m = n - k;

  while( n > 1) {
    n_fact = n_fact * n;
    n = n - 1;
  } // n_fact calculando...

while( k > 1) {
    k_fact = k_fact * k;
    k = k - 1;
  } // k_fact calculando...
while( m > 1) {
    m_fact = m_fact * m;
    m = m - 1;
  } // n_fact calculando...
    cout <<  n_fact / (k_fact * m_fact) << endl;
}