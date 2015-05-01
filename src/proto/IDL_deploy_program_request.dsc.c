/* It had generated by DirectStruct v1.3.3 */
#include "IDL_deploy_program_request.dsc.h"

int DSCINIT_deploy_program_request( deploy_program_request *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	memset( pst , 0x00 , sizeof(deploy_program_request) );
	return 0;
}

#include "fasterjson.h"

int DSCSERIALIZE_JSON_COMPACT_deploy_program_request( deploy_program_request *pst , char *encoding , char *buf , int *p_len )
{
	int	remain_len ;
	int	len ;
	char	tabs[10+1] ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	remain_len = (*p_len) - 1 ;
	memset( tabs , '\t' , 10 );
	len=SNPRINTF(buf,remain_len,"{"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"program\":"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->program); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"}"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	
	if( p_len ) (*p_len) = (*p_len)-1 - remain_len ;
	
	return 0;
}

funcCallbackOnJsonNode CallbackOnJsonNode_deploy_program_request ;
int CallbackOnJsonNode_deploy_program_request( int type , char *jpath , int jpath_len , int jpath_size , char *node , int node_len , char *content , int content_len , void *p )
{
	deploy_program_request	*pst = (deploy_program_request*)p ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	
	if( type & FASTERJSON_NODE_BRANCH )
	{
		if( type & FASTERJSON_NODE_ENTER )
		{
		}
		else if( type & FASTERJSON_NODE_LEAVE )
		{
		}
	}
	else if( type & FASTERJSON_NODE_LEAF )
	{
		/* program */
		if( jpath_len == 8 && strncmp( jpath , "/program" , jpath_len ) == 0 )
		{JSONUNESCAPE_FOLD(content,content_len,pst->program,sizeof(pst->program)-1,return -7);}
	}
	
	return 0;
}

int DSCDESERIALIZE_JSON_COMPACT_deploy_program_request( char *encoding , char *buf , int *p_len , deploy_program_request *pst )
{
	char	jpath[ 1024 + 1 ] ;
	int	nret = 0 ;
	memset( jpath , 0x00 , sizeof(jpath) );
	nret = TravelJsonBuffer( buf , jpath , sizeof(jpath) , & CallbackOnJsonNode_deploy_program_request , (void*)pst ) ;
	if( nret )
		return nret;
	
	return 0;
}
