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


   #include <iostream>

using namespace std;

int main() {
    // Write C++ code here
   int n = 5;

    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= i - 1; j++) {
            cout << "  ";
        }

        for (int k = i; k <= n; k++) {
            cout << k << " ";
        }

        for (int h = n - 1; h >= i; h--) {
            cout << h << " ";
        }

        cout << endl;
    }
    return 0;
}  

--Q6.

   #include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        } 
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << "? ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}  

--Q7

 #include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int cols = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {

            if (
                j == 1 ||                          
                (i == 1) ||                        
                (i == 3) ||                       
                (j == cols && i == 2)             
            ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
   

