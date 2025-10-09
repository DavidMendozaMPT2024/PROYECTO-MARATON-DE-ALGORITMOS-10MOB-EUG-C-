#include <iostream>
#include <vector>
using namespace std;


int main(){
int n; cout<<"Tam cola: "; cin>>n;
vector<int> q(n); int head=0, tail=0, sz=0;
int op,x;
do{
cout<<"\n1.Enqueue 2.Dequeue 3.Front 4.Mostrar 0.Salir\nOp: ";
cin>>op;
if(op==1){
if(sz==n) cout<<"Cola llena\n";
else{ cout<<"Valor: "; cin>>x; q[tail]=x; tail=(tail+1)%n; sz++; }
} else if(op==2){
if(sz==0) cout<<"Cola vacia\n";
else{ cout<<"Dequeued: "<<q[head]<<"\n"; head=(head+1)%n; sz--; }
} else if(op==3){
if(sz==0) cout<<"Cola vacia\n"; else cout<<"Front: "<<q[head]<<"\n";
} else if(op==4){
cout<<"Cola: ";
for(int i=0,idx=head;i<sz;i++,idx=(idx+1)%n) cout<<q[idx]<<" ";
cout<<"\n";
}
} while(op!=0);
return 0;
}
