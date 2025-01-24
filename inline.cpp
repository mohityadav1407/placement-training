#include <iostream>
using namespace std;
inline int square(int x){
    return x*x;
}
int main(){
    int num = 5;
    cout<<"Square of the number"<<num<<"is"<<square(num)<<endl;
    return 0;
}