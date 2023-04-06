#include<iostream>
using namespace std;
class test{
    public:
    int reverse(int x){
        int r,rev=0;
        while(x>0){
            r=x%10;
            rev=rev*10+r;
            x=x/10;
        }
        return rev;
    }
};

int main(){
     int x,rev;
     cout<<"enter a  number:"<<endl;
     cin>>x;
     test obj;
     rev=obj.reverse(x);
     if(rev==x){
        cout<<"number is palindrome"<<x<<endl;
     }
     else{
        cout<<"number is not palindrome"<<endl;
     }

return 0;
}