//------------------------------------------------------------------------------
// Header generated by wxDesigner from file: muuli.wdr
// Do not modify this file, all changes will be lost!
//------------------------------------------------------------------------------

#ifndef __WDR_muuli_H__
#define __WDR_muuli_H__

#if defined(__GNUG__) && !defined(__APPLE__)
    #pragma interface "muuli_wdr.h"
#endif

// Include wxWindows' headers

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include <wx/image.h>
#include <wx/statline.h>
#include <wx/spinbutt.h>
#include <wx/spinctrl.h>
#include <wx/splitter.h>
#include <wx/listctrl.h>
#include <wx/treectrl.h>
#include <wx/notebook.h>
#include <wx/grid.h>

// Declare window functions

#define ID_TEXT 10000
#define ID_SYSTRAYSELECT 10001
#define ID_OK 10002
wxSizer *desktopDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

extern wxSizer *s_dlgcnt;
extern wxSizer *buttonToolbar;
extern wxSizer *contentSizer;
extern wxSizer *s_fed2klh;
#define ID_TEXTCTRL 10003
#define ID_BUTTON_FAST 10004
#define ID_LINE 10005
#define ID_STATICBITMAP 10006
wxSizer *muleDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_SRV_SPLITTER 10007
wxSizer *serverListDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

