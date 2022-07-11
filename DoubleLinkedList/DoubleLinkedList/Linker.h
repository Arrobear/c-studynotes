#pragma once

struct NODE
{
	char m_szName[20];
	int  m_Age;
	char m_szSex[4];
	char m_szAddr[100];
	char m_szTel[20];

	NODE *m_pNext;
	NODE *m_pFront;
};
//д��֮��ǵð�Struct���Data+Linker����ʽ


void MyInputNode(NODE& pt);  //����һ���մ����õĿհ׽ڵ�
void MyOutputNode(NODE& pt);  //����Ѿ����ڵĽڵ�
void MyCreateList();   
NODE& MyAdd_Node();  //����ֻ�Ǵ���һ���ڵ�
NODE* MyAddNode();   //������β�����һ���ڵ�
void MyShowList();   
void MyShowNode();   //�ȼ��� MyFindNode����+MyShowNode����
NODE& MyFindNode(char *FindName);
void MyInsertFront(char* ptName, NODE* pResFindNode, NODE* pNew); //ǰ�壨���ڲ�ѯ���Ľڵ�֮ǰ��
void MyInsertNext(char* ptName, NODE* pResFindNode, NODE* pNew);  //��壨���ڲ�ѯ���Ľڵ�֮��
void MyInsertNode();
void MyModifyNode();
void MyDeleteNode();
void MyClearnList();
void MyHelp();

