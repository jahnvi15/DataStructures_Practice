#include <iosteam>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    delete [] arr;
    return 0;
}