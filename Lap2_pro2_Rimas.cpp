#include <iostream>

using namespace std;
int larger(int a,int b){ 
  if(a>b) { 
    return a;
  }
  else { 
    return b; 
  }
}

 int oneOfthreenumbers(int a,int b, int c){ 
  int max;
   max=larger(larger(a,b),c);
cout<<"largest number is  : "<<max<<endl;
   return max;
 }


int main() {
  int x,y,z;
  cout<<"enter three numbers : "<<endl;
  cin>>x>>y>>z;
  oneOfthreenumbers(x,y,z);
  return 0;
}