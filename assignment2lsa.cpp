//array of size n where n is given by user
#include <iostream>
using namespace std;
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
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }
    cout<<endl;
    cout<<"sum: "<<addition(a,n)<<endl;
    cout<<"product: "<<multiplication(a,n)<<endl;
}
