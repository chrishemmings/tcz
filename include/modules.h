/*

.-----------------------------------------------------------------------------.
| The Chatting Zone (TCZ)                            (C) J.P.Boggis 1993-2004 |
| ~~~~~~~~~~~~~~~~~~~~~~~                            ~~~~~~~~~~~~~~~~~~~~~~~~ |
|-----------------------------------------------------------------------------|
| MODULES.H  -  Table of source code modules and pointers to author           |
|               information.                                                  |
|--------------------------[ Copyright Information ]--------------------------|
| This program is free software; you can redistribute it and/or modify        |
| it under the terms of the GNU General Public License as published by        |
| the Free Software Foundation; either version 2 of the License, or           |
| (at your option) any later version.                                         |
|                                                                             |
| This program is distributed in the hope that it will be useful,             |
| but WITHOUT ANY WARRANTY; without even the implied warranty of              |
| MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the               |
| GNU General Public License for more details.                                |
|                                                                             |
| You should have received a copy of the GNU General Public License           |
| along with this program; if not, write to the Free Software                 |
| Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA   |
|-----------------------[ Credits & Acknowledgements ]------------------------|
| For full details of authors and contributers to TCZ, please see the files   |
| MODULES and CONTRIBUTERS.  For copyright and license information, please    |
| see LICENSE and COPYRIGHT.                                                  |
|                                                                             |
| Module originally designed and written by:  J.P.Boggis 21/05/2000.          |
|-------------------------[ The Chatting Zone (TCZ) ]-------------------------|
|                For more information about TCZ, please visit:                |
|                   http://www.sourceforge.net/projects/tcz                   |
`-----------------------------------------------------------------------------'

  $Id$

*/


#ifndef NULL
   #define NULL 0
#endif


/* ---->  Author information for individual modules  <---- */
#include "modules_c.h"
#include "modules_h.h"


/* ========================================= */
/*  TABLE OF MODULES AND AUTHOR INFORMATION  */
/* ========================================= */


/* ---->  Author details  <---- */
struct module_details modules[] = {

