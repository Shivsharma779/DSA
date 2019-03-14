#include <iostream>
using namespace std;

int main()

{
    int k,n;
    int A[10] = {1,2,3,4,5,6,7,8,9,10} ;

    cout << "Enter the index at which you want to delete";
    cin >> k ;

    //insertion code for array
    for (int i =k-1 ; i < 9 ; i++)
        {
            A[i] = A[i+1];
        }

    A[9]=0;

    for (int i=0 ; i < 10 ; i++)
    {
        cout << A[i]<< " ";
    }
    return 0 ;
}
