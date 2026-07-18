#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
   if (N==1){
    cout<< "0";
    return 0;
   }
   else if(N==2){
    cout<< "1";
    return 0;
   }
   long long fib[100];
   fib[1] = 0;
   fib[2]= 1;
   for(int i = 3; i<=N; i++){
    fib[i]= fib[i-1] + fib[i-2];
   }
   cout<< fib[N];
return 0;
}

