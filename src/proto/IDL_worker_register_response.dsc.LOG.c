/* It had generated by DirectStruct v1.3.3 */
#include "IDL_worker_register_response.dsc.h"

#ifndef FUNCNAME_DSCLOG_worker_register_response
#define FUNCNAME_DSCLOG_worker_register_response	DSCLOG_worker_register_response
#endif

#ifndef PREFIX_DSCLOG_worker_register_response
#define PREFIX_DSCLOG_worker_register_response	printf( 
#endif

#ifndef NEWLINE_DSCLOG_worker_register_response
#define NEWLINE_DSCLOG_worker_register_response	"\n"
#endif

int FUNCNAME_DSCLOG_worker_register_response( worker_register_response *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_worker_register_response "worker_register_response.response_code[%d]" NEWLINE_DSCLOG_worker_register_response , pst->response_code );
	return 0;
}
