#include "stdafx.h"
#include "Linker.h"

NODE *g_pHead = NULL;
NODE *g_pEnd = NULL;

void MyInputNode(NODE& pt)  //����һ���մ����õĿհ׽ڵ�
{
	pt.m_pFront = NULL;
	pt.m_pNext = NULL;
	cout << "����:";      cin >> pt.m_szName;
	cout << "����:";      cin >> pt.m_Age;
	cout << "�Ա�:";      cin >> pt.m_szSex;
	cout << "��ϵ��ʽ:";   cin >> pt.m_szTel;
	cout << "סַ:";      cin >> pt.m_szAddr;
}

void MyOutputNode(NODE& pt)  //������еĽڵ�
{
	cout << "����:" << pt.m_szName << endl;
	cout << "����:" << pt.m_Age << endl;
	cout << "�Ա�:" << pt.m_szSex << endl;
	cout << "��ϵ��ʽ:" << pt.m_szTel << endl;
	cout << "סַ:" << pt.m_szAddr << endl << endl;
}
void MyCreateList()
{
	NODE *pTemp = new NODE;

	if (NULL == pTemp)
	{
		cout << "��������ʧ�ܣ�" << endl;
	}
	else
	{
		MyInputNode(*pTemp);
		cout << "��������ɹ���" << endl << endl;
	}

	g_pHead = pTemp;
	g_pEnd = pTemp;
}

//����ֻ�Ǵ���һ���ڵ�
NODE& MyAdd_Node()
{
	NODE* pTemp = new NODE;

	if (NULL != pTemp)
	{
		MyInputNode(*pTemp);
	}

	return *pTemp;
}

//������β�����һ���ڵ�
NODE* MyAddNode()
{
	if (NULL == g_pHead || NULL == g_pEnd)
	{
		cout << "���������ڣ�����´��������ٽ��и��������" << endl;
	}

	NODE* pNew = &MyAdd_Node();  //���õ�ʹ��
	g_pEnd->m_pNext = pNew;
	pNew->m_pFront = g_pEnd;
	g_pEnd = pNew;
	return NULL;
}

void MyShowList()
{
	int nCount = 1;

	if (NULL != g_pHead && NULL != g_pEnd)
	{
		NODE* pt = g_pHead;

		cout << "------------------��ʾ����ʼ------------------" << endl;
		while (pt != NULL)
		{	
			cout << "��" << nCount << "���ڵ㣺" << endl;
			MyOutputNode(*pt);
			pt = pt->m_pNext;
			nCount++;
		}
		cout << "------------------��ʾ�������------------------" << endl << endl;
	}
}

NODE& MyFindNode(char *FindName) //������������
{
	NODE* pt = g_pHead;

	while (true)
	{
		if (NULL != pt)
		{
			if (0 == strcmp(FindName, pt->m_szName))
			{
				return *pt;
			}
			else
			{
				pt = pt->m_pNext;
			}
		}
		else
		{
			cout << "����ѯ�ĸýڵ㲻���ڣ�" << endl << endl;
			return *pt;  //pt == NULL
		}		
	}

}

void MyShowNode()
{
	char szNameBuf[20] = "";
	cout << "��������Ҫ��ѯ������:";
	cin >> szNameBuf;
	MyOutputNode(MyFindNode(szNameBuf));
}

void MyInsertFront(char* ptName, NODE* pResFindNode, NODE* pNew) //ǰ�壨���ڲ�ѯ���Ľڵ�֮ǰ��
{
	if (pResFindNode == g_pHead)
	{
		pNew->m_pNext = g_pHead;
		g_pHead->m_pFront = pNew;
		g_pHead = pNew;
	}
	else //�������м仹�����һ���ڵ㣬��ô����ǰ��֮��g_pEnd��ָ�򶼲���Ҫ�仯
	{
		pNew->m_pFront = pResFindNode->m_pFront;
		pNew->m_pNext = pResFindNode;
		pResFindNode->m_pFront->m_pNext = pNew;
		pResFindNode->m_pFront = pNew;	
	}
}

