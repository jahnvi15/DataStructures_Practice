using namespace std;

void * delete_ele(int *& Arr, int i ,int size){
 for(int j = i; j < size; j ++){
 Arr[j] = Arr[j+1] ;
 }
 Arr[size-1] = {};
 return 0;
}

int * removeEven( int *& Arr, int size )
{
 for(int i = 0 ; i < size; i++){
 if(Arr[i] % 2 == 0){
 delete_ele(*& Arr, i , size);
 size--;
 }
 }
 return Arr;
}

int main(){
    int size = 5;
    int Arr[5] = {1,2,3,4,5};
    removeEven(&Arr, size);
    for(int i = 0; i < size; i++){
        cout<<Arr[i]<<" ";
    }
    return 0;
}
