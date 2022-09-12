#include<iostream>
using namespace std;
template <class T>
class Stack{
private:
	 int size;
	 T *stack;
public:
  Stack(){
  	size=-1,stack=new T[20];
  	}	
  bool isempty(){
  	if(size<0){
  	return 1;	
  		}else{
  			return 0;
  			}
  };
  bool isfull(){
  	if(size>=20){
  		return 1;
  		}else{
  			return 0;
  			}
  	};
  void pop(){
  	if(!isempty()){
  		stack[size]='\0';
  		// delete []stack;
  		size--;
  	}else{
  	cout<<"Stack is empty";
  	}
  };
  void push(T num){
  	if(isfull()){
  		cout<<"stack is full"<<endl;;
  		}else{
  			size++;
  			stack[size]=num;
  			}
  };
  void show(){
  	for(int i=0;i<=size;i++){
  		cout<<"  "<<stack[i];
  	}
  }
	};
int main(int argc, char *argv[])
{
Stack <int> marks;
marks.push(34);
marks.push(56);
marks.push(7);
marks.push(77);
marks.push(44);
marks.show();
marks.pop();
marks.push(99);
marks.push(66);
//marks.pop();
cout<<"\nthe results"<<endl;
marks.show();
//marks.pop();
Stack <string> names;
cout<<"\nInitial name: "<<endl;
names.push("Daniel");
names.push("Kirungu");
names.push("Kagombe");
names.show();
names.pop();
cout<<"\nfinal name: "<<endl;
names.show();

}//<<endl;
//names.show();
//}*/);
//}}