void MyInsertNext(char* ptName, NODE* pResFindNode, NODE* pNew)  //��壨���ڲ�ѯ���Ľڵ�֮��
{
	if (pResFindNode == g_pEnd)
	{
		pResFindNode->m_pNext = pNew;
		pNew->m_pFront = pResFindNode;
		g_pEnd = pNew;
	}
	else //�������м仹�ǵ�һ���ڵ㣬��ô���к�֮��g_pHead��ָ�򶼲���Ҫ�仯
	{
		pNew->m_pNext = pResFindNode->m_pNext;
		pNew->m_pFront = pResFindNode;
		pResFindNode->m_pNext->m_pFront = pNew;
		pResFindNode->m_pNext = pNew;
	}
}

void MyInsertNode()
{
	char szNameBuf[20] = "";
	cout << "���������������Ὣ��ѡ�����ýڵ�֮ǰ����֮��:";
	cin >> szNameBuf;

	cout << "-------------���������ʼ-------------" << endl;
	NODE *pNew = &MyAdd_Node();
	NODE *pResFindNode = &MyFindNode(szNameBuf);

	int nChoose = 1;
	cout << "ǰ�廹�Ǻ�壺��1---ǰ�壻 2---��壩" << endl;
	cin >> nChoose;
	if (1 == nChoose)
	{
		MyInsertFront(szNameBuf, pResFindNode, pNew);
	}
	else if (2 == nChoose)
	{
		MyInsertNext(szNameBuf, pResFindNode, pNew);
	}
	else
	{
		cout << "������1����2��������ٴγ������룡" << endl;
	}
	cout << "-------------�����������-------------" << endl << endl;
}

void MyModifyNode()
{
	char szNameBuf[20] = "";
	cout << "�����������������޸ĵĽڵ���Ϣ��:";
	cin >> szNameBuf;

	cout << "-------------�޸Ĳ�����ʼ-------------" << endl;
	NODE *pResFindNode = &MyFindNode(szNameBuf);
	MyInputNode(*pResFindNode);
	cout << "-------------�޸Ĳ�������-------------" << endl << endl;
}

void MyDeleteNode()
{
	char szNameBuf[20] = "";
	cout << "����������������ɾ���Ľڵ���Ϣ��:";
	cin >> szNameBuf;

	cout << "-------------ɾ������������....-------------" << endl;
	NODE *pResFindNode = &MyFindNode(szNameBuf);
	if (pResFindNode == g_pHead)
	{	
		g_pHead = pResFindNode->m_pNext;
		pResFindNode->m_pNext->m_pFront = NULL;
	}
	else if (pResFindNode == g_pEnd)
	{
		g_pEnd = pResFindNode->m_pFront;
		g_pEnd->m_pNext = NULL;
	}
	else
	{
		pResFindNode->m_pFront->m_pNext = pResFindNode->m_pNext;
	}

	delete [] pResFindNode;

	cout << "-------------ɾ����������-------------" << endl << endl;
}

void MyClearnList()
{
	NODE* pt = g_pHead;

	cout << "-------------������������....-------------" << endl;
	while (NULL != pt)
	{
		delete [] pt;
		pt = pt->m_pNext;
	}

	g_pHead = NULL;
	g_pEnd = NULL;
	cout << "-------------����������-------------" << endl << endl;
}


void MyHelp()
{
	for (size_t i = 0; i < 80; i++)
		fputchar('=');
	cout << endl;

	void Create();
	void Add();
	void Insert();
	void Delete();
	void Clearn();
	void Modify();
	void Find();
	void Show();
	void Help();
	void Exit();
	cout << "����            ���           ��������" << endl;
	cout << "Create         ����         ����һ������" << endl;
	cout << "Add            ���         �ڸ������β�����һ���µĽڵ�" << endl;
	cout << "Insert         ����         ����������ط��������һ���½ڵ�" << endl;
	cout << "Delete         ɾ��         ����������ط�����ɾ��һ�����нڵ�" << endl;
	cout << "Clearn         ���         �����������" << endl;
	cout << "Modify         �޸�         ����������ط��������޸�һ�����нڵ�" << endl;
	cout << "Show           ��ʾ         ��������ʾ����������нڵ����ϸ��Ϣ" << endl;
	cout << "Help           ����         �鿴����˵���ĵ�" << endl;
	cout << "Exit           �˳�         �˳�������������" << endl;


	for (size_t i = 0; i < 80; i++)
		fputchar('=');

	cout << endl << endl;
}