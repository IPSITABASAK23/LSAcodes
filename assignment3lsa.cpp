//array of size 100
#include <iostream>
using namespace std;
int addition(int a[]){
    int sum=0;
    for(int i=0;i<100;i++){
         sum+=a[i];
    }
    return sum;

}
int multiplication(int a[]){
    int mul=1;
    for(int i=0;i<100;i++){
        mul*=a[i];
    }
    return mul;
}
int main(){
    int  sum,mul;
    
    int a[100];
    for (int i = 0; i < 100; i++) {
        cout << a[i] << " ";
        
    }
    cout<<endl;
    cout<<"sum is "<<sum<<endl;
    cout<<"product is "<<mul<<endl;
}