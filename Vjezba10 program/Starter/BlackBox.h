#ifndef _BLACK_BOX_H
#define _BLACK_BOX_H

#ifdef __cplusplus
extern "C" {
#endif

#include <WinSock2.h>

#include <stdint.h>

#include "simcom.h"

	typedef enum commStatus_ {
		comm_OK,
		comm_INIT_FAILED,
		comm_CLEANUP_FAILED,
		comm_SOCKET_FAILED,
		comm_BIND_SOCKET_FAILED,
		comm_SET_SOCKET_OPT_FAILED,
		comm_UDP_SEND_FAILED,
		comm_UDP_REC_FAILED,
		comm_UDP_REC_TIMEOUT
	} commStatus;

	typedef struct commData_ {
		SOCKET sck;
		SOCKADDR_IN addr_port;
	} commData;

	commStatus HWSIM_closeLink(commData* cdt);

	commStatus HWSIM_openLink(commData* cdt, uint16_t port, uint32_t address);

	commStatus HWSIM_openXtLink(commData* cdt, uint16_t port, uint32_t address);

	commStatus HWSIM_execute(commData* cdt, uint32_t size, cmd_template* data);

	commStatus HWSIM_query(commData* cdt, uint32_t qSize, cmd_template* query, uint32_t rSize, rply_template* reply);

#ifdef __cplusplus
}
#endif

#endif
