#include <iostream>

using namespace std;

int main()
{
    int arr[10], t, a, max,min;

      cout <<"Enter the size of the array : ";

      cin >> t;

      cout <<"Enter the elements of the array : ";
       for (a = 0; a < t; a++)
         cin >> arr[a];

    max = arr[0];

      for (a = 0; a < t; a++)
    {
        if (max < arr[a])

           max = arr[a];

    }

    min = arr[0];

     for (a = 0; a < t; a++)

     {
         if (min > arr[a])

            min = arr[a];
     }

      cout <<  "Largest Element : " << max <<endl;

      cout << "Smallest Element : " << min;

    return 0;
}
