#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
int main(){
    node* n1;
    n1->data=34;

    cout<<n1->data;
}