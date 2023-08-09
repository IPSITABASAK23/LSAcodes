//generate array of random size using random()
#include <iostream>
#include <random>
using namespace std;

void RandomArr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = rand() ;
    }
}
int addition(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
         sum+=a[i];
    }
    return sum;

}
int multiplication(int a[],int n){
    int mul=1;
    for(int i=0;i<n;i++){
        mul*=a[i];
    }
    return mul;
}
int main(){
    int  n,sum,mul;
    cin>>n;
   
    
    int a[n];

    RandomArr(a, n);
    cout << "Random array using rand(): ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    cout<<endl;
    cout<<"sum: "<<addition(a,n)<<endl;
    cout<<"product: "<<multiplication(a,n)<<endl;
}