/*

.-----------------------------------------------------------------------------.
| The Chatting Zone (TCZ)                            (C) J.P.Boggis 1993-2004 |
| ~~~~~~~~~~~~~~~~~~~~~~~                            ~~~~~~~~~~~~~~~~~~~~~~~~ |
|-----------------------------------------------------------------------------|
| BBS_CMDTABLE.H  -  Table of BBS commands.                                   |
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
| Module originally designed and written by:  J.P.Boggis 03/06/1999           |
|-------------------------[ The Chatting Zone (TCZ) ]-------------------------|
|                For more information about TCZ, please visit:                |
|                   http://www.sourceforge.net/projects/tcz                   |
`-----------------------------------------------------------------------------'

  $Id$

*/


/* ---->  BBS command table  <---- */
struct cmd_table bbs_cmds[] = {
       {OTHER_COMMAND, "a",                      (void *) comms_ask,                 0, 0, 0},
       {BBS_COMMAND,   "accesslevel",            (void *) bbs_accesslevel,           0, 0, 0},
       {BBS_COMMAND,   "ad",                     (void *) bbs_add,                   0, 0, 0},
       {BBS_COMMAND,   "add",                    (void *) bbs_add,                   0, 0, 0},
       {BBS_COMMAND,   "addanon",                (void *) bbs_add,                   1, 0, 0},
       {BBS_COMMAND,   "addanonymous",           (void *) bbs_add,                   1, 0, 0},
       {BBS_COMMAND,   "addmessage",             (void *) bbs_add,                   0, 0, 0},
       {BBS_COMMAND,   "addtopic",               (void *) bbs_addtopic,              0, 0, 0},
       {BBS_COMMAND,   "allowadd",               (void *) bbs_setparameter,          TOPIC_ADD, 0, 0},
       {BBS_COMMAND,   "allowadding",            (void *) bbs_setparameter,          TOPIC_ADD, 0, 0},
       {BBS_COMMAND,   "allowanon",              (void *) bbs_setparameter,          TOPIC_ANON, 0, 0},
       {BBS_COMMAND,   "allowanonymous",         (void *) bbs_setparameter,          TOPIC_ANON, 0, 0},
       {BBS_COMMAND,   "allowanonmessages",      (void *) bbs_setparameter,          TOPIC_ANON, 0, 0},
       {BBS_COMMAND,   "allowanonymousmessages", (void *) bbs_setparameter,          TOPIC_ANON, 0, 0},
       {BBS_COMMAND,   "anon",                   (void *) bbs_anonymous,             0, 0, 0},
       {BBS_COMMAND,   "anonymous",              (void *) bbs_anonymous,             0, 0, 0},
       {BBS_COMMAND,   "anonmessage",            (void *) bbs_anonymous,             0, 0, 0},
       {BBS_COMMAND,   "anonymousmessage",       (void *) bbs_anonymous,             0, 0, 0},
       {BBS_COMMAND,   "append",                 (void *) bbs_append,                0, 0, 0},
       {BBS_COMMAND,   "appendanon",             (void *) bbs_append,                1, 0, 0},
       {BBS_COMMAND,   "appendmessage",          (void *) bbs_append,                0, 0, 0},
       {BBS_COMMAND,   "appendanonymous",        (void *) bbs_append,                1, 0, 0},
       {BBS_COMMAND,   "bbs",                    (void *) bbs_bbs,                   0, 0, 0},
       {BBS_COMMAND,   "bbsroom",                (void *) bbs_bbs,                   0, 0, 0},
       {OTHER_COMMAND, "c",                      (void *) comms_chat,                0, 0, 0},
       {BBS_COMMAND,   "cat",                    (void *) bbs_view,                  0, 0, 0},
       {BBS_COMMAND,   "catchup",                (void *) bbs_ignore,                0, 0, 0},
       {BBS_COMMAND,   "cd",                     (void *) bbs_topic,                 0, 0, 0},
       {BBS_COMMAND,   "censor",                 (void *) bbs_setparameter,          TOPIC_CENSOR, 0, 0},
       {BBS_COMMAND,   "censored",               (void *) bbs_setparameter,          TOPIC_CENSOR, 0, 0},
       {BBS_COMMAND,   "censorship",             (void *) bbs_setparameter,          TOPIC_CENSOR, 0, 0},
       {OTHER_COMMAND, "cha",                    (void *) comms_chat,                0, 0, 0},
       {BBS_COMMAND,   "change",                 (void *) bbs_modify,                0, 0, 0},
       {BBS_COMMAND,   "changemessage",          (void *) bbs_modify,                0, 0, 0},
       {BBS_COMMAND,   "chdirectory",            (void *) bbs_topic,                 0, 0, 0},
       {BBS_COMMAND,   "chown",                  (void *) bbs_ownertopic,            0, 0, 0},
       {BBS_COMMAND,   "chowntopic",             (void *) bbs_ownertopic,            0, 0, 0},
       {BBS_COMMAND,   "copy",                   (void *) bbs_copy,                  0, 0, 0},
       {BBS_COMMAND,   "copymessage",            (void *) bbs_copy,                  0, 0, 0},
       {BBS_COMMAND,   "cp",                     (void *) bbs_copy,                  0, 0, 0},
       {BBS_COMMAND,   "cpmessage",              (void *) bbs_copy,                  0, 0, 0},
       {BBS_COMMAND,   "cyclic",                 (void *) bbs_setparameter,          TOPIC_CYCLIC, 0, 0},
       {BBS_COMMAND,   "cyclicdelete",           (void *) bbs_setparameter,          TOPIC_CYCLIC, 0, 0},
       {BBS_COMMAND,   "cyclicdeletion",         (void *) bbs_setparameter,          TOPIC_CYCLIC, 0, 0},
       {BBS_COMMAND,   "d",                      (void *) bbs_delete,                0, 0, 0},
       {BBS_COMMAND,   "de",                     (void *) bbs_delete,                0, 0, 0},
       {BBS_COMMAND,   "del",                    (void *) bbs_delete,                0, 0, 0},
       {BBS_COMMAND,   "delete",                 (void *) bbs_delete,                0, 0, 0},
       {BBS_COMMAND,   "deletemessage",          (void *) bbs_delete,                0, 0, 0},
       {BBS_COMMAND,   "deletetopic",            (void *) bbs_removetopic,           0, 0, 0},
       {BBS_COMMAND,   "deltopic",               (void *) bbs_removetopic,           0, 0, 0},
       {BBS_COMMAND,   "desctopic",              (void *) bbs_desctopic,             0, 0, 0},
       {BBS_COMMAND,   "describetopic",          (void *) bbs_desctopic,             0, 0, 0},
       {BBS_COMMAND,   "details",                (void *) bbs_settings,              0, 0, 0},
       {BBS_COMMAND,   "dir",                    (void *) bbs_topics,                0, 0, 0},
       {BBS_COMMAND,   "directory",              (void *) bbs_topics,                0, 0, 0},
       {OTHER_COMMAND, "e",                      (void *) comms_pose,                0, 0, 0},
       {BBS_COMMAND,   "er",                     (void *) bbs_delete,                0, 0, 0},
       {BBS_COMMAND,   "erase",                  (void *) bbs_delete,                0, 0, 0},
       {BBS_COMMAND,   "erasemessage",           (void *) bbs_delete,                0, 0, 0},
       {BBS_COMMAND,   "erasetopic",             (void *) bbs_removetopic,           0, 0, 0},
       {OTHER_COMMAND, "fi",                     (void *) look_scan,                 0, 0, 0},
       {BBS_COMMAND,   "find",                   (void *) bbs_view,                  2, 0, 0},
       {BBS_COMMAND,   "findmessages",           (void *) bbs_view,                  2, 0, 0},
       {BBS_COMMAND,   "findtopics",             (void *) bbs_view,                  2, 0, 0},
       {BBS_COMMAND,   "findsubtopics",          (void *) bbs_view,                  2, 0, 0},
       {BBS_COMMAND,   "formatting",             (void *) bbs_setparameter,          TOPIC_FORMAT, 0, 0},
       {OTHER_COMMAND, "help",                   (void *) help_main,                 0, 0, 0},
       {BBS_COMMAND,   "highlighting",           (void *) bbs_setparameter,          TOPIC_HILIGHT, 0, 0},
       {BBS_COMMAND,   "hilighting",             (void *) bbs_setparameter,          TOPIC_HILIGHT, 0, 0},
       {BBS_COMMAND,   "ign",                    (void *) bbs_unread,                2, 0, 0},
       {BBS_COMMAND,   "ignore",                 (void *) bbs_ignore,                0, 0, 0},
       {BBS_COMMAND,   "ignored",                (void *) bbs_unread,                2, 0, 0},
       {BBS_COMMAND,   "ignoredunread",          (void *) bbs_unread,                2, 0, 0},
       {BBS_COMMAND,   "ignoreunread",           (void *) bbs_ignore,                0, 0, 0},
       {BBS_COMMAND,   "info",                   (void *) bbs_settings,              0, 0, 0},
       {BBS_COMMAND,   "information",            (void *) bbs_settings,              0, 0, 0},
       {OTHER_COMMAND, "l",                      (void *) look_at,                   1, 0, 0},
       {BBS_COMMAND,   "la",                     (void *) bbs_latest,                0, 0, 0},
       {BBS_COMMAND,   "latest",                 (void *) bbs_latest,                0, 0, 0},
       {BBS_COMMAND,   "less",                   (void *) bbs_view,                  0, 0, 0},
       {BBS_COMMAND,   "limit",                  (void *) bbs_messagelimit,          0, 0, 0},
       {BBS_COMMAND,   "list",                   (void *) bbs_topics,                0, 0, 0},
       {BBS_COMMAND,   "listreaders",            (void *) bbs_readers,               0, 0, 0},
       {BBS_COMMAND,   "listtopics",             (void *) bbs_topics,                0, 0, 0},
       {BBS_COMMAND,   "ls",                     (void *) bbs_view,                  0, 0, 0},
       {OTHER_COMMAND, "m",                      (void *) mail_main,                 0, 0, 0},
       {BBS_COMMAND,   "md",                     (void *) bbs_addtopic,              0, 0, 0},
       {BBS_COMMAND,   "me",                     (void *) bbs_view,                  0, 0, 0},
       {BBS_COMMAND,   "menu",                   (void *) bbs_topic,                 0, 0, 0},
       {BBS_COMMAND,   "messagelimit",           (void *) bbs_messagelimit,          0, 0, 0},
       {BBS_COMMAND,   "messages",               (void *) bbs_view,                  0, 1, 0},
       {BBS_COMMAND,   "mkdir",                  (void *) bbs_addtopic,              0, 0, 0},
       {BBS_COMMAND,   "modify",                 (void *) bbs_modify,                0, 0, 0},
       {BBS_COMMAND,   "modifymessage",          (void *) bbs_modify,                0, 0, 0},
       {BBS_COMMAND,   "mortaladd",              (void *) bbs_setparameter,          TOPIC_MORTALADD, 0, 0},
       {BBS_COMMAND,   "mortaladding",           (void *) bbs_setparameter,          TOPIC_MORTALADD, 0, 0},
       {BBS_COMMAND,   "move",                   (void *) bbs_move,                  0, 0, 0},
       {BBS_COMMAND,   "movemessage",            (void *) bbs_move,                  0, 0, 0},
       {BBS_COMMAND,   "mv",                     (void *) bbs_move,                  0, 0, 0},
       {BBS_COMMAND,   "mvmessage",              (void *) bbs_move,                  0, 0, 0},
       {BBS_COMMAND,   "n",                      (void *) bbs_unread,                1, 0, 0},
       {BBS_COMMAND,   "new",                    (void *) bbs_unread,                1, 0, 0},
       {BBS_COMMAND,   "newestmessages",         (void *) bbs_latest,                0, 0, 0},
       {BBS_COMMAND,   "newmessage",             (void *) bbs_add,                   0, 0, 0},
       {BBS_COMMAND,   "newmessages",            (void *) bbs_latest,                0, 0, 0},
       {BBS_COMMAND,   "news",                   (void *) bbs_news,                  0, 0, 0},
       {BBS_COMMAND,   "newtopic",               (void *) bbs_addtopic,              0, 0, 0},
       {BBS_COMMAND,   "owner",                  (void *) bbs_owner,                 0, 0, 0},
       {BBS_COMMAND,   "ownermessage",           (void *) bbs_owner,                 0, 0, 0},
       {BBS_COMMAND,   "ownertopic",             (void *) bbs_ownertopic,            0, 0, 0},
       {OTHER_COMMAND, "pa",                     (void *) pagetell_send,             0, 0, 0},
       {BBS_COMMAND,   "params",                 (void *) bbs_settings,              0, 0, 0},
       {BBS_COMMAND,   "parameters",             (void *) bbs_settings,              0, 0, 0},
       {BBS_COMMAND,   "post",                   (void *) bbs_add,                   0, 0, 0},
       {BBS_COMMAND,   "r",                      (void *) bbs_view,                  0, 0, 0},
       {BBS_COMMAND,   "rd",                     (void *) bbs_removetopic,           0, 0, 0},
       {BBS_COMMAND,   "re",                     (void *) bbs_view,                  0, 0, 0},
       {BBS_COMMAND,   "read",                   (void *) bbs_view,                  0, 0, 0},
       {BBS_COMMAND,   "readanon",               (void *) bbs_view,                  1, 0, 0},
       {BBS_COMMAND,   "readanonymous",          (void *) bbs_view,                  1, 0, 0},
       {BBS_COMMAND,   "readers",                (void *) bbs_readers,               0, 0, 0},
       {BBS_COMMAND,   "readmessage",            (void *) bbs_view,                  0, 0, 0},
       {BBS_COMMAND,   "remove",                 (void *) bbs_delete,                0, 0, 0},
       {BBS_COMMAND,   "removemessage",          (void *) bbs_delete,                0, 0, 0},
       {BBS_COMMAND,   "removetopic",            (void *) bbs_removetopic,           0, 0, 0},
       {BBS_COMMAND,   "ren",                    (void *) bbs_subject,               0, 0, 0},
       {BBS_COMMAND,   "rename",                 (void *) bbs_subject,               0, 0, 0},
       {BBS_COMMAND,   "renamemessage",          (void *) bbs_subject,               0, 0, 0},
       {BBS_COMMAND,   "renametopic",            (void *) bbs_renametopic,           0, 0, 0},
       {BBS_COMMAND,   "rentopic",               (void *) bbs_renametopic,           0, 0, 0},
       {BBS_COMMAND,   "replies",                (void *) bbs_view,                  0, 2, 0},
       {BBS_COMMAND,   "reply",                  (void *) bbs_reply,                 0, 0, 0},
       {BBS_COMMAND,   "replyanon",              (void *) bbs_reply,                 1, 0, 0},
       {BBS_COMMAND,   "replyanonymous",         (void *) bbs_reply,                 1, 0, 0},
       {BBS_COMMAND,   "replymessage",           (void *) bbs_reply,                 0, 0, 0},
       {BBS_COMMAND,   "rm",                     (void *) bbs_delete,                0, 0, 0},
       {BBS_COMMAND,   "rmdir",                  (void *) bbs_removetopic,           0, 0, 0},
       {BBS_COMMAND,   "rmmessage",              (void *) bbs_delete,                0, 0, 0},
       {BBS_COMMAND,   "rmtopic",                (void *) bbs_removetopic,           0, 0, 0},
       {OTHER_COMMAND, "s",                      (void *) comms_say,                 0, 0, 0},
       {BBS_COMMAND,   "se",                     (void *) bbs_summary,               0, 0, 0},
       {BBS_COMMAND,   "search",                 (void *) bbs_view,                  2, 0, 0},
       {BBS_COMMAND,   "searchmessages",         (void *) bbs_view,                  2, 0, 0},
       {BBS_COMMAND,   "searchsubtopics",        (void *) bbs_view,                  2, 0, 0},
       {BBS_COMMAND,   "searchtopics",           (void *) bbs_view,                  2, 0, 0},
       {OTHER_COMMAND, "set",                    (void *) set_preferences,           0, 0, 0},
       {BBS_COMMAND,   "settings",               (void *) bbs_settings,              0, 0, 0},
       {BBS_COMMAND,   "su",                     (void *) bbs_summary,               0, 0, 0},
       {BBS_COMMAND,   "sub",                    (void *) bbs_topic,                 1, 0, 0},
       {BBS_COMMAND,   "subject",                (void *) bbs_subject,               0, 0, 0},
       {BBS_COMMAND,   "subjectmessage",         (void *) bbs_subject,               0, 0, 0},
       {BBS_COMMAND,   "subtopic",               (void *) bbs_topic,                 1, 0, 0},
       {BBS_COMMAND,   "subtopiclimit",          (void *) bbs_subtopiclimit,         0, 0, 0},
       {BBS_COMMAND,   "subtopiclisting",        (void *) bbs_topics,                1, 0, 0},
       {BBS_COMMAND,   "subtopics",              (void *) bbs_topics,                1, 0, 0},
       {BBS_COMMAND,   "summary",                (void *) bbs_summary,               0, 0, 0},
       {BBS_COMMAND,   "summarynewmessages",     (void *) bbs_summary,               0, 0, 0},
       {OTHER_COMMAND, "t",                      (void *) pagetell_send,             1, 0, 0},
       {OTHER_COMMAND, "tell",                   (void *) pagetell_send,             1, 0, 0},
       {OTHER_COMMAND, "time",                   (void *) look_date,                 0, 0, 0},
       {BBS_COMMAND,   "timelimit",              (void *) bbs_timelimit,             0, 0, 0},
       {BBS_COMMAND,   "timerestrictions",       (void *) bbs_timelimit,             0, 0, 0},
       {OTHER_COMMAND, "to",                     (void *) move_location,             0, 0, 0},
       {BBS_COMMAND,   "topic",                  (void *) bbs_topic,                 0, 0, 0},
       {BBS_COMMAND,   "topicaccesslevel",       (void *) bbs_accesslevel,           0, 0, 0},
       {BBS_COMMAND,   "topicanon",              (void *) bbs_setparameter,          TOPIC_ANON, 0, 0},
       {BBS_COMMAND,   "topicanonymous",         (void *) bbs_setparameter,          TOPIC_ANON, 0, 0},
       {BBS_COMMAND,   "topicadd",               (void *) bbs_addtopic,              0, 0, 0},
       {BBS_COMMAND,   "topiccensor",            (void *) bbs_setparameter,          TOPIC_CENSOR, 0, 0},
       {BBS_COMMAND,   "topiccensored",          (void *) bbs_setparameter,          TOPIC_CENSOR, 0, 0},
       {BBS_COMMAND,   "topiccensorship",        (void *) bbs_setparameter,          TOPIC_CENSOR, 0, 0},
       {BBS_COMMAND,   "topicchown",             (void *) bbs_ownertopic,            0, 0, 0},
       {BBS_COMMAND,   "topicchowner",           (void *) bbs_ownertopic,            0, 0, 0},
       {BBS_COMMAND,   "topiccyclic",            (void *) bbs_setparameter,          TOPIC_CYCLIC, 0, 0},
       {BBS_COMMAND,   "topiccyclicdelete",      (void *) bbs_setparameter,          TOPIC_CYCLIC, 0, 0},
       {BBS_COMMAND,   "topiccyclicdeletion",    (void *) bbs_setparameter,          TOPIC_CYCLIC, 0, 0},
       {BBS_COMMAND,   "topicdesc",              (void *) bbs_desctopic,             0, 0, 0},
       {BBS_COMMAND,   "topicdescription",       (void *) bbs_desctopic,             0, 0, 0},
       {BBS_COMMAND,   "topicdelete",            (void *) bbs_removetopic,           0, 0, 0},
       {BBS_COMMAND,   "topicerase",             (void *) bbs_removetopic,           0, 0, 0},
       {BBS_COMMAND,   "topicformatting",        (void *) bbs_setparameter,          TOPIC_FORMAT, 0, 0},
       {BBS_COMMAND,   "topichilighting",        (void *) bbs_setparameter,          TOPIC_HILIGHT, 0, 0},
       {BBS_COMMAND,   "topichighlighting",      (void *) bbs_setparameter,          TOPIC_HILIGHT, 0, 0},
       {BBS_COMMAND,   "topicmessagelimit",      (void *) bbs_messagelimit,          0, 0, 0},
       {BBS_COMMAND,   "topicmortaladd",         (void *) bbs_setparameter,          TOPIC_MORTALADD, 0, 0},
       {BBS_COMMAND,   "topicmortaladding",      (void *) bbs_setparameter,          TOPIC_MORTALADD, 0, 0},
       {BBS_COMMAND,   "topicowner",             (void *) bbs_ownertopic,            0, 0, 0},
       {BBS_COMMAND,   "topicownership",         (void *) bbs_ownertopic,            0, 0, 0},
       {BBS_COMMAND,   "topicparams",            (void *) bbs_settings,              0, 0, 0},
       {BBS_COMMAND,   "topicparameters",        (void *) bbs_settings,              0, 0, 0},
       {BBS_COMMAND,   "topicremove",            (void *) bbs_removetopic,           0, 0, 0},
       {BBS_COMMAND,   "topicrename",            (void *) bbs_renametopic,           0, 0, 0},
       {BBS_COMMAND,   "topicsettings",          (void *) bbs_settings,              0, 0, 0},
       {BBS_COMMAND,   "topictimelimit",         (void *) bbs_timelimit,             0, 0, 0},
       {BBS_COMMAND,   "topictimerestrictions",  (void *) bbs_timelimit,             0, 0, 0},
       {BBS_COMMAND,   "topiclisting",           (void *) bbs_topics,                0, 0, 0},
       {BBS_COMMAND,   "topics",                 (void *) bbs_topics,                0, 0, 0},
       {BBS_COMMAND,   "u",                      (void *) bbs_unread,                0, 0, 0},
       {BBS_COMMAND,   "unread",                 (void *) bbs_unread,                0, 0, 0},
       {BBS_COMMAND,   "unreadmessages",         (void *) bbs_unread,                0, 0, 0},
       {BBS_COMMAND,   "v",                      (void *) bbs_view,                  0, 0, 0},
       {BBS_COMMAND,   "vi",                     (void *) bbs_view,                  0, 0, 0},
       {BBS_COMMAND,   "view",                   (void *) bbs_view,                  0, 0, 0},
       {BBS_COMMAND,   "viewanon",               (void *) bbs_view,                  1, 0, 0},
       {BBS_COMMAND,   "viewanonymous",          (void *) bbs_view,                  1, 0, 0},
       {BBS_COMMAND,   "viewmessages",           (void *) bbs_view,                  0, 0, 0},
       {BBS_COMMAND,   "votemessage",            (void *) bbs_vote,                  0, 0, 0},
       {BBS_COMMAND,   "votes",                  (void *) bbs_vote,                  0, 0, 0},
       {BBS_COMMAND,   "voting",                 (void *) bbs_vote,                  0, 0, 0},
       {BBS_COMMAND,   NULL,                     NULL,                               0, 0, 0},
};
