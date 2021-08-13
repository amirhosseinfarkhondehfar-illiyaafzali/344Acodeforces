#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    int last=5;
    int count=1;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin>>b;
        if (b/10==last)
        {
            count++;
        }

        last=b%10;
    }
    cout<<count<<endl;
}