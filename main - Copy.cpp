#include <iostream>
using namespace std;
const int cowal =100;
void f1 (int a[][cowal],int p,int g){
float oddsum = 0;
float evensum = 0;
float  oddavraeg =0;
float  evenavareg =0;
for(int i =0; i<p; i++){
for(int c =0; c<g; c++){
if(a[i][c]%2==0){
evensum = evensum+a[i][c];
}
if(a[i][c]%2==1){
oddsum =oddsum+a[i][c];


}








}




}

cout<<"avrag even number  = :"<<evensum<<endl;


cout<<"avrag odd number  = :"<<oddsum<<endl;

}
int main () {
    int m = 0;
    int y =0;
   cin>>m;
   cin>>y;
    int b [100][100];
    for(int i =0; i<m; i++){
for(int c =0; c<y; c++){
    cin>>b[i][c];




}

    }
f1(b,m,y);





system ("pause");
    return 0;
}