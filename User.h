#include<iostream>
#include<string>
#include<fstream>
#include"Manager.h"
#ifndef USER_H
#define USER_H
#define IN_PARAM   //��ڲ���
#define OUT_PARAM  //���ڲ���
using namespace std;


class UserNode
{
public:

    UserNode();
    string str_name;
    string str_id;          //ѧ��
    string str_academic;    //Ժϵ
    string str_major;       //רҵ
    string str_province;    //����
    string str_address;     //��ַ
    string str_phone_num;   //�绰����
    string str_company;     //������λ
    string str_e_mail;      //�ʼ�
    bool   b_is_printed;    //�ж��Ƿ��ӡ��true�Ǵ�ӡ��
    bool   b_is_classmate;
    bool   b_is_colleague;
    bool   b_is_relative;
    bool   b_is_important;  //�Ƿ��Ǳ���ϵ��
    bool   b_in_blacklist;
    bool   b_is_last_call;
    string str_latly_call;  //���ͨ����Ϣ
    UserNode* next;

    void Set_info();
    void Set_name();//��������
    void Set_id();//����ѧ��
    void Set_academic();//����Ժϵ
    void Set_major();//����רҵ
    void Set_province();//���뼮��
    void Set_address();//�����ַ
    void Set_phone_num();//����绰����
    void Set_company();//���빤����λ
    void Set_e_mail();//��������ʼ�
    void Set_Group();
    void Show_detail();//��ӡȫ������

    void Set_Black_List();//���ú�����
    void Set_Black_List_Out();//�Ƴ�������
    void Set_Last_Message(IN_PARAM string first);//����ͨѶ��¼��ģ����ʷͨ��
};


class User {
public:
    ~User();
    User() {
        Head = new UserNode;
        User_Next = NULL;
    }

    friend class Manager;
    void AddUser();
    UserNode* SearchUser_node(IN_PARAM string first);
    UserNode* SearchUser_node_black(IN_PARAM string first);
    //���Һ���
    void DeleteUserNode(IN_PARAM string first);
    //ɾ������
    void ReviseUser(IN_PARAM string first);
    //�޸��û�


    void Main_view();
    void Display();
    void Choose_Show(int first);//ѡ��鿴���
    void Showdata();    //ȫ����ӡ
    void Show_star();  //��ӡ�Ǳ���ϵ��
    void Show_relative();  //����
    void Show_classmate();//ͬѧ
    void Show_colleague();//ͬ��
    void Show_blacklist();//������
    void Change_Pwd();
    bool Is_User(IN_PARAM string strIdInput, IN_PARAM string strPwdInput);//�ж��Ƿ����û�����¼ʱ��

    string Get_Phone_num();
    string Get_Pwd();
    void Set_Pwd(IN_PARAM string str);
    void Set_Phone_Num(IN_PARAM string str);
    bool Del_Myself();    //����
    void Send_Message();
    void Show_last_call();
    void Receive_Push(IN_PARAM string pushed);
    void Show_Usernode_With_Sort();
    void Clear_Print();           //�����������ǵ������ӡ��¼
    bool All_Printed();         //������������ӡ��û��
    void Deal_Push();              //�������ͺ���
    void ReadData(string user_phone);
    void SaveData(string username);
    UserNode* Head;
    User* User_Next;

private:
    string User_phone_num;
    string str_pwd;
    string str_push_phone;//�鿴�����û���phone
};
void Read();
void Save();
void EnCode(string filename);

#endif