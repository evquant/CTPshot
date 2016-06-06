// shotRecord.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>

#include "ThostFtdcMdApi.h"
#include "ThostFtdcTraderApi.h"
#include "ThostFtdcUserApiDataType.h"
#include "ThostFtdcUserApiStruct.h"

#include "MdSpi.h"

using namespace std;

CThostFtdcMdApi* pUserApi;

char FRONT_ADDR[] = "tcp://180.166.65.120:41213";
TThostFtdcBrokerIDType	BROKER_ID = "8086";				// ���͹�˾����
TThostFtdcInvestorIDType INVESTOR_ID = "00090000336";			// Ͷ���ߴ���
																//TThostFtdcPasswordType  PASSWORD = "888888";			// �û�����
TThostFtdcPasswordType  PASSWORD = "888888";			// �û�����
char *ppInstrumentID[] = { "rb1610"};			// ���鶩���б�
int iInstrumentID = 1;									// ���鶩������

														// ������
int iRequestID = 0;

int main()
{
	// ��ʼ��UserApi
	pUserApi = CThostFtdcMdApi::CreateFtdcMdApi();			// ����UserApi
	CThostFtdcMdSpi* pUserSpi = new MdSpi();
	pUserApi->RegisterSpi(pUserSpi);						// ע���¼���
	pUserApi->RegisterFront(FRONT_ADDR);					// connect
	pUserApi->Init();
	//cout << "��½0" << endl;
	pUserApi->Join();

	//cout << "��½1" << endl;
	/*//pUserApi->Join();
	//pUserSpi->OnFrontConnected();
	CThostFtdcReqUserLoginField req;
	memset(&req, 0, sizeof(req));
	strcpy_s(req.BrokerID, BROKER_ID);
	strcpy_s(req.UserID, INVESTOR_ID);
	strcpy_s(req.Password, PASSWORD);
	int iResult = pUserApi->ReqUserLogin(&req, ++iRequestID);
	//cerr << "--->>> �����û���¼����: " << ((iResult == 0) ? "�ɹ�" : "ʧ��") << endl;
	cout << iResult << endl;	// 0���ͳɹ�-1������ԭ����ʧ��-2δ���������������������-3ÿ�뷢��������������
	cout << "��½2" << endl;*/

	system("pause");
	return 0;
}