       /* ---->  '*.c' source files  <---- */

/*      The first four fields      */
/*      are computed at run-time.  */

/*      Next  Date  Date                                                                                                                       */
/*      Ptr:  From: To:      Module Name:          Pointer to module date:         Pointer to module description:  Pointer to module authors:  */
/*      ~~~~  ~~~~~ ~~~      ~~~~~~~~~~~~          ~~~~~~~~~~~~~~~~~~~~~~~         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~~~~~~~~~~  */
       {NULL, NULL, NULL, 0, "admin.c",            module_admin_c_date,            module_admin_c_desc,            module_admin_c_authors},
       {NULL, NULL, NULL, 0, "alias.c",            module_alias_c_date,            module_alias_c_desc,            module_alias_c_authors},
       {NULL, NULL, NULL, 0, "array.c",            module_array_c_date,            module_array_c_desc,            module_array_c_authors},
       {NULL, NULL, NULL, 0, "banish.c",           module_banish_c_date,           module_banish_c_desc,           module_banish_c_authors},
       {NULL, NULL, NULL, 0, "bbs.c",              module_bbs_c_date,              module_bbs_c_desc,              module_bbs_c_authors},
       {NULL, NULL, NULL, 0, "boolexp.c",          module_boolexp_c_date,          module_boolexp_c_desc,          module_boolexp_c_authors},
       {NULL, NULL, NULL, 0, "calculate.c",        module_calculate_c_date,        module_calculate_c_desc,        module_calculate_c_authors},
       {NULL, NULL, NULL, 0, "channels.c",         module_channels_c_date,         module_channels_c_desc,         module_channels_c_authors},
       {NULL, NULL, NULL, 0, "character.c",        module_character_c_date,        module_character_c_desc,        module_character_c_authors},
       {NULL, NULL, NULL, 0, "combat.c",           module_combat_c_date,           module_combat_c_desc,           module_combat_c_authors},
       {NULL, NULL, NULL, 0, "command.c",          module_command_c_date,          module_command_c_desc,          module_command_c_authors},
       {NULL, NULL, NULL, 0, "communication.c",    module_communication_c_date,    module_communication_c_desc,    module_communication_c_authors},
       {NULL, NULL, NULL, 0, "compression.c",      module_compression_c_date,      module_compression_c_desc,      module_compression_c_authors},
       {NULL, NULL, NULL, 0, "container.c",        module_container_c_date,        module_container_c_desc,        module_container_c_authors},
       {NULL, NULL, NULL, 0, "create.c",           module_create_c_date,           module_create_c_desc,           module_create_c_authors},
       {NULL, NULL, NULL, 0, "db.c",               module_db_c_date,               module_db_c_desc,               module_db_c_authors},
       {NULL, NULL, NULL, 0, "destroy.c",          module_destroy_c_date,          module_destroy_c_desc,          module_destroy_c_authors},
       {NULL, NULL, NULL, 0, "edit.c",             module_edit_c_date,             module_edit_c_desc,             module_edit_c_authors},
       {NULL, NULL, NULL, 0, "event.c",            module_event_c_date,            module_event_c_desc,            module_event_c_authors},
       {NULL, NULL, NULL, 0, "feelings.c",         module_feelings_c_date,         module_feelings_c_desc,         module_feelings_c_authors},
       {NULL, NULL, NULL, 0, "finance.c",          module_finance_c_date,          module_finance_c_desc,          module_finance_c_authors},
       {NULL, NULL, NULL, 0, "friends.c",          module_friends_c_date,          module_friends_c_desc,          module_friends_c_authors},
       {NULL, NULL, NULL, 0, "global.c",           module_global_c_date,           module_global_c_desc,           module_global_c_authors},
       {NULL, NULL, NULL, 0, "group.c",            module_group_c_date,            module_group_c_desc,            module_group_c_authors},
       {NULL, NULL, NULL, 0, "help.c",             module_help_c_date,             module_help_c_desc,             module_help_c_authors},
       {NULL, NULL, NULL, 0, "html.c",             module_html_c_date,             module_html_c_desc,             module_html_c_authors},
       {NULL, NULL, NULL, 0, "interface.c",        module_interface_c_date,        module_interface_c_desc,        module_interface_c_authors},
       {NULL, NULL, NULL, 0, "lists.c",            module_lists_c_date,            module_lists_c_desc,            module_lists_c_authors},
       {NULL, NULL, NULL, 0, "logfiles.c",         module_logfiles_c_date,         module_logfiles_c_desc,         module_logfiles_c_authors},
       {NULL, NULL, NULL, 0, "look.c",             module_look_c_date,             module_look_c_desc,             module_look_c_authors},
       {NULL, NULL, NULL, 0, "mail.c",             module_mail_c_date,             module_mail_c_desc,             module_mail_c_authors},
       {NULL, NULL, NULL, 0, "map.c",              module_map_c_date,              module_map_c_desc,              module_map_c_authors},
       {NULL, NULL, NULL, 0, "match.c",            module_match_c_date,            module_match_c_desc,            module_match_c_authors},
       {NULL, NULL, NULL, 0, "modules.c",          module_modules_c_date,          module_modules_c_desc,          module_modules_c_authors},
       {NULL, NULL, NULL, 0, "move.c",             module_move_c_date,             module_move_c_desc,             module_move_c_authors},
       {NULL, NULL, NULL, 0, "options.c",          module_options_c_date,          module_options_c_desc,          module_options_c_authors},
       {NULL, NULL, NULL, 0, "output.c",           module_output_c_date,           module_output_c_desc,           module_output_c_authors},
       {NULL, NULL, NULL, 0, "pager.c",            module_pager_c_date,            module_pager_c_desc,            module_pager_c_authors},
       {NULL, NULL, NULL, 0, "pagetell.c",         module_pagetell_c_date,         module_pagetell_c_desc,         module_pagetell_c_authors},
       {NULL, NULL, NULL, 0, "predicates.c",       module_predicates_c_date,       module_predicates_c_desc,       module_predicates_c_authors},
       {NULL, NULL, NULL, 0, "preferences.c",      module_preferences_c_date,      module_preferences_c_desc,      module_preferences_c_authors},
       {NULL, NULL, NULL, 0, "prompt.c",           module_prompt_c_date,           module_prompt_c_desc,           module_prompt_c_authors},
       {NULL, NULL, NULL, 0, "qmwlogsocket.c",     module_qmwlogsocket_c_date,     module_qmwlogsocket_c_desc,     module_qmwlogsocket_c_authors},
       {NULL, NULL, NULL, 0, "query.c",            module_query_c_date,            module_query_c_desc,            module_query_c_authors},
       {NULL, NULL, NULL, 0, "request.c",          module_request_c_date,          module_request_c_desc,          module_request_c_authors},
       {NULL, NULL, NULL, 0, "sanity.c",           module_sanity_c_date,           module_sanity_c_desc,           module_sanity_c_authors},
       {NULL, NULL, NULL, 0, "search.c",           module_search_c_date,           module_search_c_desc,           module_search_c_authors},
       {NULL, NULL, NULL, 0, "selection.c",        module_selection_c_date,        module_selection_c_desc,        module_selection_c_authors},
       {NULL, NULL, NULL, 0, "server.c",           module_server_c_date,           module_server_c_desc,           module_server_c_authors},
       {NULL, NULL, NULL, 0, "serverinfo.c",       module_serverinfo_c_date,       module_serverinfo_c_desc,       module_serverinfo_c_authors},
       {NULL, NULL, NULL, 0, "set.c",              module_set_c_date,              module_set_c_desc,              module_set_c_authors},
       {NULL, NULL, NULL, 0, "sites.c",            module_sites_c_date,            module_sites_c_desc,            module_sites_c_authors},
       {NULL, NULL, NULL, 0, "statistics.c",       module_statistics_c_date,       module_statistics_c_desc,       module_statistics_c_authors},
       {NULL, NULL, NULL, 0, "stringutils.c",      module_stringutils_c_date,      module_stringutils_c_desc,      module_stringutils_c_authors},
       {NULL, NULL, NULL, 0, "substitute.c",       module_substitute_c_date,       module_substitute_c_desc,       module_substitute_c_authors},
       {NULL, NULL, NULL, 0, "tcz.c",              module_tcz_c_date,              module_tcz_c_desc,              module_tcz_c_authors},
       {NULL, NULL, NULL, 0, "temp.c",             module_temp_c_date,             module_temp_c_desc,             module_temp_c_authors},
       {NULL, NULL, NULL, 0, "termcap.c",          module_termcap_c_date,          module_termcap_c_desc,          module_termcap_c_authors},
       {NULL, NULL, NULL, 0, "unparse.c",          module_unparse_c_date,          module_unparse_c_desc,          module_unparse_c_authors},
       {NULL, NULL, NULL, 0, "userlist.c",         module_userlist_c_date,         module_userlist_c_desc,         module_userlist_c_authors},
       {NULL, NULL, NULL, 0, "yearlyevents.c",     module_yearlyevents_c_date,     module_yearlyevents_c_desc,     module_yearlyevents_c_authors},


