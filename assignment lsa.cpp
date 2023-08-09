
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 3 numbers"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    //code to find largest number
    if(a>b&&a>c){
        cout<< a<<"is the largest"<<endl;
    }
    else if(b>a&&b>c){
        cout<<b<<"is the largest"<<endl;
    }
    else{
        cout<<c<<"is the largest"<<endl;
    }
    //code to find smallest number
    if(a<b&&a<c){
        cout<<a<<"is the smallest"<<endl;

    }
    else if(b<a&&b<c){
        cout<<b<<"is the smallest"<<endl;
    }
    else{
        cout<<c<<"is the smallest"<<endl;
    }
    //code to add and multiply 3 nos
    int sum=a+b+c;
    cout<<"sum of the nos"<<sum<<endl;
    int mul=a*b*c;
    cout<<"product of the nos is"<<mul<<endl;


}
