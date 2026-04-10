-- Q1.

#include <iostream>
using namespace std;
int main() {
   int n = 5;
   int num = 4;
for (int i = 1 ; i <= n; i++){
   for (int j = 1 ; j <= i ; j++){
       cout << num << j << " ";
   }
   cout << endl;
}
    return 0;
}

-- Q2.

#include <iostream>
using namespace std;
int main() {
   int n = 4;
   int num = 11;
for (int i = 1 ; i <= n; i++){
   for (int j = 1 ; j <= i ; j++){
       cout << num << " ";
       num++;
   }
   cout << endl;
}
    return 0;
}

-- Q3.
#include <iostream>
using namespace std;
int main() {
   int n = 5;

for (int i = n ; i >=1; i--){
   for (int j = 1 ; j < i ; j++){
      cout << " ";
   }
   for ( int k = i ; k <= n; k++){
       cout << k ;
   }
   cout << endl;
}
    return 0;
}

--Q4.

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {

        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << (j % 2); 
        }
        cout << endl;
    }

    return 0;
}

--Q5.

