#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
#define p            printf
typedef vector<int>v;
typedef vector<v>vov;

struct n
{
    int data;
    struct n *next;

};
typedef struct n node;

void createNode(node *temp,int data)
{

    //cout<<temp->data<<endl;
}

void solution()
{
    node *head,*temp;
    head=new node();
    temp=new node();
    head=temp;

    for(int i=0; i<10; i++)
    {
        node *t;
        t=new node();
        t->data=i;
        t->next=head;
        temp->next=t;
        temp=t;
    }
    for(int i=0; i<15; i++)
    {
        head=head->next;
        cout<<head->data<<endl;

    }



}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solution();
    }
}