extern wxSizer *IDC_SEARCH_FRM;
extern wxSizer *s_srcopts;
#define IDC_MSTATIC3 10008
#define IDC_SEARCHNAME 10009
#define IDC_SEARCH_RESET 10010
#define IDC_SEARCHWEBNAME 10011
#define ID_WEBSEARCH_SUBMIT 10012
#define IDC_MSTATIC4 10013
#define IDC_TypeSearch 10014
#define ID_AUTOCATASSIGN 10015
extern wxSizer *s_srced2klh;
#define ID_ED2KLINKHANDLER 10016
#define ID_BTN_DDLOAD 10017
#define IDC_EDITSEARCHMIN 10018
#define IDC_SEARCHMINSIZE 10019
#define IDC_EDITSEARCHMAX 10020
#define IDC_SEARCHMAXSIZE 10021
#define IDC_EDITSEARCHEXTENSION 10022
#define IDC_SEARCHEXTENSION 10023
#define IDC_EDITSEARCHAVAIBILITY 10024
#define IDC_SEARCHAVAIL 10025
#define IDC_SGLOBAL 10026
#define IDC_STARTS 10027
#define IDC_CANCELS 10028
#define IDC_CLEARALL 10029
#define ID_NOTEBOOK 10030
#define ID_SEARCHPROGRESS 10031
#define IDC_SDOWNLOAD 10032
wxSizer *searchDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_BTNCLRCOMPL 10033
#define ID_CATEGORIES 10034
#define ID_BTNSWWINDOW 10035
#define ID_DLOADLIST 10036
wxSizer *transferTopPane( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

extern wxSizer *queueSizer;
#define ID_BTNSWITCHUP 10037
#define ID_QUEUELIST 10038
#define ID_UPLOADLIST 10039
wxSizer *transferBottomPane( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_FRIENDLIST 10040
#define IDC_CHATSELECTOR 10041
#define IDC_CMESSAGE 10042
#define IDC_CSEND 10043
#define IDC_CCLOSE 10044
wxSizer *messagePage( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

extern wxSizer *IDC_FD_X0;
#define IDC_FD_X1 10045
#define IDC_FNAME 10046
#define IDC_FD_X2 10047
#define IDC_METFILE 10048
#define IDC_FD_X3 10049
#define IDC_FHASH 10050
#define IDC_FD_X4 10051
#define IDC_FSIZE 10052
#define IDC_FD_X5 10053
#define IDC_PFSTATUS 10054
#define IDC_FD_X15 10055
#define IDC_LASTSEENCOMPL 10056
extern wxSizer *IDC_MINF_0;
#define IDC_MINF_1 10057
#define IDC_MINFCODEC 10058
#define IDC_MINF_2 10059
#define IDC_MINFBIT 10060
#define IDC_MINF_3 10061
#define IDC_MINFLEN 10062
extern wxSizer *IDC_FD_X6;
#define IDC_FD_X7 10063
#define IDC_SOURCECOUNT 10064
#define IDC_FD_X10 10065
#define IDC_FD_X9 10066
#define IDC_PARTCOUNT 10067
#define IDC_FD_X11 10068
#define IDC_FD_X13 10069
#define IDC_DATARATE 10070
#define IDC_FD_X14 10071
#define IDC_TRANSFERED 10072
#define IDC_FD_X12 10073
#define IDC_SOURCECOUNT2 10074
#define IDC_PARTAVAILABLE 10075
#define IDC_COMPLSIZE 10076
#define IDC_PROCCOMPL 10077
extern wxSizer *IDC_FD_ICH;
#define IDC_FD_LSTATS1 10078
#define IDC_FD_STATS1 10079
#define IDC_FD_LSTATS2 10080
#define IDC_FD_STATS2 10081
#define IDC_FD_LSTATS3 10082
#define IDC_FD_STATS3 10083
extern wxSizer *IDC_FD_SN;
#define IDC_LISTCTRLFILENAMES 10084
#define IDC_TAKEOVER 10085
#define IDC_BUTTONSTRIP 10086
#define IDC_FILENAME 10087
#define IDC_RENAME 10088
#define IDC_CMTBT 10089
#define ID_CLOSEWNDFD 5100
wxSizer *fileDetails( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_CMT_TEXT 10090
#define IDC_FC_CLEAR 10091
#define IDC_RATELIST 10092
#define IDCOK 10093
#define IDCCANCEL 10094
wxSizer *commentDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_LST 10095
#define IDC_CMSTATUS 10096
#define IDCREF 10097
wxSizer *commentLstDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_ANIMATE 10098
#define ID_CANCEL 5101
wxSizer *downloadDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_IPADDRESS 10099
#define ID_IPORT 10100
#define ID_USERNAME 10101
#define ID_USERHASH 10102
#define ID_ADDFRIEND 10103
#define ID_CLOSEDLG 10104
wxSizer *addFriendDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_BTNRELSHARED 10105
#define ID_SHFILELIST 10106
#define IDC_SREQUESTED 10107
#define ID_GAUGE 10108
#define IDC_SREQUESTED2 10109
#define IDC_SACCEPTED 10110
#define IDC_SACCEPTED2 10111
#define IDC_STRANSFERED 10112
#define IDC_STRANSFERED2 10113
wxSizer *sharedfilesDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_SEARCHLISTCTRL 10114
wxSizer *searchPage( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

extern wxSizer *testSizer;
#define ID_DLOADSCOPE 10115
#define IDC_C0 10116
#define IDC_C0_3 10117
#define IDC_C0_2 10118
#define ID_OTHERS 10119
#define IDC_S3 10120
#define IDC_S0 10121
#define ID_ACTIVEC 10122
#define IDC_S1 10123
#define ID_ULOADSCOPE 10124
#define IDC_C1 10125
#define IDC_C1_3 10126
#define IDC_C1_2 10127
#define ID_TREECTRL 10128
wxSizer *statsDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_DNAME 10129
#define ID_DHASH 10130
#define ID_DSOFT 10131
#define ID_DIP 10132
#define ID_DSIP 10133
#define ID_DVERSION 10134
#define ID_DID 10135
#define ID_DSNAME 10136
#define ID_DDOWNLOADING 10137
#define ID_DDOWN 10138
#define ID_DAVDR 10139
#define ID_DDOWNTOTAL 10140
#define ID_DDUP 10141
#define ID_DAVUR 10142
#define ID_DUPTOTAL 10143
#define ID_DRATIO 10144
#define ID_DRATING 10145
#define IDC_CDIDENT 10146
#define ID_DSCORE 10147
#define ID_CLOSEWND 10148
wxSizer *clientDetails( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_NICK 10149
#define IDC_LANGUAGE 10150
#define IDC_BEEPER 10151
#define IDC_BRINGTOFOREGROUND 10152
#define IDC_DBLCLICK 10153
#define IDC_MINTRAY 10154
#define IDC_ONLINESIG 10155
#define IDC_EXIT 10156
#define IDC_TOOLTIPDELAY_LBL 10157
#define IDC_TOOLTIPDELAY 10158
#define ID_DESKTOPMODE 10159
#define IDC_DAYS 10160
#define IDC_CHECK4UPDATE 10161
#define IDC_CHECKDAYS 10162
#define IDC_SPLASHON 10163
#define IDC_STARTMIN 10164
#define IDC_FCHECK 10165
#define ID_CUSTOMBROWSETEXT 10166
#define IDC_FCHECKSELF 10167
#define IDC_FCHECKTABS 10168
wxSizer *PreferencesGeneralTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_DCAP_LBL 10169
#define IDC_DOWNLOAD_CAP 10170
#define IDC_KBS2 10171
#define IDC_UCAP_LBL 10172
#define IDC_UPLOAD_CAP 10173
#define IDC_KBS3 10174
#define IDC_DLIMIT_LBL 10175
#define IDC_MAXDOWN 10176
#define IDC_KBS1 10177
#define IDC_ULIMIT_LBL 10178
#define IDC_MAXUP 10179
#define IDC_KBS4 10180
#define IDC_SLOTALLOC 10181
#define IDC_PORT 10182
#define IDC_UDPPORT 10183
#define IDC_UDPDISABLE 10184
#define IDC_MAXSRCHARD_LBL 10185
#define IDC_MAXSOURCEPERFILE 10186
#define IDC_MAXCONLABEL 10187
#define IDC_MAXCON 10188
#define IDC_AUTOCONNECT 10189
#define IDC_RECONN 10190
#define IDC_SHOWOVERHEAD 10191
#define IDC_SECIDENT 10192
extern wxSizer *IDC_IPF_0;
#define IDC_IPFONOFF 10193
#define IDC_IPFRELOAD 10194
wxSizer *PreferencesConnectionTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_REMOVEDEAD 10195
#define IDC_SERVERRETRIES 10196
#define IDC_RETRIES_LBL 10197
#define IDC_AUTOSERVER 10198
#define IDC_EDITADR 10199
#define IDC_FILTER 10200
#define IDC_UPDATESERVERCONNECT 10201
#define IDC_UPDATESERVERCLIENT 10202
#define IDC_SCORE 10203
#define IDC_SMARTIDCHECK 10204
#define IDC_SAFESERVERCONNECT 10205
#define IDC_AUTOCONNECTSTATICONLY 10206
#define IDC_MANUALSERVERHIGHPRIO 10207
wxSizer *PreferencesServerTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_SEESHARES 10208
#define IDC_ICH 10209
#define IDC_ADDNEWFILESPAUSED 10210
#define IDC_DAP 10211
#define IDC_PREVIEWPRIO 10212
#define IDC_UAP 10213
#define IDC_FULLCHUNKTRANS 10214
#define IDC_STARTNEXTFILE 10215
#define IDC_SRCSEEDS 10216
#define IDC_METADATA 10217
#define IDC_FULLALLOCATE 10218
#define IDC_CHUNKALLOC 10219
#define IDC_CHECKDISKSPACE 10220
#define ID_MINDISKTEXT 10221
#define IDC_MINDISKSPACE 10222
wxSizer *PreferencesFilesTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_INCFILES 10223
#define IDC_SELINCDIR 10224
#define IDC_TEMPFILES 10225
#define IDC_SELTEMPDIR 10226
#define IDC_SHARESELECTOR 10227
#define IDC_VIDEOPLAYER 10228
#define IDC_BROWSEV 10229
#define IDC_VIDEOBACKUP 10230
wxSizer *PreferencesDirectoriesTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_SLIDERINFO 10231
#define IDC_SLIDER 10232
#define IDC_SLIDERINFO3 10233
#define IDC_SLIDER3 10234
#define IDC_SLIDERINFO4 10235
#define IDC_SLIDER4 10236
#define IDC_PREFCOLORS 10237
#define IDC_COLORSELECTOR 10238
#define IDC_COLOR_BUTTON 10239
#define IDC_SLIDERINFO2 10240
#define IDC_SLIDER2 10241
wxSizer *PreferencesStatisticsTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_CB_TBN_USESOUND 10242
#define IDC_EDIT_TBN_WAVFILE 10243
#define IDC_BTN_BROWSE_WAV 10244
#define IDC_CB_TBN_ONLOG 10245
#define IDC_CB_TBN_ONCHAT 10246
#define IDC_CB_TBN_POP_ALWAYS 10247
#define IDC_CB_TBN_ONDOWNLOAD 10248
#define IDC_CB_TBN_ONNEWVERSION 10249
#define IDC_CB_TBN_IMPORTATNT 10250
#define IDC_SENDMAIL 10251
#define IDC_SMTP 10252
#define IDC_EMAIL 10253
wxSizer *PreferencesNotifyTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_WARNING 10254
#define IDC_STATIC 10255
#define IDC_MAXCON5SECLABEL 10256
#define IDC_MAXCON5SEC 10257
#define IDC_SAFEMAXCONN 10258
#define IDC_VERBOSE 10259
#define IDC_VERBOSEPACKETERROR 10260
#define IDC_AUTOTAKEED2KLINKS 10261
#define IDC_SHOWRATEONTITLE 10262
#define IDC_FILEBUFFERSIZE_STATIC 10263
#define IDC_FILEBUFFERSIZE 10264
#define IDC_QUEUESIZE_STATIC 10265
#define IDC_QUEUESIZE 10266
#define IDC_SERVERKEEPALIVE_LABEL 10267
#define IDC_SERVERKEEPALIVE 10268
wxSizer *PreferencesaMuleTweaksTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_ENABLE_AUTO_ARRANGING 10269
#define ID_RADIOBOX 10270
#define IDC_PERCENT 10271
#define IDC_PROGBAR 10272
#define IDC_3DDEP 10273
#define IDC_3DDEPTH 10274
#define IDC_FLAT 10275
#define IDC_ROUND 10276
#define IDC_USESKIN 10277
#define IDC_SKINFILE 10278
#define IDC_SELSKINFILE 10279
#define IDC_NEWSTYLETABS 10280
#define IDC_FED2KLH 10281
#define IDC_EXTCATINFO 10282
wxSizer *PreferencesGuiTweaksTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_NNS_HANDLING 10283
#define IDC_ENABLE_AUTO_FQS 10284
#define IDC_ENABLE_AUTO_HQRS 10285
#define IDC_HQR_VALUE 10286
#define IDC_AUTO_DROP_TIMER 10287
wxSizer *PreferencesSourcesDroppingTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_ENABLE_WEB 10288
#define IDC_WEB_PORT 10289
#define IDC_WEB_REFRESH_TIMEOUT 10290
#define IDC_WEB_GZIP 10291
#define IDC_ENABLE_WEB_LOW 10292
#define IDC_WEB_PASSWD 10293
#define IDC_WEB_PASSWD_LOW 10294
#define IDC_EXT_CONN_ACCEPT 10295
#define IDC_EXT_CONN_USETCP 10296
#define IDC_EXT_CONN_TCP_PORT 10297
#define IDC_EXT_CONN_PASSWD_ENABLE 10298
#define IDC_EXT_CONN_PASSWD 10299
#define IDC_OSDIR 10300
#define IDC_SELOSDIR 10301
wxSizer *PreferencesRemoteControlsTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_NOTEBOOK_TOP 10302
#define ID_PREFS_OK_TOP 10303
#define ID_PREFS_CANCEL_TOP 10304
wxSizer *preferencesDlgTop( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_STATIC_TITLE 10305
#define IDC_TITLE 10306
#define IDC_STATIC_COMMENT 10307
#define IDC_COMMENT 10308
#define IDC_STATIC_INCOMING 10309
#define IDC_INCOMING 10310
#define IDC_BROWSE 10311
#define IDC_STATIC_PRIO 10312
#define IDC_PRIOCOMBO 10313
#define IDC_STATIC_COLOR 10314
#define ID_BOX_CATCOLOR 10315
#define IDC_CATCOLOR 10316
wxSizer *CategoriesEditWindow( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_SPLATTER 10317
wxSizer *transferDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_SERVERINFO 10318
#define ID_BTN_RESET_SERVER 10319
wxSizer *ServerInfoLog( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_LOGVIEW 10320
#define ID_BTN_RESET 10321
wxSizer *aMuleLog( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_UPDATELIST 10322
#define IDC_SERVERLISTURL 10323
#define IDC_SERVERNAME 10324
#define IDC_IPADDRESS 10325
#define IDC_SPORT 10326
#define ID_ADDTOLIST 10327
#define ID_SERVERLIST 10328
wxSizer *serverListDlgUp( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_SRVLOG_NOTEBOOK 10329
wxSizer *serverListDlgDown( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_NOTEBOOK_LEFT 10330
#define ID_PREFS_OK_LEFT 10331
#define ID_PREFS_CANCEL_LEFT 10332
wxSizer *preferencesDlgLeft( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_LOCALETEXT 10333
#define ID_LOCALENEVERAGAIN 10334
wxSizer *LocaleWarning( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

// Declare menubar functions

// Declare toolbar functions

#define ID_BUTTONCONNECT 10335
#define ID_BUTTONSERVERS 10336
#define ID_BUTTONSEARCH 10337
#define ID_BUTTONTRANSFER 10338
#define ID_BUTTONSHARED 10339
#define ID_BUTTONMESSAGES 10340
#define ID_BUTTONSTATISTICS 10341
#define ID_BUTTONNEWPREFERENCES 10342
void muleToolbar( wxToolBar *parent );

// Declare bitmap functions

wxBitmap clientImages( size_t index );

wxBitmap dlStatusImages( size_t index );

wxBitmap connImages( size_t index );

wxBitmap moreImages( size_t index );

wxBitmap amuleSpecial( size_t index );

wxBitmap connButImg( size_t index );

wxBitmap amuleDlgImages( size_t index );

#endif

// End of generated file
