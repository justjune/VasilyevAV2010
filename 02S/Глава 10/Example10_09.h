#pragma once
//����� ��� ���������� ����������� �����:
class MComp{
public:
double Re;
double Im;
//��������������� ���������� ����� ����������:
MComp operator++(){
Re++;
return *this;}
//��������������� ����������� ����� ����������:
MComp operator++(int unused){
Im++;
return *this;}
};