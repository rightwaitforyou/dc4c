/* It had generated by DirectStruct v1.4.5 */
#include "IDL_query_workers_request.dsc.h"

#ifndef FUNCNAME_DSCLOG_query_workers_request
#define FUNCNAME_DSCLOG_query_workers_request	DSCLOG_query_workers_request
#endif

#ifndef PREFIX_DSCLOG_query_workers_request
#define PREFIX_DSCLOG_query_workers_request	printf( 
#endif

#ifndef NEWLINE_DSCLOG_query_workers_request
#define NEWLINE_DSCLOG_query_workers_request	"\n"
#endif

int FUNCNAME_DSCLOG_query_workers_request( query_workers_request *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_query_workers_request "query_workers_request.sysname[%s]" NEWLINE_DSCLOG_query_workers_request , pst->sysname );
	PREFIX_DSCLOG_query_workers_request "query_workers_request.release[%s]" NEWLINE_DSCLOG_query_workers_request , pst->release );
	PREFIX_DSCLOG_query_workers_request "query_workers_request.bits[%d]" NEWLINE_DSCLOG_query_workers_request , pst->bits );
	PREFIX_DSCLOG_query_workers_request "query_workers_request.count[%d]" NEWLINE_DSCLOG_query_workers_request , pst->count );
	return 0;
}
