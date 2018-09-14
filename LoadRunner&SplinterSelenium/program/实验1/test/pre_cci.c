# 1 "c:\\documents and settings\\eagle\\my documents\\test\\\\combined_test.c"
# 1 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"








































































	

 


















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 263 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 502 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 505 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 528 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 562 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 585 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 609 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);
int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);


 
 
 
 
 
 
# 676 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 737 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);


 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 762 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 774 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 782 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 788 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );

int lr_save_searched_string(char *buffer, long buf_size, unsigned int occurrence,
			    char *search_string, int offset, unsigned int param_val_len, 
			    char *param_name);

 
char *   lr_string (char * str);

 
# 859 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 866 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 888 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 964 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 993 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"


# 1005 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char *sourceString, char *fromEncoding, char *toEncoding, char *paramName);





 
 

















# 1 "c:\\documents and settings\\eagle\\my documents\\test\\\\combined_test.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files\\HP\\LoadRunner\\include/web_api.h" 1
 







# 1 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h" 1
 






















































 




 








 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 










# 596 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h"


# 609 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h"



























# 647 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 715 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h"



 
 
 






# 10 "C:\\Program Files\\HP\\LoadRunner\\include/web_api.h" 2












 






 











  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 





 
 
 


# 7 "globals.h" 2

# 1 "C:\\Program Files\\HP\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2




 
 




# 2 "c:\\documents and settings\\eagle\\my documents\\test\\\\combined_test.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 3 "c:\\documents and settings\\eagle\\my documents\\test\\\\combined_test.c" 2

