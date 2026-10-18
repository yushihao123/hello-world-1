#include <iostream>
using namespace std;

int main (){
    int k;
    cin>>k;

    double S=0;
    int n=0;

    while (S<=k){
        n++;
        S=S+1.0/n;
    }
    cout<<n<<endl;
    return 0;
}
