  #include <iostream>    
using namespace std;
int main()

{

    int n, m;
    cout << " " << endl;
    cin >> n >> m;
    
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i == j || i > j)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;

    }
    return 0;

}
   