# 1 "Action.c" 1
Action()
{

	web_add_cookie("kqNd_2132_sid=Qi4I76; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_saltkey=gYb7KlyQ; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_lastvisit=1513735775; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_lastact=1513739375%09home.php%09misc; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_sendmail=1; DOMAIN=my.nuaa.edu.cn");


	web_url("portal.php",
		"URL=http://my.nuaa.edu.cn/portal.php",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t1.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=/template/newzfj/images/bgimg.jpg", "ENDITEM",
		"URL=/template/newzfj/images/toptb.png", "ENDITEM",
		"URL=/template/newzfj/images/search.png", "ENDITEM",
		"URL=/static/image/common/px.png", "ENDITEM",
		"URL=/static/image/common/newarow.gif", "ENDITEM",
		"URL=/template/newzfj/images/weather.png", "ENDITEM",
		"URL=/static/image/common/qmenu.png", "ENDITEM",
		"URL=/data/cache/common_extra.js?hkZ", "ENDITEM",
		"URL=/static/image/common/dot.gif", "ENDITEM",
		"URL=/static/image/common/scrolltop.png", "ENDITEM",
		"LAST");

	web_url("none",
		"URL=http://my.nuaa.edu.cn/template/newzfj/images/none",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://my.nuaa.edu.cn/portal.php",
		"Mode=HTML",
		"EXTRARES",
		"URL=/favicon.ico", "ENDITEM",
		"LAST");

	web_url("sso",
		"URL=http://my.nuaa.edu.cn/sso/?page=login&redirect_uri=L3BsdWdpbi5waHA/aWQ9c3lubG9naW46bG9naW5jaGVjayZyZWRpcmVjdF91cmk9TDNCdmNuUmhiQzV3YUhBPQ==",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://my.nuaa.edu.cn/portal.php",
		"Snapshot=t2.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=resources/js/base64.js", "Referer=http://my.nuaa.edu.cn/sso/?page=login&redirect_uri=L3BsdWdpbi5waHA/aWQ9c3lubG9naW46bG9naW5jaGVjayZyZWRpcmVjdF91cmk9TDNCdmNuUmhiQzV3YUhBPQ==", "ENDITEM",
		"URL=resources/js/ieBetter.js", "Referer=http://my.nuaa.edu.cn/sso/?page=login&redirect_uri=L3BsdWdpbi5waHA/aWQ9c3lubG9naW46bG9naW5jaGVjayZyZWRpcmVjdF91cmk9TDNCdmNuUmhiQzV3YUhBPQ==", "ENDITEM",
		"URL=resources/js/html5.js", "Referer=http://my.nuaa.edu.cn/sso/?page=login&redirect_uri=L3BsdWdpbi5waHA/aWQ9c3lubG9naW46bG9naW5jaGVjayZyZWRpcmVjdF91cmk9TDNCdmNuUmhiQzV3YUhBPQ==", "ENDITEM",
		"URL=resources/js/classList.min.js", "Referer=http://my.nuaa.edu.cn/sso/?page=login&redirect_uri=L3BsdWdpbi5waHA/aWQ9c3lubG9naW46bG9naW5jaGVjayZyZWRpcmVjdF91cmk9TDNCdmNuUmhiQzV3YUhBPQ==", "ENDITEM",
		"URL=../template/zfj4.0/images/bg.png", "Referer=http://my.nuaa.edu.cn/sso/?page=login&redirect_uri=L3BsdWdpbi5waHA/aWQ9c3lubG9naW46bG9naW5jaGVjayZyZWRpcmVjdF91cmk9TDNCdmNuUmhiQzV3YUhBPQ==", "ENDITEM",
		"LAST");

	lr_think_time(13);

	lr_start_transaction("login");

	lr_rendezvous("login");
	web_submit_form("sso_2",
		"Ordinal=1",
		"Snapshot=t3.inf",
		"ITEMDATA",
		"Name=username", "Value={NewParam}", "ENDITEM",
		"Name=password", "Value={NewParam_2}", "ENDITEM",
		"LAST");

	web_find("web_find",
		"What=����",
		"LAST");
	web_add_cookie("kqNd_2132_lastact=1513739429%09portal.php%09; DOMAIN=my.nuaa.edu.cn");

	web_url("plugin.php",
		"URL=http://my.nuaa.edu.cn/plugin.php?id=synlogin:logincheck&redirect_uri=L3BvcnRhbC5waHA=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t4.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=/template/newzfj/images/switch_style.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/static/image/common/arrwd.gif", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/template/newzfj/images/setup.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/template/newzfj/images/myrepeats.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/template/newzfj/images/extra.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/template/newzfj/images/logout.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/static/image/common/ico_notice.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/static/image/common/close.gif", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/static/image/feed/mark_b.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/static/image/feed/task_b.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/static/image/feed/friend_b.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/template/newzfj/images/notice_pm.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/static/image/feed/Qdao.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/static/image/feed/magic_b.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/static/image/feed/favorite_b.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/static/image/feed/medal_b.png", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"URL=/static/image/common/user_online.gif", "Referer=http://my.nuaa.edu.cn/portal.php", "ENDITEM",
		"LAST");

	web_url("none_2",
		"URL=http://my.nuaa.edu.cn/template/newzfj/images/none",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://my.nuaa.edu.cn/portal.php",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("login", 2);

return 0;
}
# 4 "c:\\documents and settings\\eagle\\my documents\\test\\\\combined_test.c" 2

# 1 "Action2.c" 1
Action2()
{

	web_add_cookie("kqNd_2132_sid=Qi4I76; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("myauth_uid=Ad2yQGwpLJSi%2FFsyBqabraq6RhACFToa6rGcFs7rtgIfxJgLHhURotdYm%2BgZH0CUDZSzRC35vdmDmp3IZHhj0s0%2BM6h2mgLhp321jJ%2FXEQwMoY7hRb3pQxyRM1O1JSx5X3Ryu25aFKxcmnYsw%2FG19wDYiGA8XQ9SfaoVLANs6t95ITuBZzmnQhiKVcA8RXUXBWqExMum7b5COmZzuVCVXLDYyHN0VVY%2Bm4xtg6KTNrcr2b587Qnn1T7%2FVTY2G6owyKmOWEg9GgKWhq4zBQw4JIj03gsYh8KKfxr71jXx1%2FntrInbk8NUGXGDDruDMQxv%2Fz72q%2FXLvkijIIk%2BR606HA%3D%3D; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_saltkey=G9u14R9f; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_lastvisit=1513735829; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_lastact=1513739430%09home.php%09spacecp; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_ulastactivity=866524YF9Y23mlRG9gwDE9PQYc7U79tHUzO2u75V%2FTXosV3xjuex; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_auth=fc3bDj%2B%2BNNVCqLB5%2FVr05Tuqsk%2FO%2FFT5IG0HU%2FdlxaI6OKD%2BwMZ77eFTX%2FyVWidSJ7vRsVohxDlnxRv4A5zOE1sS7%2Bo; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_sendmail=1; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_checkpm=1; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_noticeTitle=1; DOMAIN=my.nuaa.edu.cn");

	web_url("portal.php", 
		"URL=http://my.nuaa.edu.cn/portal.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/template/newzfj/images/bgimg.jpg", "ENDITEM", 
		"Url=/template/newzfj/images/toptb.png", "ENDITEM", 
		"Url=/template/newzfj/images/search.png", "ENDITEM", 
		"Url=/template/newzfj/images/switch_style.png", "ENDITEM", 
		"Url=/static/image/common/arrwd.gif", "ENDITEM", 
		"Url=/template/newzfj/images/setup.png", "ENDITEM", 
		"Url=/template/newzfj/images/weather.png", "ENDITEM", 
		"Url=/template/newzfj/images/notice_pm.png", "ENDITEM", 
		"Url=/template/newzfj/images/extra.png", "ENDITEM", 
		"Url=/static/image/common/user_online.gif", "ENDITEM", 
		"Url=/data/cache/common_extra.js?hkZ", "ENDITEM", 
		"Url=/template/newzfj/images/logout.png", "ENDITEM", 
		"Url=/static/image/common/qmenu.png", "ENDITEM", 
		"Url=/static/image/common/dot.gif", "ENDITEM", 
		"Url=/template/newzfj/images/myrepeats.png", "ENDITEM", 
		"Url=/static/image/common/ico_notice.png", "ENDITEM", 
		"Url=/static/image/common/close.gif", "ENDITEM", 
		"Url=/static/image/feed/magic_b.png", "ENDITEM", 
		"Url=/static/image/feed/mark_b.png", "ENDITEM", 
		"Url=/static/image/feed/Qdao.png", "ENDITEM", 
		"Url=/static/image/feed/medal_b.png", "ENDITEM", 
		"Url=/static/image/feed/task_b.png", "ENDITEM", 
		"Url=/static/image/feed/friend_b.png", "ENDITEM", 
		"Url=/static/image/feed/favorite_b.png", "ENDITEM", 
		"Url=/static/image/common/scrolltop.png", "ENDITEM", 
		"LAST");

	web_url("none", 
		"URL=http://my.nuaa.edu.cn/template/newzfj/images/none", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://my.nuaa.edu.cn/portal.php", 
		"Mode=HTML", 
		"LAST");

	web_url("forum.php", 
		"URL=http://my.nuaa.edu.cn/forum.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://my.nuaa.edu.cn/portal.php", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/template/newzfj/images/switch_width.png", "ENDITEM", 
		"Url=/template/newzfj/images/home.png", "ENDITEM", 
		"Url=/static/image/common/chart.png", "ENDITEM", 
		"Url=/template/newzfj/images/ca_205.png", "ENDITEM", 
		"Url=/template/newzfj/images/ca_3.png", "ENDITEM", 
		"Url=/template/newzfj/images/ca_4.png", "ENDITEM", 
		"Url=/template/newzfj/images/ca_818.png", "ENDITEM", 
		"Url=/template/newzfj/images/ca_6.png", "ENDITEM", 
		"Url=/template/newzfj/images/ca_785.png", "ENDITEM", 
		"Url=/template/newzfj/images/ca_7.png", "ENDITEM", 
		"LAST");

	web_url("none_2", 
		"URL=http://my.nuaa.edu.cn/template/newzfj/images/none", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://my.nuaa.edu.cn/forum.php", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/favicon.ico", "Referer=", "ENDITEM", 
		"LAST");

	lr_think_time(9);

	web_url("forum.php_2", 
		"URL=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://my.nuaa.edu.cn/forum.php", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/template/newzfj/images/bgimg.jpg", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/template/newzfj/images/toptb.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/template/newzfj/images/search.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"LAST");

	web_add_cookie("kqNd_2132_smile=5D1; DOMAIN=my.nuaa.edu.cn");

	web_url("none_3", 
		"URL=http://my.nuaa.edu.cn/template/newzfj/images/none", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/static/image/common/nosexbg.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=weather.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=switch_width.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=switch_style.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/user_online.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/arrwd.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=setup.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=notice_pm.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=myrepeats.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=extra.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=logout.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/qmenu.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=home.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/px.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/arw_l.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/mobile-type.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/source/plugin/bigapp/image/wsq.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/midavt_shadow.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/ico_jdt.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/pmto.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/v.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/close.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/gentlemanbg.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/feed/mark_b.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/feed/magic_b.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/feed/friend_b.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/feed/Qdao.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/feed/medal_b.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/ico_notice.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/feed/task_b.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/feed/favorite_b.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/debatesmall.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/pollsmall.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/folder_new.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/activitysmall.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/tradesmall.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/tip_bottom.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/rewardsmall.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/arw.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/fastreply.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/arrow_top.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/share_btn.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/sigline.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/icon_quote_s.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/icon_quote_e.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/ladybg.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/data/cache/smilies.js?hkZ", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/editor/editor.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/pn.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/scrolltop.png", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/data/cache/common_smilies_var.js?hkZ", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/17.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/09.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/52.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/56.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/06.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/34.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/04.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/03.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/02.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/22.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/13.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/25.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/18.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/19.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/08.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/10.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/26.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/39.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/31.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/23.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/15.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/73.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/16.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/43.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/40.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/42.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/32.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/05.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/smiley/tusiji/30.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/data/cache/ajax.js?hkZ", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"LAST");

	web_url("forum.php_3", 
		"URL=http://my.nuaa.edu.cn/forum.php?mod=ajax&action=checkpostrule&ac=reply&inajax=1&ajaxtarget=vfastpostseccheck", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("forum.php_4", 
		"Action=http://my.nuaa.edu.cn/forum.php?mod=post&action=reply&fid=201&tid=306828&fromvf=1&extra=&replysubmit=yes&infloat=yes&handlekey=vfastpost&inajax=1", 
		"Method=POST", 
		"RecContentType=text/xml", 
		"Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=formhash", "Value=2ccb88a7", "ENDITEM", 
		"Name=message", "Value=软件测试用回帖请忽视", "ENDITEM", 
		"EXTRARES", 
		"Url=/data/cache/common_extra.js?hkZ", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/popupcredit_bg.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"LAST");

	web_url("forum.php_5", 
		"URL=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828&viewpid=4142809&from=&inajax=1&ajaxtarget=post_new", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/static/image/magic/anonymouspost.small.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"Url=/static/image/common/edit.gif", "Referer=http://my.nuaa.edu.cn/forum.php?mod=viewthread&tid=306828", "ENDITEM", 
		"LAST");

	return 0;
}
# 5 "c:\\documents and settings\\eagle\\my documents\\test\\\\combined_test.c" 2

# 1 "Action3.c" 1
Action3()
{

	web_add_cookie("kqNd_2132_sid=Qi4I76; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("myauth_uid=Ad2yQGwpLJSi%2FFsyBqabraq6RhACFToa6rGcFs7rtgIfxJgLHhURotdYm%2BgZH0CUDZSzRC35vdmDmp3IZHhj0s0%2BM6h2mgLhp321jJ%2FXEQwMoY7hRb3pQxyRM1O1JSx5X3Ryu25aFKxcmnYsw%2FG19wDYiGA8XQ9SfaoVLANs6t95ITuBZzmnQhiKVcA8RXUXBWqExMum7b5COmZzuVCVXLDYyHN0VVY%2Bm4xtg6KTNrcr2b587Qnn1T7%2FVTY2G6owyKmOWEg9GgKWhq4zBQw4JIj03gsYh8KKfxr71jXx1%2FntrInbk8NUGXGDDruDMQxv%2Fz72q%2FXLvkijIIk%2BR606HA%3D%3D; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_saltkey=G9u14R9f; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_lastvisit=1513735829; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_lastact=1513739529%09forum.php%09viewthread; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_ulastactivity=866524YF9Y23mlRG9gwDE9PQYc7U79tHUzO2u75V%2FTXosV3xjuex; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_auth=83d9rx9HlU4amCWITEKAYUv1Zgnu6LDhW%2B2yWZaH%2B%2Ft3dy%2FmdaSSEwhqNYblT17D63z2YFdFsAzoH0ZLbvzoBojHDSg; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_sendmail=1; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_noticeTitle=1; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_nofavfid=1; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_visitedfid=201; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_smile=5D1; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_lastact=1513739758%09portal.php%09; DOMAIN=my.nuaa.edu.cn");

	web_url("portal.php", 
		"URL=http://my.nuaa.edu.cn/portal.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/template/newzfj/images/bgimg.jpg", "ENDITEM", 
		"Url=/template/newzfj/images/toptb.png", "ENDITEM", 
		"Url=/template/newzfj/images/search.png", "ENDITEM", 
		"Url=/template/newzfj/images/weather.png", "ENDITEM", 
		"Url=/template/newzfj/images/switch_style.png", "ENDITEM", 
		"Url=/data/cache/common_extra.js?hkZ", "ENDITEM", 
		"Url=/static/image/common/arrwd.gif", "ENDITEM", 
		"Url=/static/image/common/user_online.gif", "ENDITEM", 
		"Url=/template/newzfj/images/notice_pm.png", "ENDITEM", 
		"Url=/template/newzfj/images/setup.png", "ENDITEM", 
		"Url=/static/image/common/qmenu.png", "ENDITEM", 
		"Url=/static/image/common/dot.gif", "ENDITEM", 
		"Url=/template/newzfj/images/myrepeats.png", "ENDITEM", 
		"Url=/template/newzfj/images/extra.png", "ENDITEM", 
		"Url=/template/newzfj/images/logout.png", "ENDITEM", 
		"Url=/static/image/common/ico_notice.png", "ENDITEM", 
		"Url=/static/image/common/close.gif", "ENDITEM", 
		"Url=/static/image/feed/mark_b.png", "ENDITEM", 
		"Url=/static/image/feed/task_b.png", "ENDITEM", 
		"Url=/static/image/feed/Qdao.png", "ENDITEM", 
		"Url=/static/image/feed/magic_b.png", "ENDITEM", 
		"Url=/static/image/feed/medal_b.png", "ENDITEM", 
		"Url=/static/image/feed/friend_b.png", "ENDITEM", 
		"Url=/static/image/feed/favorite_b.png", "ENDITEM", 
		"Url=/static/image/common/scrolltop.png", "ENDITEM", 
		"LAST");

	web_url("none", 
		"URL=http://my.nuaa.edu.cn/template/newzfj/images/none", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://my.nuaa.edu.cn/portal.php", 
		"Mode=HTML", 
		"LAST");

	web_url("mall", 
		"URL=http://my.nuaa.edu.cn/mall/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://my.nuaa.edu.cn/portal.php", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=Application/Common/Image/banner_repeat_mall.jpg", "ENDITEM", 
		"Url=Application/Common/Image/banner_mall.jpg", "ENDITEM", 
		"Url=Application/Common/Image/bg_mall.png", "ENDITEM", 
		"Url=Application/Common/Image/sold.png", "ENDITEM", 
		"Url=Application/Common/Image/logo.png", "ENDITEM", 
		"Url=Application/Common/Image/arrow.png", "ENDITEM", 
		"Url=Application/Common/Image/banner_center.png", "ENDITEM", 
		"Url=Application/Common/Image/want.png", "ENDITEM", 
		"Url=Application/Common/Image/sideToolbar.gif", "ENDITEM", 
		"Url=Application/Common/Image/page_left.png", "ENDITEM", 
		"Url=Application/Common/Image/circle.png", "ENDITEM", 
		"Url=Application/Common/Image/circle_right.png", "ENDITEM", 
		"Url=Application/Common/Image/page_right.png", "ENDITEM", 
		"Url=Application/Common/Image/dot.gif", "ENDITEM", 
		"Url=Application/Mall/Image/circle_hover.png", "ENDITEM", 
		"Url=../favicon.ico", "Referer=", "ENDITEM", 
		"LAST");

	lr_think_time(25);

	web_url("mall_2", 
		"URL=http://my.nuaa.edu.cn/mall/?m=mall&a=search&search_content=吉他&search_type=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("BAIDUID=340F75483FB7F2D59B9BF16012C54FE5:FG=1; DOMAIN=bdimg.share.baidu.com");

	web_add_cookie("BIDUPSID=340F75483FB7F2D59B9BF16012C54FE5; DOMAIN=bdimg.share.baidu.com");

	web_add_cookie("PSTM=1506177343; DOMAIN=bdimg.share.baidu.com");

	web_add_cookie("BAIDUID=340F75483FB7F2D59B9BF16012C54FE5:FG=1; DOMAIN=nsclick.baidu.com");

	web_add_cookie("BIDUPSID=340F75483FB7F2D59B9BF16012C54FE5; DOMAIN=nsclick.baidu.com");

	web_add_cookie("PSTM=1506177343; DOMAIN=nsclick.baidu.com");

	web_add_cookie("BAIDUID=340F75483FB7F2D59B9BF16012C54FE5:FG=1; DOMAIN=api.share.baidu.com");

	web_add_cookie("BIDUPSID=340F75483FB7F2D59B9BF16012C54FE5; DOMAIN=api.share.baidu.com");

	web_add_cookie("PSTM=1506177343; DOMAIN=api.share.baidu.com");

	lr_think_time(6);

	web_url("mall_3", 
		"URL=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=Application/Common/Image/chu_tri.png", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/js/share.js?v=89860593.js?cdnversion=420482", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/js/view/share_view.js?v=3ae6026d.js", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=Uploads/2017-06-11/Cut_593d0c46e73a2.JPG", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/js/share/select_api.js", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/js/view/image_view.js", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/js/share/share_api.js?v=226108fe.js", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/js/share/image_api.js", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/js/base/tangram.js?v=37768233.js", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/js/view/select_view.js?v=85fc7cec.js", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/js/share/api_base.js", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/js/view/view_base.js", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/js/component/partners.js?v=911c4302.js", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/css/share_style0_16.css?v=6aba13f0.css", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/img/share/icons_0_16.png?v=91362611.png", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/js/trans/logger.js?v=d16ec0e3.js", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://nsclick.baidu.com/v.gif?pid=307&type=3071&sign=&desturl=&linkid=jbehig3ou2l&apitype=1", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://api.share.baidu.com/v.gif?l=http%3A%2F%2Fmy.nuaa.edu.cn%2Fmall%2F%3Fm%3Dmall%26c%3Dgoods%26id%3D9043", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/css/share_popup.css?v=240f357d.css", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/css/select_share.css?v=15f56735.css", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/img/share/selectshare_close.png?v=1b34ee88.png", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"Url=http://bdimg.share.baidu.com/static/api/img/share/share-search-icon.png", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"LAST");

	lr_think_time(29);

	web_submit_data("mall_4", 
		"Action=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&a=talk_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=to_uid", "Value=536804", "ENDITEM", 
		"Name=to_username", "Value=jr973291571", "ENDITEM", 
		"Name=content", "Value=软件测试回帖不要理会", "ENDITEM", 
		"Name=goods_id", "Value=9043", "ENDITEM", 
		"Name=goods_name", "Value=吉他", "ENDITEM", 
		"EXTRARES", 
		"Url=http://bdimg.share.baidu.com/static/api/js/component/anticheat.js?v=44b9b245.js", "Referer=http://my.nuaa.edu.cn/mall/?m=mall&c=goods&id=9043", "ENDITEM", 
		"LAST");

	return 0;
}
# 6 "c:\\documents and settings\\eagle\\my documents\\test\\\\combined_test.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 7 "c:\\documents and settings\\eagle\\my documents\\test\\\\combined_test.c" 2

