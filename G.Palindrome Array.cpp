#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int A[N];
    int B[N];
    for(int i = 0; i<N; i++){
        cin >> A[i];
    }
        for(int i = 0; i<N; i++){
            B[i]= A[N-1-i];
    }
    bool flag = true;
    for(int i = 0; i<N; i++){
        if(A[i]!=B[i]){
         flag = false;
        break;
        }
    }
    if(flag==true){
        cout<< "YES"<<endl;
    }else{
    cout<< "NO"<<endl;
    }
    return 0;
}


