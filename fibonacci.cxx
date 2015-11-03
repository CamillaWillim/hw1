# include <iostream>

using namespace std;

int main(){
 int f1=0;
 int f2=1;
 int f;
 int N;
 cin >> N;
 for(int i=0; i<N;i++){
    
     f=f1+f2;
     f2=f1;
     f1=f;
     

     
    
 }
 cout << f << endl;
 return 0;
}
