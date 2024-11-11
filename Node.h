#include<ostream>
#using namespace std

template<typename T>
class Node{
    public:
        T data;
        Node<T>* next;// puntero al siguiente elemento
        Node(T data, Node<T>* next=nullptr){
        	this->data=data;
        	this->next=next;
        }
        friend ostream& operator<<(ostream &out, const Node<T> &node){
       		out<<node.data;
       		return out;
       	} 
        //sobrcarga de "<<"hace que solo imprima la variable "data"
}
