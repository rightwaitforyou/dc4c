/* It had generated by DirectStruct v1.4.5 */
#include "IDL_dag_batches_info.dsc.h"

#ifndef FUNCNAME_DSCLOG_dag_batches_info
#define FUNCNAME_DSCLOG_dag_batches_info	DSCLOG_dag_batches_info
#endif

#ifndef PREFIX_DSCLOG_dag_batches_info
#define PREFIX_DSCLOG_dag_batches_info	printf( 
#endif

#ifndef NEWLINE_DSCLOG_dag_batches_info
#define NEWLINE_DSCLOG_dag_batches_info	"\n"
#endif

int FUNCNAME_DSCLOG_dag_batches_info( dag_batches_info *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_dag_batches_info "dag_batches_info.schedule_name[%s]" NEWLINE_DSCLOG_dag_batches_info , pst->schedule_name );
	PREFIX_DSCLOG_dag_batches_info "dag_batches_info.batch_name[%s]" NEWLINE_DSCLOG_dag_batches_info , pst->batch_name );
	PREFIX_DSCLOG_dag_batches_info "dag_batches_info.batch_desc[%s]" NEWLINE_DSCLOG_dag_batches_info , pst->batch_desc );
	PREFIX_DSCLOG_dag_batches_info "dag_batches_info.view_pos_x[%d]" NEWLINE_DSCLOG_dag_batches_info , pst->view_pos_x );
	PREFIX_DSCLOG_dag_batches_info "dag_batches_info.view_pos_y[%d]" NEWLINE_DSCLOG_dag_batches_info , pst->view_pos_y );
	return 0;
}
