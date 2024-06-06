#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int num){
    if (num<= 1) return false;
    for (int i = 2 ; i * i <= num ; i++){
        if(num%i==0) return false;
    }
    return true;
}

int linearSearch(int arr[], int n, int x){

    return -1;
}

int main(){
    int n, m;
    cin>>n>>m;

    int array_A[n];
    int array_B[m];

    //input array A
    for(int i = 0; i<n ;i++){
        cin>>array_A[i];
    }

    //input array B
    for(int i=0; i<m ; i++){
        cin>>array_B[i];
    }

    int results[n+m];//menggunakann array untuk hasil
    int result_count=0;//counter untuk hasil

    //cari nilai yang memenuhi syarat
    for(int i =0; i<n ; i++){
        
    }

    //urutan hasil pencarian
    sort(results, results + result_count);

    //cetak hasil pencarian
    if(result_count ==0){
        cout<<"TIDAK ADA"<<endl;
    }else {

    }
    return 0;
}

