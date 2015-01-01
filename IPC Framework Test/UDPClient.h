
#include <winsock.h>

class UDPClient		//: public Ptmp::CPtmpMsg
{
public:

	UDPClient();
	
	void Send(char* msg);

private:
	int m_sockfd;
	struct sockaddr_in m_client;
	
		
};
	