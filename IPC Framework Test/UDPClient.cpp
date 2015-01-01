
#include "UDPClient.h"

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <windows.h>

#pragma comment(lib,"ws2_32.lib")

using namespace std;


UDPClient::UDPClient()
{
	m_sockfd = socket(AF_INET,SOCK_DGRAM,0);
	m_client.sin_family = AF_INET;
	m_client.sin_port = htons(7777);
	m_client.sin_addr.s_addr = inet_addr("192.168.1.16");
}

void UDPClient::Send(char* msg)
{
	bool b = sendto(m_sockfd,msg,sizeof(msg),0,(struct sockaddr *)&m_client,sizeof(m_client));
	int j = 0;
}