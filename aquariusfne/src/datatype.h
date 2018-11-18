#ifndef DATATYPE_H_
#define DATATYPE_H_

#include "lib2.h"
#include "lang.h"
#include "strvector.h"
#include "int64vector.h"
#include "strdict.h"
#include "strdictex.h"
#include "Resource.h"
#include "AquariusWnd.h"
#include "initial.h"
#include "windowinfo.h"
#include "requestcontext.h"
#include "commandline.h"
#include "browser.h"
#include "host.h"
#include "frame.h"
#include "consttype.h"
#include "popupfeatures.h"
#include "document.h"
#include "cookie.h"
#include "v8.h"
#include "postdata.h"
#include "request.h"
#include "response.h"
#include "jsdialog.h"
#include "filedialogcallback.h"
#include "keyevent.h"
#include "download.h"
#include "callback.h"

#ifndef __E_STATIC_LIB

// 下面的定义顺序绝对不可改动。
static LIB_DATA_TYPE_INFO s_DataType[] = {
		{
/*m_szName*/					_WT("水星领航员"),
/*m_szEgName*/					_WT("aquariuscef"),
/*m_szExplain*/					_WT("提供对HTML页面的浏览支持"),
/*m_nCmdCount*/					s_nAquariusWndElementCmdCount,
/*m_pnCmdsIndex*/				s_nAquariusWndElementCmdIndex,
/*m_dwState*/					LDT_WIN_UNIT,
/*m_dwUnitBmpID*/				IDB_BITMAP1,
/*m_nEventCount*/				g_nAquariusWndEventCount,
/*m_pEventBegin*/				(EVENT_INFO2*)g_aquariusWndEvent,
/*m_nPropertyCount*/			g_aquariusWndPropertyCount,
/*m_pPropertyBegin*/			g_aquariusWndProperty,
/*m_pfnGetInterface*/			aquarius_GetInterface_aquariuscef,
/*m_nElementCount*/				0,
/*m_pElementBegin*/				NULL,
	},
	{
/*m_szName*/					_WT("字符串列表"),
/*m_szEgName*/					_WT("StringArray"),
/*m_szExplain*/					_WT("动态文本数组容器"),
/*m_nCmdCount*/					sizeof (s_nStrVectorElementCmdIndex) / sizeof (s_nStrVectorElementCmdIndex [0]),
/*m_pnCmdsIndex*/				s_nStrVectorElementCmdIndex,
/*m_dwState*/					NULL,
/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
/*m_nElementCount*/				1,
/*m_pElementBegin*/				s_dtStrVectorElemnet,
	},
	{
/*m_szName*/					_WT("长整数列表"),
/*m_szEgName*/					_WT("int64Array"),
/*m_szExplain*/					_WT("动态长整数数组容器"),
/*m_nCmdCount*/					sizeof (s_nInt64VectorElementCmdIndex) / sizeof (s_nInt64VectorElementCmdIndex [0]),
/*m_pnCmdsIndex*/				s_nInt64VectorElementCmdIndex,
/*m_dwState*/					NULL,
/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
/*m_nElementCount*/				1,
/*m_pElementBegin*/				s_dtInt64VectorElemnet,
	},
	{
/*m_szName*/					_WT("键值表"),
/*m_szEgName*/					_WT("StringMap"),
/*m_szExplain*/					_WT("文本字典容器,以key:value形式存储数据,一个key只能对应一个value"),
/*m_nCmdCount*/					sizeof (s_nStrDictElementCmdIndex) / sizeof (s_nStrDictElementCmdIndex [0]),
/*m_pnCmdsIndex*/				s_nStrDictElementCmdIndex,
/*m_dwState*/					NULL,
/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
/*m_nElementCount*/				1,
/*m_pElementBegin*/				s_dtStrDictElemnet,
	},
	{
/*m_szName*/					_WT("增强键值表"),
/*m_szEgName*/					_WT("StringMultimap"),
/*m_szExplain*/					_WT("文本字典容器,以key:value形式存储数据,支持多个相同的key对应多个value。"),
/*m_nCmdCount*/					sizeof (s_nStrDictExElementCmdIndex) / sizeof (s_nStrDictExElementCmdIndex [0]),
/*m_pnCmdsIndex*/				s_nStrDictExElementCmdIndex,
/*m_dwState*/					NULL,
/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
/*m_nElementCount*/				1,
/*m_pElementBegin*/				s_dtStrDictExElemnet,
	},{
/*m_szName*/					_WT("初始化设置"),
/*m_szEgName*/					_WT("AquaInitial"),
/*m_szExplain*/					_WT("浏览器初始化配置,在此对象中可以进行一些初始化设置,更多的设置参数可以通过命令行进行配置。"),
/*m_nCmdCount*/					0,//sizeof (s_nInitialCmdIndex) / sizeof (s_nInitialCmdIndex [0]),
/*m_pnCmdsIndex*/				NULL,//s_nInitialCmdIndex,
/*m_dwState*/					NULL,
/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
/*m_nElementCount*/				sizeof(s_dtInitialElemnet) / sizeof(s_dtInitialElemnet[0]),
/*m_pElementBegin*/				s_dtInitialElemnet,
	},
	{
/*m_szName*/					_WT("窗口设置"),
/*m_szEgName*/					_WT("AquaWindowInfo"),
/*m_szExplain*/					_WT("用于配置浏览器窗口信息的数据类型。"),
/*m_nCmdCount*/					sizeof (s_nWindowInfoCmdIndex) / sizeof (s_nWindowInfoCmdIndex [0]),
/*m_pnCmdsIndex*/				s_nWindowInfoCmdIndex,
/*m_dwState*/					NULL,
/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
/*m_nElementCount*/				sizeof(s_dtWindowInfoElemnet) / sizeof(s_dtWindowInfoElemnet[0]),
/*m_pElementBegin*/				s_dtWindowInfoElemnet,
	},
	{
/*m_szName*/					_WT("缓存设置"),
/*m_szEgName*/					_WT("AquaRequestContextSettings    "),
/*m_szExplain*/					_WT("用于配置浏览器请求上下文环境的数据类型。"),
/*m_nCmdCount*/					sizeof (s_nRequestContextCmdIndex) / sizeof (s_nRequestContextCmdIndex [0]),
/*m_pnCmdsIndex*/				s_nRequestContextCmdIndex,
/*m_dwState*/					LDT_IS_HIDED,
/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
/*m_nElementCount*/				sizeof(s_dtRequestContextElemnet) / sizeof(s_dtRequestContextElemnet[0]),
/*m_pElementBegin*/				s_dtRequestContextElemnet,
	},
	{
/*m_szName*/					_WT("命令行配置"),
/*m_szEgName*/					_WT("AquaCommand"),
/*m_szExplain*/					_WT("提供命令行查看以及修改支持的数据类型。"),
/*m_nCmdCount*/					sizeof (s_nCommandLineElementCmdIndex) / sizeof (s_nCommandLineElementCmdIndex [0]),
/*m_pnCmdsIndex*/				s_nCommandLineElementCmdIndex,
/*m_dwState*/					NULL,
/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
/*m_nElementCount*/				sizeof(s_dtCommandLineElemnet) / sizeof(s_dtCommandLineElemnet[0]),
/*m_pElementBegin*/				s_dtCommandLineElemnet,
	},
	{
		/*m_szName*/					_WT("水星超文本框"),
		/*m_szEgName*/					_WT("AquaBrowser"),
		/*m_szExplain*/					_WT("提供浏览器对象的访问支持。"),
		/*m_nCmdCount*/					sizeof (s_nBrowserElementCmdIndex) / sizeof (s_nBrowserElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nBrowserElementCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtBrowserElemnet) / sizeof(s_dtBrowserElemnet[0]),
		/*m_pElementBegin*/				s_dtBrowserElemnet,
	},
	{
		/*m_szName*/					_WT("水星超文本窗口"),
		/*m_szEgName*/					_WT("AquaBrowserHost"),
		/*m_szExplain*/					_WT("提供浏览器窗口对象的访问支持。"),
		/*m_nCmdCount*/					sizeof (s_nHostElementCmdIndex) / sizeof (s_nHostElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nHostElementCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtHostElemnet) / sizeof(s_dtHostElemnet[0]),
		/*m_pElementBegin*/				s_dtHostElemnet,
	},
	{
		/*m_szName*/					_WT("水星超文本框架"),
		/*m_szEgName*/					_WT("AquaFrame"),
		/*m_szExplain*/					_WT("提供浏览器框架对象的访问支持。"),
		/*m_nCmdCount*/					sizeof (s_nFrameElementCmdIndex) / sizeof (s_nFrameElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nFrameElementCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtFrameElemnet) / sizeof(s_dtFrameElemnet[0]),
		/*m_pElementBegin*/				s_dtFrameElemnet,
	},
	{
		/*m_szName*/					_WT("异步调用类型常量"),
		/*m_szEgName*/					_WT("aquaasync"),
		/*m_szExplain*/					_WT("提供异步模式下的常量集合"),
		/*m_nCmdCount*/					0,//sizeof (s_nFrameElementCmdIndex) / sizeof (s_nFrameElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				NULL,//s_nFrameElementCmdIndex,
		/*m_dwState*/					LDT_ENUM,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtAquaAsyncElemnet) / sizeof(s_dtAquaAsyncElemnet[0]),
		/*m_pElementBegin*/				s_dtAquaAsyncElemnet,
	},
	{
		/*m_szName*/					_WT("窗口打开方式常量"),
		/*m_szEgName*/					_WT("AquaWindowOpenDisposition"),
		/*m_szExplain*/					_WT("应该打开链接点击的方式。 这些常数相匹配它们与Chromium的window_open_disposition.h中的等价物不同重新编号。"),
		/*m_nCmdCount*/					0,//sizeof (s_nFrameElementCmdIndex) / sizeof (s_nFrameElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				NULL,//s_nFrameElementCmdIndex,
		/*m_dwState*/					LDT_ENUM,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtAquaWodElemnet) / sizeof(s_dtAquaWodElemnet[0]),
		/*m_pElementBegin*/				s_dtAquaWodElemnet,
	},
	{
		/*m_szName*/					_WT("PopupFeatures"),
		/*m_szEgName*/					_WT("aquapopupFeatures"),
		/*m_szExplain*/					_WT("弹出窗口特性。"),
		/*m_nCmdCount*/					0,//sizeof (s_nFrameElementCmdIndex) / sizeof (s_nFrameElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				NULL,//s_nFrameElementCmdIndex,
		/*m_dwState*/					LDT_IS_HIDED,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtPopupFeaturesElemnet) / sizeof(s_dtPopupFeaturesElemnet[0]),
		/*m_pElementBegin*/				s_dtPopupFeaturesElemnet,
	},
	{
		/*m_szName*/					_WT("HyperText"),
		/*m_szEgName*/					_WT("HyperText"),
		/*m_szExplain*/					_WT("提供水星文档对象支持。"),
		/*m_nCmdCount*/					sizeof (s_nDocumentElementCmdIndex) / sizeof (s_nDocumentElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nDocumentElementCmdIndex,
		/*m_dwState*/					LDT_IS_HIDED,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtDocumentElemnet) / sizeof(s_dtDocumentElemnet[0]),
		/*m_pElementBegin*/				s_dtDocumentElemnet,
	},
	{
		/*m_szName*/					_WT("Cookie"),
		/*m_szEgName*/					_WT("cookie"),
		/*m_szExplain*/					_WT("提供Cookie数据类型支持。"),
		/*m_nCmdCount*/					0,//sizeof (s_nDocumentElementCmdIndex) / sizeof (s_nDocumentElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				NULL,//s_nDocumentElementCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtCookieElemnet) / sizeof(s_dtCookieElemnet[0]),
		/*m_pElementBegin*/				s_dtCookieElemnet,
	},
	{
		/*m_szName*/					_WT("系统日期"),
		/*m_szEgName*/					_WT("systime"),
		/*m_szExplain*/					_WT("提供SYSTIME数据类型支持。"),
		/*m_nCmdCount*/					0,//sizeof (s_nDocumentElementCmdIndex) / sizeof (s_nDocumentElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				NULL,//s_nDocumentElementCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtTimeElemnet) / sizeof(s_dtTimeElemnet[0]),
		/*m_pElementBegin*/				s_dtTimeElemnet,
	},
	{
		/*m_szName*/					_WT("COOKIE管理器"),
		/*m_szEgName*/					_WT("cookiemanager"),
		/*m_szExplain*/					_WT("cookiemanager。"),
		/*m_nCmdCount*/					sizeof (s_nCookieManagerCmdIndex) / sizeof (s_nCookieManagerCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nCookieManagerCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtCookieManagerElemnet) / sizeof(s_dtCookieManagerElemnet[0]),
		/*m_pElementBegin*/				s_dtCookieManagerElemnet,
	},
	{
		/*m_szName*/					_WT("局部存储表"),
		/*m_szEgName*/					_WT("V8Value"),
		/*m_szExplain*/					_WT("V8Value。"),
		/*m_nCmdCount*/					sizeof (s_nV8CmdIndex) / sizeof (s_nV8CmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nV8CmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtV8Elemnet) / sizeof(s_dtV8Elemnet[0]),
		/*m_pElementBegin*/				s_dtV8Elemnet,
	},
	{
		/*m_szName*/					_WT("V8类"),
		/*m_szEgName*/					_WT("V8Accessor"),
		/*m_szExplain*/					_WT("V8Accessor"),
		/*m_nCmdCount*/					sizeof (s_nV8AccessorCmdIndex) / sizeof (s_nV8CmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nV8AccessorCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtV8AccessorElemnet) / sizeof(s_dtV8AccessorElemnet[0]),
		/*m_pElementBegin*/				s_dtV8AccessorElemnet,
	},
	{
		/*m_szName*/					_WT("HTTP提交字段"),
		/*m_szEgName*/					_WT("PostDataElement"),
		/*m_szExplain*/					_WT("PostDataElement。"),
		/*m_nCmdCount*/					sizeof (s_nPostDataChildCmdIndex) / sizeof (s_nPostDataChildCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nPostDataChildCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtPostDataChildElemnet) / sizeof(s_dtPostDataChildElemnet[0]),
		/*m_pElementBegin*/				s_dtPostDataChildElemnet,
	},
	{
		/*m_szName*/					_WT("HTTP提交正文"),
		/*m_szEgName*/					_WT("PostData"),
		/*m_szExplain*/					_WT("PostData。"),
		/*m_nCmdCount*/					sizeof (s_nPostDataCmdIndex) / sizeof (s_nPostDataCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nPostDataCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtPostDataElemnet) / sizeof(s_dtPostDataElemnet[0]),
		/*m_pElementBegin*/				s_dtPostDataElemnet,
	},
	{
		/*m_szName*/					_WT("HTTP提交"),
		/*m_szEgName*/					_WT("Request"),
		/*m_szExplain*/					_WT("Request。"),
		/*m_nCmdCount*/					sizeof (s_nRequestCmdIndex) / sizeof (s_nRequestCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nRequestCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtRequestElemnet) / sizeof(s_dtRequestElemnet[0]),
		/*m_pElementBegin*/				s_dtRequestElemnet,
	},
	{
		/*m_szName*/					_WT("HTTP响应"),
		/*m_szEgName*/					_WT("Response"),
		/*m_szExplain*/					_WT("Response。"),
		/*m_nCmdCount*/					sizeof (s_nResponseCmdIndex) / sizeof (s_nResponseCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nResponseCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtResponseElemnet) / sizeof(s_dtResponseElemnet[0]),
		/*m_pElementBegin*/				s_dtResponseElemnet,
	},
	{
		/*m_szName*/					_WT("HTTP提交常量"),
		/*m_szEgName*/					_WT("URLFLAG"),
		/*m_szExplain*/					_WT("用于自定义CefURLRequest行为的标志。"),
		/*m_nCmdCount*/					0,//sizeof (s_nFrameElementCmdIndex) / sizeof (s_nFrameElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				NULL,//s_nFrameElementCmdIndex,
		/*m_dwState*/					LDT_ENUM,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtAquaURLRequestFlagsElemnet) / sizeof(s_dtAquaURLRequestFlagsElemnet[0]),
		/*m_pElementBegin*/				s_dtAquaURLRequestFlagsElemnet,
	},
	{
		/*m_szName*/					_WT("HTTP提交字段常量"),
		/*m_szEgName*/					_WT("POSTTYPE"),
		/*m_szExplain*/					_WT("表明(POST)提交的数据类型"),
		/*m_nCmdCount*/					0,//sizeof (s_nFrameElementCmdIndex) / sizeof (s_nFrameElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				NULL,//s_nFrameElementCmdIndex,
		/*m_dwState*/					LDT_ENUM,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtAquaPostTypeElemnet) / sizeof(s_dtAquaPostTypeElemnet[0]),
		/*m_pElementBegin*/				s_dtAquaPostTypeElemnet,
	},
	{
		/*m_szName*/					_WT("资源加载结果常量"),
		/*m_szEgName*/					_WT("URLREQUESTSTATUS"),
		/*m_szExplain*/					_WT("用以表示资源加载结果的常量集合。"),
		/*m_nCmdCount*/					0,//sizeof (s_nFrameElementCmdIndex) / sizeof (s_nFrameElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				NULL,//s_nFrameElementCmdIndex,
		/*m_dwState*/					LDT_ENUM,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtAquaUrlRequestStatusElemnet) / sizeof(s_dtAquaUrlRequestStatusElemnet[0]),
		/*m_pElementBegin*/				s_dtAquaUrlRequestStatusElemnet,
	},
	{
		/*m_szName*/					_WT("资源类型常量"),
		/*m_szEgName*/					_WT("RESOURCETYPE"),
		/*m_szExplain*/					_WT("请求的资源类型常量集合。"),
		/*m_nCmdCount*/					0,//sizeof (s_nFrameElementCmdIndex) / sizeof (s_nFrameElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				NULL,//s_nFrameElementCmdIndex,
		/*m_dwState*/					LDT_ENUM,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtAquaResourceTypeElemnet) / sizeof(s_dtAquaResourceTypeElemnet[0]),
		/*m_pElementBegin*/				s_dtAquaResourceTypeElemnet,
	},
	{
		/*m_szName*/					_WT("按键类型常量"),
		/*m_szEgName*/					_WT("KEYEVENT"),
		/*m_szExplain*/					_WT("按键类型的常量集合。"),
		/*m_nCmdCount*/					0,//sizeof (s_nFrameElementCmdIndex) / sizeof (s_nFrameElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				NULL,//s_nFrameElementCmdIndex,
		/*m_dwState*/					LDT_ENUM,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtAquaKeyEventTypeElemnet) / sizeof(s_dtAquaKeyEventTypeElemnet[0]),
		/*m_pElementBegin*/				s_dtAquaKeyEventTypeElemnet,
	},
	{
		/*m_szName*/					_WT("鼠标类型常量"),
		/*m_szEgName*/					_WT("MOUSE_BUTTON_TYPE"),
		/*m_szExplain*/					_WT("鼠标类型的常量集合。"),
		/*m_nCmdCount*/					0,//sizeof (s_nFrameElementCmdIndex) / sizeof (s_nFrameElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				NULL,//s_nFrameElementCmdIndex,
		/*m_dwState*/					LDT_ENUM,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtAquaMouseButtonElemnet) / sizeof(s_dtAquaMouseButtonElemnet[0]),
		/*m_pElementBegin*/				s_dtAquaMouseButtonElemnet,
	},
	{
		/*m_szName*/					_WT("脚本对话框常量"),
		/*m_szEgName*/					_WT("JSDIALOG"),
		/*m_szExplain*/					_WT("脚本对话框常量"),
		/*m_nCmdCount*/					0,//sizeof (s_nFrameElementCmdIndex) / sizeof (s_nFrameElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				NULL,//s_nFrameElementCmdIndex,
		/*m_dwState*/					LDT_ENUM,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtAquaJsDialogElemnet) / sizeof(s_dtAquaJsDialogElemnet[0]),
		/*m_pElementBegin*/				s_dtAquaJsDialogElemnet,
	},
	{
		/*m_szName*/					_WT("脚本对话框"),
		/*m_szEgName*/					_WT("JSDialogCallback"),
		/*m_szExplain*/					_WT("JSDialogCallback。"),
		/*m_nCmdCount*/					sizeof (s_nJsDialogCallbackCmdIndex) / sizeof (s_nJsDialogCallbackCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nJsDialogCallbackCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtJsDialogCallbackElemnet) / sizeof(s_dtJsDialogCallbackElemnet[0]),
		/*m_pElementBegin*/				s_dtJsDialogCallbackElemnet,
	},
	{
		/*m_szName*/					_WT("文件对话框"),
		/*m_szEgName*/					_WT("FileDialogCallback"),
		/*m_szExplain*/					_WT("FileDialogCallback。"),
		/*m_nCmdCount*/					sizeof (s_nFileDialogCallbackCmdIndex) / sizeof (s_nFileDialogCallbackCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nFileDialogCallbackCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtFileDialogCallbackElemnet) / sizeof(s_dtFileDialogCallbackElemnet[0]),
		/*m_pElementBegin*/				s_dtFileDialogCallbackElemnet,
	},
	{
		/*m_szName*/					_WT("文件对话框常量"),
		/*m_szEgName*/					_WT("FILEDIALOG"),
		/*m_szExplain*/					_WT("文件对话框的打开方式常量集合。"),
		/*m_nCmdCount*/					0,//sizeof (s_nFrameElementCmdIndex) / sizeof (s_nFrameElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				NULL,//s_nFrameElementCmdIndex,
		/*m_dwState*/					LDT_ENUM,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtAquaFileDialogCallbackElemnet) / sizeof(s_dtAquaFileDialogCallbackElemnet[0]),
		/*m_pElementBegin*/				s_dtAquaFileDialogCallbackElemnet,
	},
	{
/*m_szName*/					_WT("键盘消息"),
/*m_szEgName*/					_WT("KeyEvent"),
/*m_szExplain*/					_WT("表示键盘事件信息的数据类型。"),
/*m_nCmdCount*/					0,//sizeof (s_nInitialCmdIndex) / sizeof (s_nInitialCmdIndex [0]),
/*m_pnCmdsIndex*/				NULL,//s_nInitialCmdIndex,
/*m_dwState*/					NULL,
/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
/*m_nElementCount*/				sizeof(s_dtKeyEventElemnet) / sizeof(s_dtKeyEventElemnet[0]),
/*m_pElementBegin*/				s_dtKeyEventElemnet,
	},
	{
/*m_szName*/					_WT("鼠标消息"),
/*m_szEgName*/					_WT("Mouse"),
/*m_szExplain*/					_WT("表示鼠标事件信息的数据类型。"),
/*m_nCmdCount*/					0,//sizeof (s_nInitialCmdIndex) / sizeof (s_nInitialCmdIndex [0]),
/*m_pnCmdsIndex*/				NULL,//s_nInitialCmdIndex,
/*m_dwState*/					NULL,
/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
/*m_nElementCount*/				sizeof(s_dtMouseElemnet) / sizeof(s_dtMouseElemnet[0]),
/*m_pElementBegin*/				s_dtMouseElemnet,
	},
	{
/*m_szName*/					_WT("功能键状态常量"),
/*m_szEgName*/					_WT("EVENTFLAG"),
/*m_szExplain*/					_WT("表示功能键状态的常量集合。"),
/*m_nCmdCount*/					0,//sizeof (s_nInitialCmdIndex) / sizeof (s_nInitialCmdIndex [0]),
/*m_pnCmdsIndex*/				NULL,//s_nInitialCmdIndex,
/*m_dwState*/					LDT_ENUM,
/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
/*m_nElementCount*/				sizeof(s_dtAquaEventFlagsElemnet) / sizeof(s_dtAquaEventFlagsElemnet[0]),
/*m_pElementBegin*/				s_dtAquaEventFlagsElemnet,
	},
	{
		/*m_szName*/					_WT("下载目标"),
		/*m_szEgName*/					_WT("DownloadItem"),
		/*m_szExplain*/					_WT("DownloadItem"),
		/*m_nCmdCount*/					sizeof (s_nDownloadElementCmdIndex) / sizeof (s_nDownloadElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nDownloadElementCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtDownloadElemnet) / sizeof(s_dtDownloadElemnet[0]),
		/*m_pElementBegin*/				s_dtDownloadElemnet,
	},
	{
		/*m_szName*/					_WT("下载选项"),
		/*m_szEgName*/					_WT("BeforeDownloadCallback"),
		/*m_szExplain*/					_WT("BeforeDownloadCallback"),
		/*m_nCmdCount*/					sizeof (s_nDownloadCallbackElementCmdIndex) / sizeof (s_nDownloadCallbackElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nDownloadCallbackElementCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtDownloadCallbackElemnet) / sizeof(s_dtDownloadCallbackElemnet[0]),
		/*m_pElementBegin*/				s_dtDownloadCallbackElemnet,
	},
	{
		/*m_szName*/					_WT("下载管理器"),
		/*m_szEgName*/					_WT("DownloadItemCallback"),
		/*m_szExplain*/					_WT("DownloadItemCallback"),
		/*m_nCmdCount*/					sizeof (s_nDownloadItemCallbackElementCmdIndex) / sizeof (s_nDownloadItemCallbackElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nDownloadItemCallbackElementCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtDownloadItemCallbackElemnet) / sizeof(s_dtDownloadItemCallbackElemnet[0]),
		/*m_pElementBegin*/				s_dtDownloadItemCallbackElemnet,
	},
	{
		/*m_szName*/					_WT("认证信息"),
		/*m_szEgName*/					_WT("AuthCallback"),
		/*m_szExplain*/					_WT("AuthCallback"),
		/*m_nCmdCount*/					sizeof (s_nAuthCallbackElementCmdIndex) / sizeof (s_nAuthCallbackElementCmdIndex [0]),
		/*m_pnCmdsIndex*/				s_nAuthCallbackElementCmdIndex,
		/*m_dwState*/					NULL,
		/*m_dwUnitBmpID*/				NULL,//IDB_HTMLVIEWER_BITMAP,
		/*m_nEventCount*/				0,//g_HtmlViewerEventCount,
		/*m_pEventBegin*/				NULL,//(PEVENT_INFO2)g_HtmlViewerEvent,
		/*m_nPropertyCount*/			0,//g_HtmlViewerPropertyCount,
		/*m_pPropertyBegin*/			NULL,//g_HtmlViewerProperty,
		/*m_pfnGetInterface*/			NULL,//cefview_GetInterface_CefViewer,
		/*m_nElementCount*/				sizeof(s_dtAuthCallbackElemnet) / sizeof(s_dtAuthCallbackElemnet[0]),
		/*m_pElementBegin*/				s_dtAuthCallbackElemnet,
	},
};




#endif
#endif
