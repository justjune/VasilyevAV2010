// �������� ��������� ������
#include <iostream>
using namespace std;
//������� ��������� ������:
int Count=0;
//���������-������� ������:
struct BinTree{
//����-���������:
BinTree *p1;
BinTree *p2;
//������������� ����:
int n;
};
//������� �������� ��������� ������:
BinTree *MakeTree(int N){
//��������� �� ����������� �������:
BinTree *p;
p=new BinTree;
//�������� ������:
Count++;
p->n=Count;
if(N>1){
p->p1=MakeTree(N-1);
p->p2=MakeTree(N-1);}
//���������-��������� �� ��������� �������:
return p;
}
int main(){
//��������� �� ������� (���������) �������:
BinTree *q;
//�������� 4-� ���������� ��������� ������:
q=MakeTree(4);
//�������� ����������. ���������� ���������:
cout<<"Elements in tree: "<<Count<<endl;
//������� �1:
cout<<q->n<<endl;
//������� �2:
cout<<q->p1->n<<endl;
//������� �4:
cout<<q->p1->p1->p1->n<<endl;
//������� �7:
cout<<q->p1->p2->p1->n<<endl;
//������� �9:
cout<<q->p2->n<<endl;
//������� �10:
cout<<q->p2->p1->n<<endl;
//������� �15:
cout<<q->p2->p2->p2->n<<endl;
cin.get();
return 0;
}