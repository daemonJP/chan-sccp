/*!
 * \file 	sccp_pbx_wrapper.h
 * \brief 	SCCP PBX Wrapper Header
 * \author 	Diederik de Groot <ddegroot [at] users.sourceforge.net>
 * \note        This program is free software and may be modified and distributed under the terms of the GNU Public License.
 *		See the LICENSE file at the top of the source tree.
 *
 * $Date: 2010-10-23 20:04:30 +0200 (Sat, 23 Oct 2010) $
 * $Revision: 2044 $  
 */
#ifndef __SCCP_PBX_WRAPPER_H
#    define __SCCP_PBX_WRAPPER_H

// sccp redefinitions
#define sccp_strdup ast_strdup
#define sccp_strdupa ast_strdupa
//#define sccp_copy_string ast_copy_string
#define sccp_strlen_zero ast_strlen_zero

// codec / format redefinitions
#define pbx_codec_pref_index ast_codec_pref_index
#define pbx_codec_pref_getsize ast_codec_pref_getsize
#define pbx_codec2str ast_codec2str

// application / module / cli redefinitions
#define pbx_register_application ast_register_application
#define pbx_unregister_application ast_unregister_application
#define pbx_custom_function_register ast_custom_function_register
#define pbx_custom_function_unregister ast_custom_function_unregister
#define pbx_channel_register ast_channel_register
#define pbx_channel_register_ex ast_channel_register_ex
#define pbx_channel_unregister ast_channel_unregister
#define pbx_rtp_proto_register ast_rtp_proto_register
#define pbx_rtp_proto_unregister ast_rtp_proto_unregister
#define pbx_rtp_glue_register ast_rtp_glue_register
#define pbx_rtp_glue_unregister ast_rtp_glue_unregister

// general redefinitions
#define pbx_check_hangup ast_check_hangup
#define pbx_channel_lock ast_channel_lock
#define pbx_channel_unlock ast_channel_unlock
#define pbx_sched_wait ast_sched_wait
#define pbx_io_wait ast_io_wait
#define pbx_gethostbyname ast_gethostbyname
#define pbx_apply_ha ast_apply_ha
#define pbx_pickup_ext ast_pickup_ext
#define pbx_db_gettree ast_db_gettree
#define pbx_db_put ast_db_put
#define pbx_db_get ast_db_get


// utilities
char *get_pbx_callerid_name(struct ast_channel *ast_chan);
char *get_pbx_callerid_number(struct ast_channel *ast_chan);
sccp_callinfo_t *get_pbx_callerid(struct ast_channel * ast_chan);
int set_pbx_callerid(struct ast_channel *ast_chan, sccp_callinfo_t * callInfo);

// replacement implementations
struct ast_channel *pbx_channel_walk_locked(struct ast_channel *target);
const char *pbx_inet_ntoa(struct in_addr ia);
int pbx_rtp_get_peer(struct ast_rtp *rtp, struct sockaddr_in *them);
void pbx_rtp_set_peer(struct ast_rtp *rtp, struct sockaddr_in *them);

#endif
