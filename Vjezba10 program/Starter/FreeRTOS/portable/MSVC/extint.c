// #include <WinSock2.h>

#include "FreeRTOS.h"

#include "extint.h"
#include "simcom.h"

DWORD WINAPI prvExternalInterruptCatcher(LPVOID lpParameter)
{
	WSADATA wsaData;
	SOCKET udpLstnr;
	SOCKADDR_IN udpAdrPrt;
	rply_template msg_buffer;

	configASSERT(WSAStartup(0x0202, &wsaData) == 0);
	udpLstnr = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	configASSERT(udpLstnr != INVALID_SOCKET);

	/* initialize the command reception channel */
	udpAdrPrt.sin_family = AF_INET;
	udpAdrPrt.sin_addr.S_un.S_addr = htonl(LOCAL_ADDRESS); // 127.0.0.1
	udpAdrPrt.sin_port = htons(SIM_INT_PORT);
	configASSERT(bind(udpLstnr, (SOCKADDR*)&udpAdrPrt, sizeof(SOCKADDR_IN)) == 0);

	while (1)
	{
		recv(udpLstnr, (char*)&msg_buffer, sizeof(msg_buffer), 0);
		if(msg_buffer.command == CMD_GEN_INT)
			vPortGenerateSimulatedInterrupt(msg_buffer.body.type_2.int_num);
	}

	/* this point should never be reached */
	return 0;
}