       /* ---->  '*.h' header files  <---- */

/*      The first four fields      */
/*      are computed at run-time.  */

/*      Next  Date  Date                                                                                                                       */
/*      Ptr:  From: To:      Module Name:          Pointer to module date:         Pointer to module description:  Pointer to module authors:  */
/*      ~~~~  ~~~~~ ~~~      ~~~~~~~~~~~~          ~~~~~~~~~~~~~~~~~~~~~~~         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~~~~~~~~~~  */
       {NULL, NULL, NULL, 0, "at_cmdtable.h",      module_at_cmdtable_h_date,      module_at_cmdtable_h_desc,      module_at_cmdtable_h_authors},
       {NULL, NULL, NULL, 0, "bank_cmdtable.h",    module_bank_cmdtable_h_date,    module_bank_cmdtable_h_desc,    module_bank_cmdtable_h_authors},
       {NULL, NULL, NULL, 0, "bbs_cmdtable.h",     module_bbs_cmdtable_h_date,     module_bbs_cmdtable_h_desc,     module_bbs_cmdtable_h_authors},
       {NULL, NULL, NULL, 0, "boolean_flags.h",    module_boolean_flags_h_date,    module_boolean_flags_h_desc,    module_boolean_flags_h_authors},
       {NULL, NULL, NULL, 0, "colourmap.h",        module_colourmap_h_date,        module_colourmap_h_desc,        module_colourmap_h_authors},
       {NULL, NULL, NULL, 0, "command.h",          module_command_h_date,          module_command_h_desc,          module_command_h_authors},
       {NULL, NULL, NULL, 0, "config.h",           module_config_h_date,           module_config_h_desc,           module_config_h_authors},
       {NULL, NULL, NULL, 0, "db.h",               module_db_h_date,               module_db_h_desc,               module_db_h_authors},
       {NULL, NULL, NULL, 0, "db.h",               module_descriptor_flags_h_date, module_descriptor_flags_h_desc, module_descriptor_flags_h_authors},
       {NULL, NULL, NULL, 0, "edit_cmdtable.h",    module_edit_cmdtable_h_date,    module_edit_cmdtable_h_desc,    module_edit_cmdtable_h_authors},
       {NULL, NULL, NULL, 0, "emailforward.h",     module_emailforward_h_date,     module_emailforward_h_desc,     module_emailforward_h_authors},
       {NULL, NULL, NULL, 0, "externs.h",          module_externs_h_date,          module_externs_h_desc,          module_externs_h_authors},
       {NULL, NULL, NULL, 0, "fields.h",           module_fields_h_date,           module_fields_h_desc,           module_fields_h_authors},
       {NULL, NULL, NULL, 0, "flagset.h",          module_flagset_h_date,          module_flagset_h_desc,          module_flagset_h_authors},
       {NULL, NULL, NULL, 0, "friend_flags.h",     module_friend_flags_h_date,     module_friend_flags_h_desc,     module_friend_flags_h_authors},
       {NULL, NULL, NULL, 0, "general_cmdtable.h", module_general_cmdtable_h_date, module_general_cmdtable_h_desc, module_general_cmdtable_h_authors},
       {NULL, NULL, NULL, 0, "html.h",             module_html_h_date,             module_html_h_desc,             module_html_h_authors},
       {NULL, NULL, NULL, 0, "html_entities.h",    module_html_entities_h_date,    module_html_entities_h_desc,    module_html_entities_h_authors},
       {NULL, NULL, NULL, 0, "html_tags.h",        module_html_tags_h_date,        module_html_tags_h_desc,        module_html_tags_h_authors},
       {NULL, NULL, NULL, 0, "logfile_table.h",    module_logfile_table_h_date,    module_logfile_table_h_desc,    module_logfile_table_h_authors},
       {NULL, NULL, NULL, 0, "logfiles.h",         module_logfiles_h_date,         module_logfiles_h_desc,         module_logfiles_h_authors},
       {NULL, NULL, NULL, 0, "match.h",            module_match_h_date,            module_match_h_desc,            module_match_h_authors},
       {NULL, NULL, NULL, 0, "modules.h",          module_modules_h_date,          module_modules_h_desc,          module_modules_h_authors},
       {NULL, NULL, NULL, 0, "modules_authors.h",  module_modules_authors_h_date,  module_modules_authors_h_desc,  module_modules_authors_h_authors},
       {NULL, NULL, NULL, 0, "modules_c.h",        module_modules_c_h_date,        module_modules_c_h_desc,        module_modules_c_h_authors},
       {NULL, NULL, NULL, 0, "modules_h.h",        module_modules_h_h_date,        module_modules_h_h_desc,        module_modules_h_h_authors},
       {NULL, NULL, NULL, 0, "object_types.h",     module_object_types_h_date,     module_object_types_h_desc,     module_object_types_h_authors},
       {NULL, NULL, NULL, 0, "objectlists.h",      module_objectlists_h_date,      module_objectlists_h_desc,      module_objectlists_h_authors},
       {NULL, NULL, NULL, 0, "primary_flags.h",    module_primary_flags_h_date,    module_primary_flags_h_desc,    module_primary_flags_h_authors},
       {NULL, NULL, NULL, 0, "prompts.h",          module_prompts_h_date,          module_prompts_h_desc,          module_prompts_h_authors},
       {NULL, NULL, NULL, 0, "query_cmdtable.h",   module_query_cmdtable_h_date,   module_query_cmdtable_h_desc,   module_query_cmdtable_h_authors},
       {NULL, NULL, NULL, 0, "quota.h",            module_quota_h_date,            module_quota_h_desc,            module_quota_h_authors},
       {NULL, NULL, NULL, 0, "search.h",           module_search_h_date,           module_search_h_desc,           module_search_h_authors},
       {NULL, NULL, NULL, 0, "secondary_flags.h",  module_secondary_flags_h_date,  module_secondary_flags_h_desc,  module_secondary_flags_h_authors},
       {NULL, NULL, NULL, 0, "short_cmdtable.h",   module_short_cmdtable_h_date,   module_short_cmdtable_h_desc,   module_short_cmdtable_h_authors},
       {NULL, NULL, NULL, 0, "signallist.h",       module_signallist_h_date,       module_signallist_h_desc,       module_signallist_h_authors},
       {NULL, NULL, NULL, 0, "smileys.h",          module_smileys_h_date,          module_smileys_h_desc,          module_smileys_h_authors},
       {NULL, NULL, NULL, 0, "structures.h",       module_structures_h_date,       module_structures_h_desc,       module_structures_h_authors},
       {NULL, NULL, NULL, 0, "teleport.h",         module_teleport_h_date,         module_teleport_h_desc,         module_teleport_h_authors},
       {NULL, NULL, NULL, 0, "yearlyevents.h",     module_yearlyevents_h_date,     module_yearlyevents_h_desc,     module_yearlyevents_h_authors},
       {NULL, NULL, NULL, 0, NULL,                 NULL,                           NULL,                           NULL}
};
