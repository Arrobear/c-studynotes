#include "stdafx.h"
#include "Cmd.h"
#include "Linker.h"

void Create()
{
	MyCreateList();
}

void Add()
{
	MyAddNode();
}

void Insert()
{
	MyInsertNode();
}

void Delete()
{
	MyDeleteNode();
}

void Clearn()
{
	MyClearnList();
}

void Modify()
{
	MyModifyNode();
}

void Find()
{
	MyShowNode();
}


void Show()
{
	MyShowList();
}

void Help()
{
	MyHelp();
}

void Exit()
{
	exit(0);
}

CMD_MAP g_Cmd_Map[] = {
	{"Create", Create},
	{"Add", Add},
	{"Insert", Insert},
	{"Delete", Delete},
	{"Clearn", Clearn},
	{"Modify", Modify},
	{"Find", Find},
	{"Show", Show},
	{"Help", Help},
	{"Exit", Exit},
	{"NULL", NULL}
};

void Finally()
{
	system("title ˫������ 2018.1.19");
	system("color 0e");

	Help();  //��ʾ����������һ��ʼ����֪��Ӧ����ô����

	char szCmdBuf[20] = "";
	CMD_MAP *pCmdMap = NULL;

	while (true)
	{
		
		pCmdMap = g_Cmd_Map;
		cout << endl << "���������";
		cin >> szCmdBuf;

		while (true)
		{
			system("cls");
			if (0 == strcmp(szCmdBuf, pCmdMap->m_szcmd))
			{
				pCmdMap->m_pfun();
				break;
			}

			if ("NULL" == pCmdMap->m_szcmd)
			{
				cout << "�����������������������룡" << endl;
				break;
			}

			pCmdMap++;
		}
	}
}