#include <iostream>
using namespace std;

int main(){

int b[8][8]={0};
b[0][0]=1;
int q[8]; q[0]=0; int c=0;
NC: c++;
if(c==8) goto print;
q[c]=-1;
NR: q[c]++;
if(q[c]==8) goto backtrack;

//row diagnol test
for(int i=0; i<c; i++){
  if(q[i]==q[c]||(c-i)==abs(q[c]-q[i])) goto NR;
} 
goto NC; 

backtrack: c--;
if(c==-1) return 0;
goto NR;

print: 

//int q[i] tells me which row the queen is placed in order
// if q[4]=5. fifth colm 6th row place queen

  int l[8][8];

for(int i=0; i<8; i++){ //controls x axis or rows 
  for(int k=0; k<8; k++){ //controls y axis or col
  if (q[i]==k) {cout<<" 1 ";} else {cout <<" 0 ";}

}
cout<<endl;

}
}
