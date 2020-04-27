//======================================================
// ���ļ��ɺ����Զ�����
// libexdui.lib Ҫ�ͱ��ļ���ͬһĿ¼
// ������EXE������� libexdui.dll
//======================================================
#pragma comment(lib, "libexdui.lib")


//======================================================
// �������ƣ�Ex_Scale
// �������ͣ�С����
// ����<1>��n
//======================================================
extern "C" float __stdcall Ex_Scale (float n);

//======================================================
// �������ƣ�F2I
// �������ͣ�������
// ����<1>��f
//======================================================
extern "C" int __stdcall F2I (float f);

//======================================================
// �������ƣ�I2F
// �������ͣ�С����
// ����<1>��int
//======================================================
extern "C" float __stdcall I2F (int int);

//======================================================
// �������ƣ�Ex_LoadImageFromMemory
// �������ͣ�������
// ����˵����gdi
// ����<1>��lpData
// ����<2>��dwLen
// ����<3>��uType��#IMAGE_
// ����<4>��nIndex
//======================================================
extern "C" int __stdcall Ex_LoadImageFromMemory (int lpData,int dwLen,int uType,int nIndex);

//======================================================
// �������ƣ�Ex_Sleep
// �������ͣ��޷���ֵ
// ����<1>��us
//======================================================
extern "C" void __stdcall Ex_Sleep (int us);

//======================================================
// �������ƣ�Ex_WndRegisterClass
// �������ͣ�������
// ����˵����ע�ᴰ����
// ����<1>��lpwzClassName
// ����<2>��hIcon
// ����<3>��hIconsm
// ����<4>��hCursor
//======================================================
extern "C" int __stdcall Ex_WndRegisterClass (int lpwzClassName,int hIcon,int hIconsm,int hCursor);

//======================================================
// �������ƣ�Ex_WndCreate
// �������ͣ�������
// ����˵������������
// ����<1>��hWndParent
// ����<2>��lpwzClassName
// ����<3>��lpwzWindowName
// ����<4>��x
// ����<5>��y
// ����<6>��Width
// ����<7>��Height
// ����<8>��dwStyle
// ����<9>��dwStyleEx
//======================================================
extern "C" int __stdcall Ex_WndCreate (int hWndParent,int lpwzClassName,int lpwzWindowName,int x,int y,int Width,int Height,int dwStyle,int dwStyleEx);

//======================================================
// �������ƣ�Ex_WndMsgLoop
// �������ͣ�������
// ����˵����������Ϣѭ��
//======================================================
extern "C" int __stdcall Ex_WndMsgLoop ();

//======================================================
// �������ƣ�Ex_WndCenterFrom
// �������ͣ��޷���ֵ
// ����˵�������ھ���
// ����<1>��hWnd��Ԥ���е�ԭʼ����
// ����<2>��hWndFrom��Ԥ���е�Ŀ�괰��,���Ϊ0��Ϊ��Ļ����.
// ����<3>��bFullScreen���Ƿ�ȫ��ģʽ
//======================================================
extern "C" void __stdcall Ex_WndCenterFrom (int hWnd,int hWndFrom,BOOL bFullScreen);

//======================================================
// �������ƣ�Ex_JSLoadConst
// �������ͣ��޷���ֵ
// ����˵��������JS����
// ����<1>��szConst
//======================================================
extern "C" void __stdcall Ex_JSLoadConst (char* szConst);

//======================================================
// �������ƣ�Ex_JSBindObject
// �������ͣ�������
// ����˵�������Լ���JS����
// ����<1>��hExDUI_hObj��������ΪDUI
// ����<2>��szObjName
// ����<3>��lpfnDispatch��HRESULT DispatchFunc (this,atomName,hExDUI,pvParam,wFlags,pDispParams,pVarResult,lpDispInfo)
// ����<4>��pvParam
//======================================================
extern "C" int __stdcall Ex_JSBindObject (int hExDUI_hObj,int szObjName,int lpfnDispatch,int pvParam);

//======================================================
// �������ƣ�Ex_JSEval
// �������ͣ�������
// ����<1>��hExDUI_hObj
// ����<2>��szExpression
// ����<3>��fUseThis��Ϊ��ʱ���ʽ��this�������1��Ӧ��JS����
// ����<4>��pVarResult����ΪNULLʱ�Ὣ����ֵд��,ע���ͷ�
//======================================================
extern "C" int __stdcall Ex_JSEval (int hExDUI_hObj,int szExpression,BOOL fUseThis,int pVarResult);

//======================================================
// �������ƣ�Ex_JSAddCode
// �������ͣ��߼���
// ����<1>��hExDUI_hObj
// ����<2>��szCode
//======================================================
extern "C" BOOL __stdcall Ex_JSAddCode (int hExDUI_hObj,char* szCode);

//======================================================
// �������ƣ�Ex_JSGetLastError
// �������ͣ��߼���
// ����<1>��hExDUI_hObj
// ����<2>��nErrCode
// ����<3>��nErrLine
// ����<4>��szErrMsg��char[1024]
//======================================================
extern "C" BOOL __stdcall Ex_JSGetLastError (int hExDUI_hObj,int nErrCode,int nErrLine,int szErrMsg);

//======================================================
// �������ƣ�Ex_JSRegisterFunction
// �������ͣ��߼���
// ����<1>��hObj
// ����<2>��notyfiCode
// ����<3>��szFuncName
//======================================================
extern "C" BOOL __stdcall Ex_JSRegisterFunction (int hObj,int notyfiCode,int szFuncName);

//======================================================
// �������ƣ�Ex_JSSetVariant
// �������ͣ��޷���ֵ
// ����<1>��pVariant
// ����<2>��nType
// ����<3>��dwValue
//======================================================
extern "C" void __stdcall Ex_JSSetVariant (int pVariant,short nType,int dwValue);

//======================================================
// �������ƣ�Ex_JSSetVariantPtr
// �������ͣ��޷���ֵ
// ����<1>��pVariant
// ����<2>��nType
// ����<3>��pValue
// ����<4>��cbSize��1,2,4,8
//======================================================
extern "C" void __stdcall Ex_JSSetVariantPtr (int pVariant,short nType,int pValue,int cbSize);

//======================================================
// �������ƣ�Ex_JSGetParamCount
// �������ͣ�������
// ����<1>��lpParams
//======================================================
extern "C" int __stdcall Ex_JSGetParamCount (int lpParams);

//======================================================
// �������ƣ�Ex_JSGetParamType
// �������ͣ�������
// ����<1>��lpParams
// ����<2>��nIndex
//======================================================
extern "C" int __stdcall Ex_JSGetParamType (int lpParams,int nIndex);

//======================================================
// �������ƣ�Ex_JSGetParam
// �������ͣ�������
// ����˵��������pVar
// ����<1>��lpParams
// ����<2>��nIndex
//======================================================
extern "C" int __stdcall Ex_JSGetParam (int lpParams,int nIndex);

//======================================================
// �������ƣ�Ex_JSGetParamNumber
// �������ͣ�˫����С����
// ����<1>��lpParams
// ����<2>��nIndex
// ����<3>��nDefault
// ����<4>��pType
//======================================================
extern "C" double __stdcall Ex_JSGetParamNumber (int lpParams,int nIndex,double nDefault,int pType);

//======================================================
// �������ƣ�Ex_JSGetParamInt
// �������ͣ�������
// ����<1>��lpParams
// ����<2>��nIndex
// ����<3>��nDefault
//======================================================
extern "C" int __stdcall Ex_JSGetParamInt (int lpParams,int nIndex,int nDefault);

//======================================================
// �������ƣ�Ex_JSGetParamFloat
// �������ͣ�С����
// ����<1>��lpParams
// ����<2>��nIndex
// ����<3>��nDefault
//======================================================
extern "C" float __stdcall Ex_JSGetParamFloat (int lpParams,int nIndex,float nDefault);

//======================================================
// �������ƣ�Ex_JSGetParamDouble
// �������ͣ�˫����С����
// ����<1>��lpParams
// ����<2>��nIndex
// ����<3>��nDefault
//======================================================
extern "C" double __stdcall Ex_JSGetParamDouble (int lpParams,int nIndex,double nDefault);

//======================================================
// �������ƣ�Ex_JSGetParamString
// �������ͣ�������
// ����˵����wchar_t* ��Ҫ�ͷ�
// ����<1>��lpParams
// ����<2>��nIndex
//======================================================
extern "C" int __stdcall Ex_JSGetParamString (int lpParams,int nIndex);

//======================================================
// �������ƣ�Ex_JSGetParamFormatString
// �������ͣ�������
// ����˵����wchar_t* ��Ҫ�Լ��ͷ�
// ����<1>��lpParams
// ����<2>��nIndex
//======================================================
extern "C" int __stdcall Ex_JSGetParamFormatString (int lpParams,int nIndex);

//======================================================
// �������ƣ�Ex_JSGetParamToString
// �������ͣ�������
// ����˵����wchar_t* ��Ҫ�Լ��ͷ�
// ����<1>��lpParams
// ����<2>��nIndex
// ����<3>��wzDefault
// ����<4>��pType
// ����<5>��fFormat
//======================================================
extern "C" int __stdcall Ex_JSGetParamToString (int lpParams,int nIndex,int wzDefault,int pType,BOOL fFormat);

//======================================================
// �������ƣ�Ex_ThemeFree
// �������ͣ��߼���
// ����˵�����ͷ�����
// ����<1>��hTheme
//======================================================
extern "C" BOOL __stdcall Ex_ThemeFree (int hTheme);

//======================================================
// �������ƣ�Ex_ThemeLoadFromFile
// �������ͣ�������
// ����˵�������������
// ����<1>��lptszFile
// ����<2>��lpKey
// ����<3>��dwKeyLen
// ����<4>��bDefault
//======================================================
extern "C" int __stdcall Ex_ThemeLoadFromFile (int lptszFile,int lpKey,int dwKeyLen,BOOL bDefault);

//======================================================
// �������ƣ�Ex_ThemeLoadFromMemory
// �������ͣ�������
// ����˵�������������
// ����<1>��lpData
// ����<2>��dwDataLen
// ����<3>��lpKey
// ����<4>��dwKeyLen
// ����<5>��bDefault
//======================================================
extern "C" int __stdcall Ex_ThemeLoadFromMemory (int lpData,int dwDataLen,int lpKey,int dwKeyLen,BOOL bDefault);

//======================================================
// �������ƣ�Ex_ThemeDrawControl
// �������ͣ��߼���
// ����˵����������������
// ����<1>��hTheme��������
// ����<2>��hCanvas��������
// ����<3>��dstLeft��Ŀ�����
// ����<4>��dstTop��Ŀ�궥��
// ����<5>��dstRight��Ŀ���ұ�
// ����<6>��dstBottom��Ŀ��ױ�
// ����<7>��atomClass
// ����<8>��atomSrcRect
// ����<9>��dwAlpha��͸����(0-255)
//======================================================
extern "C" BOOL __stdcall Ex_ThemeDrawControl (int hTheme,int hCanvas,float dstLeft,float dstTop,float dstRight,float dstBottom,int atomClass,int atomSrcRect,int dwAlpha);

//======================================================
// �������ƣ�Ex_ThemeDrawControlEx
// �������ͣ��߼���
// ����˵���������������ݼ�ǿ��
// ����<1>��hTheme��������
// ����<2>��hCanvas��������
// ����<3>��dstLeft��Ŀ�����
// ����<4>��dstTop��Ŀ�궥��
// ����<5>��dstRight��Ŀ���ұ�
// ����<6>��dstBottom��Ŀ��ױ�
// ����<7>��atomClass
// ����<8>��atomSrcRect
// ����<9>��atomBackgroundRepeat
// ����<10>��atomBackgroundPositon
// ����<11>��atomBackgroundGrid
// ����<12>��atomBackgroundFlags
// ����<13>��dwAlpha��͸����(0-255)
//======================================================
extern "C" BOOL __stdcall Ex_ThemeDrawControlEx (int hTheme,int hCanvas,float dstLeft,float dstTop,float dstRight,float dstBottom,int atomClass,int atomSrcRect,int atomBackgroundRepeat,int atomBackgroundPositon,int atomBackgroundGrid,int atomBackgroundFlags,int dwAlpha);

//======================================================
// �������ƣ�Ex_ThemeGetValuePtr
// �������ͣ�������
// ����˵������ȡ�������ֵָ��.
// ����<1>��hTheme��������
// ����<2>��atomClass
// ����<3>��atomProp
//======================================================
extern "C" int __stdcall Ex_ThemeGetValuePtr (int hTheme,int atomClass,int atomProp);

//======================================================
// �������ƣ�Ex_ThemeGetColor
// �������ͣ�������
// ����˵������ȡ���������ɫֵ
// ����<1>��hTheme��������
// ����<2>��nIndex��#COLOR_EX_
//======================================================
extern "C" int __stdcall Ex_ThemeGetColor (int hTheme,int nIndex);

//======================================================
// �������ƣ�_res_pack
// �������ͣ��޷���ֵ
// ����<1>��root
// ����<2>��file
// ����<3>��fSubDir
// ����<4>��byteHeader
// ����<5>��bPntBits
//======================================================
extern "C" void __stdcall _res_pack (char* root,char* file,BOOL fSubDir,unsigned char byteHeader,BOOL bPntBits);

//======================================================
// �������ƣ�Ex_ResLoadFromFile
// �������ͣ�������
// ����˵�������ļ�������Դ
// ����<1>��lpwzFile
//======================================================
extern "C" int __stdcall Ex_ResLoadFromFile (int lpwzFile);

//======================================================
// �������ƣ�Ex_ResLoadFromMemory
// �������ͣ�������
// ����˵�������ڴ������Դ
// ����<1>��lpData
// ����<2>��dwDataLen
//======================================================
extern "C" int __stdcall Ex_ResLoadFromMemory (int lpData,int dwDataLen);

//======================================================
// �������ƣ�Ex_ResFree
// �������ͣ��޷���ֵ
// ����˵�����ͷ���Դ
// ����<1>��hRes
//======================================================
extern "C" void __stdcall Ex_ResFree (int hRes);

//======================================================
// �������ƣ�Ex_ResGetFile
// �������ͣ��߼���
// ����˵������ȡ��Դ�ļ�
// ����<1>��hRes
// ����<2>��lpwzPath
// ����<3>��lpFile��[out]�ļ�����ָ��.�û���Ӧ���ͷŸ��ڴ�.
// ����<4>��dwFileLen��[out]�ļ��ߴ�.
//======================================================
extern "C" BOOL __stdcall Ex_ResGetFile (int hRes,int lpwzPath,int lpFile,int dwFileLen);

//======================================================
// �������ƣ�Ex_ResGetFileFromAtom
// �������ͣ��߼���
// ����˵������ȡ��Դ�ļ�
// ����<1>��hRes
// ����<2>��atomPath
// ����<3>��lpFile��[out]�ļ�����ָ��.�û���Ӧ���ͷŸ��ڴ�.
// ����<4>��dwFileLen��[out]�ļ��ߴ�.
//======================================================
extern "C" BOOL __stdcall Ex_ResGetFileFromAtom (int hRes,int atomPath,int lpFile,int dwFileLen);

//======================================================
// �������ƣ�Ex_XmlRegisterCallback
// �������ͣ��޷���ֵ
// ����˵����ע��XML��ֵ�ص�
// ����<1>��atomValue
// ����<2>��pfnCallback
//======================================================
extern "C" void __stdcall Ex_XmlRegisterCallback (int atomValue,int pfnCallback);

//======================================================
// �������ƣ�Ex_I18NGetString
// �������ͣ��߼���
// ����˵�������԰�_��ȡ�ı�
// ����<1>��lpwzID
// ����<2>��lpString��[out]ָ���ַ���ָ��.����ѱ���ʽ��,�û������ Ex_I18NFreeString() �����ͷ�.
// ����<3>��bFormat��[in/out]�Ƿ���Ҫ��ʽ��
//======================================================
extern "C" BOOL __stdcall Ex_I18NGetString (int lpwzID,int lpString,BOOL bFormat);

//======================================================
// �������ƣ�Ex_I18NGetStringFromAtom
// �������ͣ��߼���
// ����˵�������԰�_��ȡ�ı�
// ����<1>��atomID
// ����<2>��lpString��[out]ָ���ַ���ָ��.����ѱ���ʽ��,�û������ Ex_FreeBuffer() �����ͷ�.
// ����<3>��bFormat��[in/out]�Ƿ���Ҫ��ʽ��
//======================================================
extern "C" BOOL __stdcall Ex_I18NGetStringFromAtom (int atomID,int lpString,BOOL bFormat);

//======================================================
// �������ƣ�Ex_I18NRegisterCallback
// �������ͣ��޷���ֵ
// ����˵�������԰�_ע��ص�
// ����<1>��pfnStringFormatCallback��[bool]callback(atomID,lppString)
//======================================================
extern "C" void __stdcall Ex_I18NRegisterCallback (int pfnStringFormatCallback);

//======================================================
// �������ƣ�Ex_I18NStringFormat
// �������ͣ��޷���ֵ
// ����˵�������԰�_�ı���ʽ��
// ����<1>��lppStringSrc
// ����<2>��lpStringFormated
//======================================================
extern "C" void __stdcall Ex_I18NStringFormat (int lppStringSrc,int lpStringFormated);

//======================================================
// �������ƣ�Ex_AllocBuffer
// �������ͣ�������
// ����˵���������ڴ�
// ����<1>��dwLen
//======================================================
extern "C" int __stdcall Ex_AllocBuffer (int dwLen);

//======================================================
// �������ƣ�Ex_FreeBuffer
// �������ͣ��޷���ֵ
// ����˵�����ͷ��ڴ�
// ����<1>��lpBuffer
//======================================================
extern "C" void __stdcall Ex_FreeBuffer (int lpBuffer);

//======================================================
// �������ƣ�_layout_register
// �������ͣ��߼���
// ����<1>��nType����������
// ����<2>��lpfnLayoutProc�����ֹ������ص�����(lpLayout[�п�����NULL],nEevent,wParam,lParam)��������
//======================================================
extern "C" BOOL __stdcall _layout_register (int nType,int lpfnLayoutProc);

//======================================================
// �������ƣ�_layout_unregister
// �������ͣ��߼���
// ����<1>��nType����������
//======================================================
extern "C" BOOL __stdcall _layout_unregister (int nType);

//======================================================
// �������ƣ�_layout_create
// �������ͣ�������
// ����˵����hLayout
// ����<1>��nType��#ELT_ ��������
// ����<2>��hObjBind�����󶨵�HOBJ��HEXDUI
//======================================================
extern "C" int __stdcall _layout_create (int nType,int hObjBind);

//======================================================
// �������ƣ�_layout_destroy
// �������ͣ��߼���
// ����<1>��hLayout
//======================================================
extern "C" BOOL __stdcall _layout_destroy (int hLayout);

//======================================================
// �������ƣ�Ex_ObjLayoutGet
// �������ͣ�������
// ����˵������ȡ���ֶ�����
// ����<1>��handle
//======================================================
extern "C" int __stdcall Ex_ObjLayoutGet (int handle);

//======================================================
// �������ƣ�Ex_ObjLayoutSet
// �������ͣ��߼���
// ����˵�������ò��ֶ�����
// ����<1>��handle
// ����<2>��hLayout
// ����<3>��fUpdate
//======================================================
extern "C" BOOL __stdcall Ex_ObjLayoutSet (int handle,int hLayout,BOOL fUpdate);

//======================================================
// �������ƣ�Ex_ObjLayoutUpdate
// �������ͣ��߼���
// ����˵�������¶��󲼾�
// ����<1>��handle
//======================================================
extern "C" BOOL __stdcall Ex_ObjLayoutUpdate (int handle);

//======================================================
// �������ƣ�Ex_ObjLayoutClear
// �������ͣ��߼���
// ����˵������ն��󲼾���Ϣ
// ����<1>��handle
// ����<2>��bChildren���Ƿ�������������,����Ϊ��ǰ���.
//======================================================
extern "C" BOOL __stdcall Ex_ObjLayoutClear (int handle,BOOL bChildren);

//======================================================
// �������ƣ�_layout_addchild
// �������ͣ��߼���
// ����<1>��hLayout
// ����<2>��hObj
//======================================================
extern "C" BOOL __stdcall _layout_addchild (int hLayout,int hObj);

//======================================================
// �������ƣ�_layout_addchildren
// �������ͣ��߼���
// ����˵�����ѱ�����Ĳ����ظ����(ϵͳ��ť������)
// ����<1>��hLayout
// ����<2>��fDesc���Ƿ���
// ����<3>��dwObjClassATOM��0���Ϊ����
// ����<4>��nCount������ĸ���
//======================================================
extern "C" BOOL __stdcall _layout_addchildren (int hLayout,BOOL fDesc,int dwObjClassATOM,int nCount);

//======================================================
// �������ƣ�_layout_deletechild
// �������ͣ��߼���
// ����<1>��hLayout
// ����<2>��hObj
//======================================================
extern "C" BOOL __stdcall _layout_deletechild (int hLayout,int hObj);

//======================================================
// �������ƣ�_layout_deletechildren
// �������ͣ��߼���
// ����<1>��hLayout
// ����<2>��dwObjClassATOM��0���Ϊ����
//======================================================
extern "C" BOOL __stdcall _layout_deletechildren (int hLayout,int dwObjClassATOM);

//======================================================
// �������ƣ�_layout_setchildprop
// �������ͣ��߼���
// ����<1>��hLayout
// ����<2>��hObj
// ����<3>��dwPropID
// ����<4>��pvValue
//======================================================
extern "C" BOOL __stdcall _layout_setchildprop (int hLayout,int hObj,int dwPropID,int pvValue);

//======================================================
// �������ƣ�_layout_getchildprop
// �������ͣ��߼���
// ����<1>��hLayout
// ����<2>��hObj
// ����<3>��dwPropID
// ����<4>��pvValue
//======================================================
extern "C" BOOL __stdcall _layout_getchildprop (int hLayout,int hObj,int dwPropID,int pvValue);

//======================================================
// �������ƣ�_layout_getchildproplist
// �������ͣ��߼���
// ����<1>��hLayout
// ����<2>��hObj
// ����<3>��lpProps�����ͷ�
//======================================================
extern "C" BOOL __stdcall _layout_getchildproplist (int hLayout,int hObj,int lpProps);

//======================================================
// �������ƣ�_layout_getprop
// �������ͣ�������
// ����<1>��hLayout
// ����<2>��dwPropID
//======================================================
extern "C" int __stdcall _layout_getprop (int hLayout,int dwPropID);

//======================================================
// �������ƣ�_layout_setprop
// �������ͣ��߼���
// ����<1>��hLayout
// ����<2>��dwPropID
// ����<3>��pvValue
//======================================================
extern "C" BOOL __stdcall _layout_setprop (int hLayout,int dwPropID,int pvValue);

//======================================================
// �������ƣ�_layout_getproplist
// �������ͣ�������
// ����<1>��hLayout
//======================================================
extern "C" int __stdcall _layout_getproplist (int hLayout);

//======================================================
// �������ƣ�_layout_update
// �������ͣ��߼���
// ����<1>��hLayout
//======================================================
extern "C" BOOL __stdcall _layout_update (int hLayout);

//======================================================
// �������ƣ�_layout_gettype
// �������ͣ�������
// ����˵������������typeӦ�����´���LM
// ����<1>��hLayout
//======================================================
extern "C" int __stdcall _layout_gettype (int hLayout);

//======================================================
// �������ƣ�_layout_enableupdate
// �������ͣ��߼���
// ����<1>��hLayout
// ����<2>��fUpdateable
//======================================================
extern "C" BOOL __stdcall _layout_enableupdate (int hLayout,BOOL fUpdateable);

//======================================================
// �������ƣ�_layout_notify
// �������ͣ�������
// ����<1>��hLayout
// ����<2>��nEvent
// ����<3>��wParam
// ����<4>��lParam
//======================================================
extern "C" int __stdcall _layout_notify (int hLayout,int nEvent,int wParam,int lParam);

//======================================================
// �������ƣ�_layout_table_setinfo
// �������ͣ��߼���
// ����<1>��hLayout
// ����<2>��aRowHeight
// ����<3>��cRows
// ����<4>��aCellWidth
// ����<5>��cCells
//======================================================
extern "C" BOOL __stdcall _layout_table_setinfo (int hLayout,int aRowHeight,int cRows,int aCellWidth,int cCells);

//======================================================
// �������ƣ�_layout_absolute_setedge
// �������ͣ��߼���
// ����<1>��hLayout
// ����<2>��hObjChild
// ����<3>��dwEdge��#ELCP_ABSOLUTE_XXX
// ����<4>��dwType
// ����<5>��nValue
//======================================================
extern "C" BOOL __stdcall _layout_absolute_setedge (int hLayout,int hObjChild,int dwEdge,int dwType,int nValue);

//======================================================
// �������ƣ�_layout_absolute_lock
// �������ͣ��߼���
// ����˵��������ǰλ������
// ����<1>��hLayout
// ����<2>��hObjChild
// ����<3>��tLeft��#ELCP_ABSOLUTE_XXX_TYPE ��ͬ
// ����<4>��tTop
// ����<5>��tRight
// ����<6>��tBottom
// ����<7>��tWidth
// ����<8>��tHeight
//======================================================
extern "C" BOOL __stdcall _layout_absolute_lock (int hLayout,int hObjChild,int tLeft,int tTop,int tRight,int tBottom,int tWidth,int tHeight);

//======================================================
// �������ƣ�Ex_DUIBindWindow
// �������ͣ�������
// ����˵�����󶨴���,�ɹ�����������,ʧ�ܷ���0.
// ����<1>��hWnd�����ھ��
// ����<2>��hTheme��������.(ֵ��Ϊ0)
// ����<3>��dwStyle����س���:#EWS_
//======================================================
extern "C" int __stdcall Ex_DUIBindWindow (int hWnd,int hTheme,int dwStyle);

//======================================================
// �������ƣ�Ex_DUIBindWindowEx
// �������ͣ�������
// ����˵�����󶨴���,�ɹ�����������,ʧ�ܷ���0.
// ����<1>��hWnd�����ھ��
// ����<2>��hTheme��������.(ֵ��Ϊ0)
// ����<3>��dwStyle����س���:#EWS_
// ����<4>��lParam�����Ӳ���.(ֵ��Ϊ0)
// ����<5>��lpfnMsgProc��(BOOL)MsgProc(hWnd,hExDui,uMsg,wParam,lParam,lpResult).
//======================================================
extern "C" int __stdcall Ex_DUIBindWindowEx (int hWnd,int hTheme,int dwStyle,int lParam,int lpfnMsgProc);

//======================================================
// �������ƣ�Ex_DUIShowWindow
// �������ͣ��߼���
// ����˵������ʾ����
// ����<1>��hExDui��������
// ����<2>��nCmdShow����س���:#SW_
// ����<3>��dwTimer������ʱ����.(ms)
// ����<4>��dwFrames��������֡��.
// ����<5>��dwFlags���������.#EXA_
//======================================================
extern "C" BOOL __stdcall Ex_DUIShowWindow (int hExDui,int nCmdShow,int dwTimer,int dwFrames,int dwFlags);

//======================================================
// �������ƣ�Ex_DUIShowWindowEx
// �������ͣ��߼���
// ����˵������ʾ����
// ����<1>��hExDui��������
// ����<2>��nCmdShow����س���:#SW_
// ����<3>��dwTimer������ʱ����.(ms)
// ����<4>��dwFrames��������֡��.
// ����<5>��dwFlags���������.#EXA_
// ����<6>��uEasing��#��������_
// ����<7>��wParam������1
// ����<8>��lParam������2
//======================================================
extern "C" BOOL __stdcall Ex_DUIShowWindowEx (int hExDui,int nCmdShow,int dwTimer,int dwFrames,int dwFlags,int uEasing,int wParam,int lParam);

//======================================================
// �������ƣ�Ex_DUISetLong
// �������ͣ�������
// ����˵��������������ֵ
// ����<1>��hExDui
// ����<2>��nIndex��#EWL_
// ����<3>��dwNewlong
//======================================================
extern "C" int __stdcall Ex_DUISetLong (int hExDui,int nIndex,int dwNewlong);

//======================================================
// �������ƣ�Ex_DUIGetLong
// �������ͣ�������
// ����˵������ȡ������ֵ
// ����<1>��hExDui��������
// ����<2>��nIndex����س���: EWL_
//======================================================
extern "C" int __stdcall Ex_DUIGetLong (int hExDui,int nIndex);

//======================================================
// �������ƣ�Ex_DUIGetClientRect
// �������ͣ��߼���
// ����˵������ȡ�ͻ�������
// ����<1>��hExDui��������
// ����<2>��lpClientRect������ָ��
//======================================================
extern "C" BOOL __stdcall Ex_DUIGetClientRect (int hExDui,int lpClientRect);

//======================================================
// �������ƣ�Ex_DUICreateFromHRes
// �������ͣ��߼���
// ����˵������������Դ�����
// ����<1>��hParent�������ھ��
// ����<2>��hTheme��������
// ����<3>��hRes����Դ���
// ����<4>��atomLayout�������ļ���ԭ�Ӻ�
// ����<5>��hWnd��(out)���ش��ھ��
// ����<6>��hExDui��(out)����������
//======================================================
extern "C" BOOL __stdcall Ex_DUICreateFromHRes (int hParent,int hTheme,int hRes,int atomLayout,int hWnd,int hExDui);

//======================================================
// �������ƣ�Ex_DUICreateFromLayout
// �������ͣ��߼���
// ����˵���������Բ���
// ����<1>��hParent�������ھ��
// ����<2>��hTheme��������
// ����<3>��lpLayout��������Դ����ָ��
// ����<4>��cbLayout��������Դ���ݳ���
// ����<5>��hWnd��(out)���ش��ھ��
// ����<6>��hExDui��(out)����������
//======================================================
extern "C" BOOL __stdcall Ex_DUICreateFromLayout (int hParent,int hTheme,int lpLayout,int cbLayout,int hWnd,int hExDui);

//======================================================
// �������ƣ�Ex_DUIGetObjFromPoint
// �������ͣ�������
// ����˵������ȡ������ڴ���������(���handleΪ0,�����x,yĬ��Ϊ��ǰ���[��Ļ]����;����Ϊx,yΪ��������)
// ����<1>��handle��0[�������ڴ���]/���ھ��/������/������
// ����<2>��x
// ����<3>��y
//======================================================
extern "C" int __stdcall Ex_DUIGetObjFromPoint (int handle,int x,int y);

//======================================================
// �������ƣ�Ex_DUITrayIconSet
// �������ͣ��߼���
// ����˵������������ͼ��
// ����<1>��hExdui��������
// ����<2>��hIcon��ͼ����
// ����<3>��lpwzTips����ʾ�ı�ָ��
//======================================================
extern "C" BOOL __stdcall Ex_DUITrayIconSet (int hExdui,int hIcon,int lpwzTips);

//======================================================
// �������ƣ�Ex_DUITrayIconPopup
// �������ͣ��߼���
// ����˵������������ͼ��
// ����<1>��hExDui��������
// ����<2>��lpwzInfo�������ı�����
// ����<3>��lpwzInfoTitle�����������ı�
// ����<4>��dwInfoFlags����س��� #NIIF_
//======================================================
extern "C" BOOL __stdcall Ex_DUITrayIconPopup (int hExDui,int lpwzInfo,int lpwzInfoTitle,int dwInfoFlags);

//======================================================
// �������ƣ�Ex_DUIFromWindow
// �������ͣ�������
// ����˵�����Ӵ��ھ����ȡ������
// ����<1>��hWnd
//======================================================
extern "C" int __stdcall Ex_DUIFromWindow (int hWnd);

//======================================================
// �������ƣ�Ex_MessageBox
// �������ͣ�������
// ����˵����������Ϣ��
// ����<1>��handle��������/������/���ھ��.(�����ֵΪ���ھ���Ҵ���δʹ��������Ⱦ,����Ĭ����Ϣ�򵯳�)
// ����<2>��lpText����Ϣ������
// ����<3>��lpCaption����Ϣ�����
// ����<4>��uType����س��� #MB_
// ����<5>��dwFlags����س��� #EMF_
//======================================================
extern "C" int __stdcall Ex_MessageBox (int handle,int lpText,int lpCaption,int uType,int dwFlags);

//======================================================
// �������ƣ�Ex_MessageBoxEx
// �������ͣ�������
// ����˵����������Ϣ��
// ����<1>��handle��������/������/���ھ��.(�����ֵΪ���ھ���Ҵ���δʹ��������Ⱦ,����Ĭ����Ϣ�򵯳�)
// ����<2>��lpText����Ϣ������
// ����<3>��lpCaption����Ϣ�����
// ����<4>��uType����س��� #MB_
// ����<5>��lpCheckBox���������(��Ϣ�����½���ʾһ���������).(����ô���δʹ��������Ⱦ,���ֵ��Ч)
// ����<6>��lpCheckBoxChecked�����ؼ���ѡ��״̬.(����ô���δʹ��������Ⱦ,���ֵ��Ч)
// ����<7>��dwMilliseconds����Ϣ���ӳٹر�ʱ�䣬��λ�����롣�����ֵ��Ϊ0,�ҳ�ʱ��(���û�δ����)����Ϣ���Զ��رգ�����32000��
// ����<8>��dwFlags����س��� #EMF_
// ����<9>��lpfnMsgProc��(BOOL)MsgProc(hWnd,hExDui,uMsg,wParam,lParam,lpResult).
//======================================================
extern "C" int __stdcall Ex_MessageBoxEx (int handle,int lpText,int lpCaption,int uType,int lpCheckBox,BOOL lpCheckBoxChecked,int dwMilliseconds,int dwFlags,int lpfnMsgProc);

//======================================================
// �������ƣ�Ex_TrackPopupMenu
// �������ͣ��߼���
// ����˵���������˵�
// ����<1>��hMenu���˵����
// ����<2>��uFlags����س��� TPM_
// ����<3>��x����������X(��Ļ����)
// ����<4>��y����������Y(��Ļ����)
// ����<5>��nReserved��0.����
// ����<6>��handle��������/������/���ھ��.(�����ֵΪ���ھ���Ҵ���δʹ��������Ⱦ,����Ĭ�ϲ˵�����)
// ����<7>��lpRc��0.����
// ����<8>��pfnCallback��(BOOL)MsgProc(hWnd,hExDui,uMsg,wParam,lParam,lpResult).
// ����<9>��dwFlags����س��� EMNF_
//======================================================
extern "C" BOOL __stdcall Ex_TrackPopupMenu (int hMenu,int uFlags,int x,int y,int nReserved,int handle,int lpRc,int pfnCallback,int dwFlags);

//======================================================
// �������ƣ�Ex_ObjRegister
// �������ͣ�������
// ����˵����ע�����.ʧ�ܷ���0
// ����<1>��lptszClassName���������.���������:MAX_CLASS_NAME_LEN
// ����<2>��dwStyle�����Ĭ�Ϸ��
// ����<3>��dwStyleEx�����Ĭ����չ���
// ����<4>��dwTextFormat����س��� DT_
// ����<5>��cbObjExtra�������������ֽ���(ֵ��Ϊ0)
// ����<6>��hCursor�����Ĭ�����ָ����(ֵ��Ϊ0)
// ����<7>��dwFlags�����־ #ECF_(ֵ��Ϊ0)
// ����<8>��pfnObjProc�����Ĭ�ϻص�
//======================================================
extern "C" int __stdcall Ex_ObjRegister (int lptszClassName,int dwStyle,int dwStyleEx,int dwTextFormat,int cbObjExtra,int hCursor,int dwFlags,int pfnObjProc);

//======================================================
// �������ƣ�Ex_ObjCallProc
// �������ͣ�������
// ����˵�������ù���
// ����<1>��lpPrevObjProc
// ����<2>��hWnd
// ����<3>��hObj
// ����<4>��uMsg
// ����<5>��wParam
// ����<6>��lParam
// ����<7>��pvData
//======================================================
extern "C" int __stdcall Ex_ObjCallProc (int lpPrevObjProc,int hWnd,int hObj,int uMsg,int wParam,int lParam,int pvData);

//======================================================
// �������ƣ�Ex_ObjDefProc
// �������ͣ�������
// ����˵�������Ĭ�Ϲ���
// ����<1>��hWnd
// ����<2>��hObj
// ����<3>��uMsg
// ����<4>��wParam
// ����<5>��lParam
//======================================================
extern "C" int __stdcall Ex_ObjDefProc (int hWnd,int hObj,int uMsg,int wParam,int lParam);

//======================================================
// �������ƣ�Ex_ObjDispatchMessage
// �������ͣ�������
// ����˵�����ַ���Ϣ
// ����<1>��hObj
// ����<2>��uMsg
// ����<3>��wParam
// ����<4>��lParam
//======================================================
extern "C" int __stdcall Ex_ObjDispatchMessage (int hObj,int uMsg,int wParam,int lParam);

//======================================================
// �������ƣ�Ex_ObjDispatchNotify
// �������ͣ�������
// ����˵�����ַ��¼�
// ����<1>��hObj
// ����<2>��nCode
// ����<3>��wParam
// ����<4>��lParam
//======================================================
extern "C" int __stdcall Ex_ObjDispatchNotify (int hObj,int nCode,int wParam,int lParam);

//======================================================
// �������ƣ�Ex_ObjHandleEvent
// �������ͣ��߼���
// ����˵�����ҽ��¼��ص�
// ����<1>��hObj
// ����<2>��nEvent��#NM_
// ����<3>��pfnCallback��(Bool) Handler(hObj,nID,nCode,wParam,lParam) ���ؼټ����ַ��¼�,��������ֹͣ�����ַ��¼�
//======================================================
extern "C" BOOL __stdcall Ex_ObjHandleEvent (int hObj,int nEvent,int pfnCallback);

//======================================================
// �������ƣ�Ex_ObjSendMessage
// �������ͣ�������
// ����˵����������Ϣ
// ����<1>��hObj
// ����<2>��uMsg
// ����<3>��wParam
// ����<4>��lParam
//======================================================
extern "C" int __stdcall Ex_ObjSendMessage (int hObj,int uMsg,int wParam,int lParam);

//======================================================
// �������ƣ�Ex_ObjPostMessage
// �������ͣ�������
// ����˵����Ͷ����Ϣ
// ����<1>��hObj
// ����<2>��uMsg
// ����<3>��wParam
// ����<4>��lParam
//======================================================
extern "C" int __stdcall Ex_ObjPostMessage (int hObj,int uMsg,int wParam,int lParam);

//======================================================
// �������ƣ�Ex_ObjDestroy
// �������ͣ�������
// ����˵�����������
// ����<1>��hObj
//======================================================
extern "C" int __stdcall Ex_ObjDestroy (int hObj);

//======================================================
// �������ƣ�Ex_ObjCreate
// �������ͣ�������
// ����˵�����������.
// ����<1>��lptszClassName���������
// ����<2>��lptszObjTitle���������
// ����<3>��dwStyle�������� ��س��� EOS_
// ����<4>��x�����
// ����<5>��y������
// ����<6>��width�����
// ����<7>��height���߶�
// ����<8>��hParent����������
//======================================================
extern "C" int __stdcall Ex_ObjCreate (int lptszClassName,int lptszObjTitle,int dwStyle,int x,int y,int width,int height,int hParent);

//======================================================
// �������ƣ�Ex_ObjCreateEx
// �������ͣ�������
// ����˵�����������.
// ����<1>��dwStyleEx�������չ��� ��س��� EOS_EX_
// ����<2>��lptszClassName���������
// ����<3>��lptszObjTitle���������
// ����<4>��dwStyle�������� ��س��� EOS_
// ����<5>��x�����
// ����<6>��y������
// ����<7>��width�����
// ����<8>��height���߶�
// ����<9>��hParent����������
// ����<10>��nID
// ����<11>��dwTextFormat����س��� DT_
// ����<12>��lParam�����Ӳ���
// ����<13>��hTheme��������.0ΪĬ��
// ����<14>��lpfnMsgProc��(BOOL)MsgProc(hWnd,hObj,uMsg,wParam,lParam,lpReturn).
//======================================================
extern "C" int __stdcall Ex_ObjCreateEx (int dwStyleEx,int lptszClassName,int lptszObjTitle,int dwStyle,int x,int y,int width,int height,int hParent,int nID,int dwTextFormat,int lParam,int hTheme,int lpfnMsgProc);

//======================================================
// �������ƣ�Ex_ObjBeginPaint
// �������ͣ��߼���
// ����˵������ʼ����
// ����<1>��hObj
// ����<2>��lpPS
//======================================================
extern "C" BOOL __stdcall Ex_ObjBeginPaint (int hObj,int lpPS);

//======================================================
// �������ƣ�Ex_ObjDrawBackgroundProc
// �������ͣ��߼���
// ����˵����Ĭ�ϻ��Ʊ�������
// ����<1>��hObj
// ����<2>��hCanvas
// ����<3>��lprcPaint
//======================================================
extern "C" BOOL __stdcall Ex_ObjDrawBackgroundProc (int hObj,int hCanvas,int lprcPaint);

//======================================================
// �������ƣ�Ex_ObjEndPaint
// �������ͣ��߼���
// ����˵������������
// ����<1>��hObj
// ����<2>��lpPS
//======================================================
extern "C" BOOL __stdcall Ex_ObjEndPaint (int hObj,int lpPS);

//======================================================
// �������ƣ�Ex_ObjInvalidateRect
// �������ͣ��߼���
// ����˵���������ػ�����
// ����<1>��hObj
// ����<2>��lprcRedraw
//======================================================
extern "C" BOOL __stdcall Ex_ObjInvalidateRect (int hObj,int lprcRedraw);

//======================================================
// �������ƣ�Ex_ObjUpdate
// �������ͣ��߼���
// ����˵���������������
// ����<1>��hObj
//======================================================
extern "C" BOOL __stdcall Ex_ObjUpdate (int hObj);

//======================================================
// �������ƣ�Ex_ObjSetRedraw
// �������ͣ��߼���
// ����˵������������Ƿ�����ػ�.��������չ������EOS_EX_COMPOSITED,��ú�����Ч.
// ����<1>��hObj��������
// ����<2>��fCanbeRedraw���Ƿ���ػ�
//======================================================
extern "C" BOOL __stdcall Ex_ObjSetRedraw (int hObj,BOOL fCanbeRedraw);

//======================================================
// �������ƣ�Ex_ObjGetRect
// �������ͣ��߼���
// ����˵������ȡ�������
// ����<1>��hObj
// ����<2>��lpRect
//======================================================
extern "C" BOOL __stdcall Ex_ObjGetRect (int hObj,int lpRect);

//======================================================
// �������ƣ�Ex_ObjGetClientRect
// �������ͣ��߼���
// ����˵������ȡ����ͻ�������
// ����<1>��hObj
// ����<2>��lpRect
//======================================================
extern "C" BOOL __stdcall Ex_ObjGetClientRect (int hObj,int lpRect);

//======================================================
// �������ƣ�Ex_ObjGetTextRect
// �������ͣ��߼���
// ����˵������ȡ����ı�����
// ����<1>��hObj
// ����<2>��lpRect
//======================================================
extern "C" BOOL __stdcall Ex_ObjGetTextRect (int hObj,int lpRect);

//======================================================
// �������ƣ�Ex_ObjSetPadding
// �������ͣ��߼���
// ����˵�����������ƫ�ƾ���
// ����<1>��hObj
// ����<2>��nPaddingType��EOPT_TEXT=0
// ����<3>��left
// ����<4>��top
// ����<5>��right
// ����<6>��bottom
// ����<7>��fRedraw
//======================================================
extern "C" BOOL __stdcall Ex_ObjSetPadding (int hObj,int nPaddingType,int left,int top,int right,int bottom,BOOL fRedraw);

//======================================================
// �������ƣ�Ex_ObjClientToWindow
// �������ͣ��߼���
// ����˵�����ͻ������굽��������
// ����<1>��hObj
// ����<2>��x
// ����<3>��y
//======================================================
extern "C" BOOL __stdcall Ex_ObjClientToWindow (int hObj,int x,int y);

//======================================================
// �������ƣ�Ex_ObjClientToScreen
// �������ͣ��߼���
// ����˵�����ͻ������굽��Ļ����
// ����<1>��hObj
// ����<2>��x
// ����<3>��y
//======================================================
extern "C" BOOL __stdcall Ex_ObjClientToScreen (int hObj,int x,int y);

//======================================================
// �������ƣ�Ex_ObjEnable
// �������ͣ��߼���
// ����˵���������������״̬.
// ����<1>��hObj��������
// ����<2>��fEnable���Ƿ����
//======================================================
extern "C" BOOL __stdcall Ex_ObjEnable (int hObj,BOOL fEnable);

//======================================================
// �������ƣ�Ex_ObjIsEnable
// �������ͣ��߼���
// ����˵��������Ƿ����
// ����<1>��hObj
//======================================================
extern "C" BOOL __stdcall Ex_ObjIsEnable (int hObj);

//======================================================
// �������ƣ�Ex_ObjIsVisible
// �������ͣ��߼���
// ����˵�����ж�����Ƿ����.
// ����<1>��hObj��������
//======================================================
extern "C" BOOL __stdcall Ex_ObjIsVisible (int hObj);

//======================================================
// �������ƣ�Ex_ObjShow
// �������ͣ��߼���
// ����˵���������������״̬
// ����<1>��hObj
// ����<2>��fShow
//======================================================
extern "C" BOOL __stdcall Ex_ObjShow (int hObj,BOOL fShow);

//======================================================
// �������ƣ�Ex_ObjIsValidate
// �������ͣ��߼���
// ����˵�����Ƿ���Ч�����
// ����<1>��hObj
//======================================================
extern "C" BOOL __stdcall Ex_ObjIsValidate (int hObj);

//======================================================
// �������ƣ�Ex_ObjGetParent
// �������ͣ�������
// ����˵������ȡ�����
// ����<1>��hObj
//======================================================
extern "C" int __stdcall Ex_ObjGetParent (int hObj);

//======================================================
// �������ƣ�Ex_ObjGetParentEx
// �������ͣ�������
// ����˵������ȡ�������EXDUI���
// ����<1>��hObj
// ����<2>��phExDUI
//======================================================
extern "C" int __stdcall Ex_ObjGetParentEx (int hObj,int phExDUI);

//======================================================
// �������ƣ�Ex_ObjSetParent
// �������ͣ�������
// ����˵�������ø����
// ����<1>��hObj
// ����<2>��hParent
//======================================================
extern "C" int __stdcall Ex_ObjSetParent (int hObj,int hParent);

//======================================================
// �������ƣ�Ex_ObjGetLong
// �������ͣ�������
// ����˵������ȡ�����ֵ
// ����<1>��hObj
// ����<2>��nIndex����س��� #EOL_
//======================================================
extern "C" int __stdcall Ex_ObjGetLong (int hObj,int nIndex);

//======================================================
// �������ƣ�Ex_ObjSetLong
// �������ͣ�������
// ����˵�������������ֵ
// ����<1>��hObj
// ����<2>��nIndex��#EOL_
// ����<3>��dwNewLong
//======================================================
extern "C" int __stdcall Ex_ObjSetLong (int hObj,int nIndex,int dwNewLong);

//======================================================
// �������ƣ�Ex_ObjSetPos
// �������ͣ��߼���
// ����˵�����������λ��
// ����<1>��hObj
// ����<2>��hObjInsertAfter
// ����<3>��x
// ����<4>��y
// ����<5>��width
// ����<6>��height
// ����<7>��flags����س��� #SWP_
//======================================================
extern "C" BOOL __stdcall Ex_ObjSetPos (int hObj,int hObjInsertAfter,int x,int y,int width,int height,int flags);

//======================================================
// �������ƣ�Ex_ObjGetObj
// �������ͣ�������
// ����˵����������ָ��������ض���ϵ����Z��������ߣ�����������
// ����<1>��hObj
// ����<2>��nCmd����س��� #GW_
//======================================================
extern "C" int __stdcall Ex_ObjGetObj (int hObj,int nCmd);

//======================================================
// �������ƣ�Ex_ObjGetFromID
// �������ͣ�������
// ����˵������ȡ��������ID
// ����<1>��hExDuiOrhObj�����ָ��������,��ȫ������;���ָ��������,��Ӹ�������������ʼ����.
// ����<2>��nID
//======================================================
extern "C" int __stdcall Ex_ObjGetFromID (int hExDuiOrhObj,int nID);

//======================================================
// �������ƣ�Ex_ObjGetFromName
// �������ͣ�������
// ����˵������ȡ��������NAME
// ����<1>��hExDuiOrhObj�����ָ��������,��ȫ������;���ָ��������,��Ӹ�������������ʼ����.
// ����<2>��lpwzName
//======================================================
extern "C" int __stdcall Ex_ObjGetFromName (int hExDuiOrhObj,int lpwzName);

//======================================================
// �������ƣ�Ex_ObjFind
// �������ͣ�������
// ����˵�����������.
// ����<1>��hObjParent�������������Ӹ���������Ϊ��������
// ����<2>��hObjChildAfter���ɴ������ʼ���ң�������������������Ϊ0����ӵ�һ�������ʼ���ҡ�
// ����<3>��lpClassName�������ҵ��������ָ��/Ex_ATOM()
// ����<4>��lpTitle�������ҵ��������
//======================================================
extern "C" int __stdcall Ex_ObjFind (int hObjParent,int hObjChildAfter,int lpClassName,int lpTitle);

//======================================================
// �������ƣ�Ex_ObjEnumChild
// �������ͣ��߼���
// ����˵����ö�������.
// ����<1>��hObjParent��������ľ�����Ӹ���ö����Ϊ��������
// ����<2>��lpEnumFunc��callback(hObj,lParam).����1����ö��,����0ֹͣö��.
// ����<3>��lParam����������
//======================================================
extern "C" BOOL __stdcall Ex_ObjEnumChild (int hObjParent,int lpEnumFunc,int lParam);

//======================================================
// �������ƣ�Ex_ObjGetText
// �������ͣ�������
// ����˵������ȡ����ı�.����ֵ:�ѿ����ַ�����.
// ����<1>��hObj��������.
// ����<2>��lpString��������ָ��.
// ����<3>��nMaxCount������������.
//======================================================
extern "C" int __stdcall Ex_ObjGetText (int hObj,int lpString,int nMaxCount);

//======================================================
// �������ƣ�Ex_ObjGetTextLength
// �������ͣ�������
// ����˵������ȡ����ı�����
// ����<1>��hObj
//======================================================
extern "C" int __stdcall Ex_ObjGetTextLength (int hObj);

//======================================================
// �������ƣ�Ex_ObjSetText
// �������ͣ��߼���
// ����˵������������ı�.
// ����<1>��hObj��������.
// ����<2>��lpString��ָ��һ���ս������ַ�����ָ��.
// ����<3>��fRedraw���Ƿ��ػ����
//======================================================
extern "C" BOOL __stdcall Ex_ObjSetText (int hObj,int lpString,BOOL fRedraw);

//======================================================
// �������ƣ�Ex_ObjSetFont
// �������ͣ��߼���
// ����˵������������ı�����
// ����<1>��hObj
// ����<2>��hFont��_font_createxxx
// ����<3>��fRedraw
//======================================================
extern "C" BOOL __stdcall Ex_ObjSetFont (int hObj,int hFont,BOOL fRedraw);

//======================================================
// �������ƣ�Ex_ObjSetFontFromFamily
// �������ͣ��߼���
// ����˵������������ı�����
// ����<1>��hObj
// ����<2>��lpszFontfamily��-1 ΪĬ������
// ����<3>��dwFontsize��-1 ΪĬ�ϳߴ�
// ����<4>��dwFontstyle��-1 ΪĬ�Ϸ��
// ����<5>��fRedraw
//======================================================
extern "C" BOOL __stdcall Ex_ObjSetFontFromFamily (int hObj,int lpszFontfamily,int dwFontsize,int dwFontstyle,BOOL fRedraw);

//======================================================
// �������ƣ�Ex_ObjGetFont
// �������ͣ�������
// ����˵������ȡ���塣�û���Ӧ�����ٸ��������
// ����<1>��hObj
//======================================================
extern "C" int __stdcall Ex_ObjGetFont (int hObj);

//======================================================
// �������ƣ�Ex_ObjSetColor
// �������ͣ�������
// ����˵����������������ɫ,�����޸�ǰ�����ɫ
// ����<1>��hObj
// ����<2>��nIndex����س��� COLOR_EX_
// ����<3>��dwColor
// ����<4>��fRedraw���Ƿ��ػ�
//======================================================
extern "C" int __stdcall Ex_ObjSetColor (int hObj,int nIndex,int dwColor,BOOL fRedraw);

//======================================================
// �������ƣ�Ex_ObjGetColor
// �������ͣ�������
// ����˵������ȡ��������ɫ
// ����<1>��hObj
// ����<2>��nIndex����س��� COLOR_EX_
//======================================================
extern "C" int __stdcall Ex_ObjGetColor (int hObj,int nIndex);

//======================================================
// �������ƣ�Ex_ObjGetBackgroundImage
// �������ͣ��߼���
// ����˵������ȡ���������Ϣ
// ����<1>��handle
// ����<2>��lpBackgroundImage����ؽṹ EX_BACKGROUNDIMAGEINFO
//======================================================
extern "C" BOOL __stdcall Ex_ObjGetBackgroundImage (int handle,int lpBackgroundImage);

//======================================================
// �������ƣ�Ex_ObjSetBackgroundImage
// �������ͣ��߼���
// ����˵�����������������Ϣ
// ����<1>��handle��������/������
// ����<2>��lpImage��ͼƬָ��
// ����<3>��dwImageLen��ͼƬ����
// ����<4>��X��ƫ��X
// ����<5>��Y��ƫ��Y
// ����<6>��dwRepeat����س��� BIR_
// ����<7>��lpGird���Ź�����ָ�� (ֵ��Ϊ0)
// ����<8>��dwFlags����س��� BIF_
// ����<9>��dwAlpha��͸����(0-255)
// ����<10>��fUpdate���Ƿ�����ˢ��
//======================================================
extern "C" BOOL __stdcall Ex_ObjSetBackgroundImage (int handle,int lpImage,int dwImageLen,int X,int Y,int dwRepeat,int lpGird,int dwFlags,int dwAlpha,BOOL fUpdate);

//======================================================
// �������ƣ�Ex_ObjSetBackgroundPlayState
// �������ͣ��߼���
// ����˵���������������ͼƬ����״̬.
// ����<1>��handle��������/������
// ����<2>��fPlayFrames���Ƿ񲥷�.
// ����<3>��fResetFrame���Ƿ����õ�ǰ֡Ϊ��֡.
// ����<4>��fUpdate���Ƿ���±���.
//======================================================
extern "C" BOOL __stdcall Ex_ObjSetBackgroundPlayState (int handle,BOOL fPlayFrames,BOOL fResetFrame,BOOL fUpdate);

//======================================================
// �������ƣ�Ex_ObjSetTimer
// �������ͣ�������
// ����˵�����������ʱ��
// ����<1>��hObj
// ����<2>��uElapse
//======================================================
extern "C" int __stdcall Ex_ObjSetTimer (int hObj,int uElapse);

//======================================================
// �������ƣ�Ex_ObjKillTimer
// �������ͣ��߼���
// ����˵�����������ʱ��
// ����<1>��hObj
//======================================================
extern "C" BOOL __stdcall Ex_ObjKillTimer (int hObj);

//======================================================
// �������ƣ�Ex_ObjSetRadius
// �������ͣ��߼���
// ����˵�����������Բ�Ƕ�
// ����<1>��hObj
// ����<2>��topleft�����Ͻ�
// ����<3>��topright�����Ͻ�
// ����<4>��bottomright�����½�
// ����<5>��bottomleft�����½�
// ����<6>��fUpdate
//======================================================
extern "C" BOOL __stdcall Ex_ObjSetRadius (int hObj,float topleft,float topright,float bottomright,float bottomleft,BOOL fUpdate);

//======================================================
// �������ƣ�Ex_ObjTooltipsSetText
// �������ͣ��߼���
// ����˵����������ʾ�ı�
// ����<1>��hObj
// ����<2>��lpString
//======================================================
extern "C" BOOL __stdcall Ex_ObjTooltipsSetText (int hObj,int lpString);

//======================================================
// �������ƣ�Ex_ObjTooltipsPop
// �������ͣ��߼���
// ����˵����������ر���ʾ�ı�
// ����<1>��hObj��������.
// ����<2>��lpString����ʾ�ı�.��ֵΪ0��ر���ʾ�ı�
//======================================================
extern "C" BOOL __stdcall Ex_ObjTooltipsPop (int hObj,int lpString);

//======================================================
// �������ƣ�Ex_ObjTooltipsPopEx
// �������ͣ��߼���
// ����˵����������ر���ʾ�ı�Ex
// ����<1>��hObj��������.
// ����<2>��lpTitle����������
// ����<3>��lpText����ʾ�ı�.
// ����<4>��x����Ļ����.(-1:Ĭ��)
// ����<5>��y����Ļ����.(-1:Ĭ��)
// ����<6>��dwTime����λ:����.(-1:Ĭ��,0:ʼ����ʾ)
// ����<7>��nIcon��#����ͼ��_
// ����<8>��fShow���Ƿ�������ʾ
//======================================================
extern "C" BOOL __stdcall Ex_ObjTooltipsPopEx (int hObj,int lpTitle,int lpText,int x,int y,int dwTime,int nIcon,BOOL fShow);

//======================================================
// �������ƣ�Ex_ObjGetFocus
// �������ͣ�������
// ����˵������ȡ�������
// ����<1>��hExDuiOrhObj
//======================================================
extern "C" int __stdcall Ex_ObjGetFocus (int hExDuiOrhObj);

//======================================================
// �������ƣ�Ex_ObjSetFocus
// �������ͣ��߼���
// ����˵���������������
// ����<1>��hObj
//======================================================
extern "C" BOOL __stdcall Ex_ObjSetFocus (int hObj);

//======================================================
// �������ƣ�Ex_ObjKillFocus
// �������ͣ��߼���
// ����˵���������������
// ����<1>��hObj
//======================================================
extern "C" BOOL __stdcall Ex_ObjKillFocus (int hObj);

//======================================================
// �������ƣ�Ex_ObjGetProp
// �������ͣ�������
// ����˵������ȡ����
// ����<1>��hObj
// ����<2>��dwKey
//======================================================
extern "C" int __stdcall Ex_ObjGetProp (int hObj,int dwKey);

//======================================================
// �������ƣ�Ex_ObjSetProp
// �������ͣ�������
// ����˵�����������������Ŀ
// ����<1>��hObj
// ����<2>��dwKey
// ����<3>��dwValue
//======================================================
extern "C" int __stdcall Ex_ObjSetProp (int hObj,int dwKey,int dwValue);

//======================================================
// �������ƣ�Ex_ObjRemoveProp
// �������ͣ�������
// ����˵�����Ƴ�����
// ����<1>��hObj
// ����<2>��dwKey
//======================================================
extern "C" int __stdcall Ex_ObjRemoveProp (int hObj,int dwKey);

//======================================================
// �������ƣ�Ex_ObjEnumProps
// �������ͣ�������
// ����˵�������ظ���.ö�����Ա�
// ����<1>��hObj
// ����<2>��lpfnCbk��bool enum(hObj,dwKey,dwValue,param)
// ����<3>��param
//======================================================
extern "C" int __stdcall Ex_ObjEnumProps (int hObj,int lpfnCbk,int param);

//======================================================
// �������ƣ�Ex_ObjInitPropList
// �������ͣ��߼���
// ����˵����Ҫע��ÿ�γ�ʼ���������֮ǰ�洢������,���洢����ָ����Ҫ�Լ������ͷ�
// ����<1>��hObj
// ����<2>��nPropCount��-1Ϊ��ϣ��ģʽ,0Ϊ���洢����,����Ϊ���Ը���(ÿ��4�ֽ�)
//======================================================
extern "C" BOOL __stdcall Ex_ObjInitPropList (int hObj,int nPropCount);

//======================================================
// �������ƣ�Ex_ObjMove
// �������ͣ��߼���
// ����˵�����ƶ����
// ����<1>��hObj
// ����<2>��x
// ����<3>��y
// ����<4>��width
// ����<5>��height
// ����<6>��bRepaint
//======================================================
extern "C" BOOL __stdcall Ex_ObjMove (int hObj,int x,int y,int width,int height,BOOL bRepaint);

//======================================================
// �������ƣ�Ex_ObjSetUIState
// �������ͣ��߼���
// ����˵�����������״̬,���ڸ������������ʾ״̬
// ����<1>��hObj
// ����<2>��dwState
// ����<3>��fRemove
// ����<4>��lprcRedraw
// ����<5>��fRedraw
//======================================================
extern "C" BOOL __stdcall Ex_ObjSetUIState (int hObj,int dwState,BOOL fRemove,int lprcRedraw,BOOL fRedraw);

//======================================================
// �������ƣ�Ex_ObjGetUIState
// �������ͣ�������
// ����˵������ȡ���״̬
// ����<1>��hObj
//======================================================
extern "C" int __stdcall Ex_ObjGetUIState (int hObj);

//======================================================
// �������ƣ�Ex_ObjLoadFromLayout
// �������ͣ��߼���
// ����˵��������XML����
// ����<1>��handle�����ھ��/������/������
// ����<2>��hRes����Դ���.(ֵ��Ϊ0)
// ����<3>��lpLayout��������Դָ��
// ����<4>��cbLayout��������Դ����
//======================================================
extern "C" BOOL __stdcall Ex_ObjLoadFromLayout (int handle,int hRes,int lpLayout,int cbLayout);

//======================================================
// �������ƣ�Ex_ObjGetFromNodeID
// �������ͣ�������
// ����<1>��hExDUIOrObj
// ����<2>��nNodeID
//======================================================
extern "C" int __stdcall Ex_ObjGetFromNodeID (int hExDUIOrObj,int nNodeID);

//======================================================
// �������ƣ�Ex_ObjGetRectEx
// �������ͣ��߼���
// ����<1>��hObj
// ����<2>��lpRect
// ����<3>��nType
//======================================================
extern "C" BOOL __stdcall Ex_ObjGetRectEx (int hObj,int lpRect,int nType);

//======================================================
// �������ƣ�Ex_ObjPointTransform
// �������ͣ��޷���ֵ
// ����<1>��hObjSrc
// ����<2>��hObjDst��0Ϊ��������
// ����<3>��ptX��in/out
// ����<4>��ptY��in/out
//======================================================
extern "C" void __stdcall Ex_ObjPointTransform (int hObjSrc,int hObjDst,int ptX,int ptY);

//======================================================
// �������ƣ�Ex_ObjEnableEventBubble
// �������ͣ��߼���
// ����˵�������øÿؼ��Ƿ������¼�ð��
// ����<1>��hObj
// ����<2>��fEnable
//======================================================
extern "C" BOOL __stdcall Ex_ObjEnableEventBubble (int hObj,BOOL fEnable);

//======================================================
// �������ƣ�Ex_ObjGetClassInfo
// �������ͣ��߼���
// ����˵������ȡ�������Ϣ
// ����<1>��hObj
// ����<2>��lpClassInfo����ؽṹ EX_CLASSINFO
//======================================================
extern "C" BOOL __stdcall Ex_ObjGetClassInfo (int hObj,int lpClassInfo);

//======================================================
// �������ƣ�Ex_ObjGetClassInfoEx
// �������ͣ��߼���
// ����˵����ͨ������/��ATOM��ȡ����Ϣ
// ����<1>��wzClassName��wzClassName/AtomClassName
// ����<2>��lpClassInfo����ؽṹ EX_CLASSINFO
//======================================================
extern "C" BOOL __stdcall Ex_ObjGetClassInfoEx (int wzClassName,int lpClassInfo);

//======================================================
// �������ƣ�_canvas_destroy
// �������ͣ��߼���
// ����<1>��hCanvas
//======================================================
extern "C" BOOL __stdcall _canvas_destroy (int hCanvas);

//======================================================
// �������ƣ�_canvas_createfromobj
// �������ͣ�������
// ����˵�����������������������ɹ����ػ��������ʧ�ܷ���0
// ����<1>��hObj
// ����<2>��uWidth
// ����<3>��uHeight
// ����<4>��dwFlags��CVF_
// ����<5>��nError
//======================================================
extern "C" int __stdcall _canvas_createfromobj (int hObj,int uWidth,int uHeight,int dwFlags,int nError);

//======================================================
// �������ƣ�_canvas_createfromexdui
// �������ͣ�������
// ����˵��������������������
// ����<1>��hExDui
// ����<2>��width
// ����<3>��height
// ����<4>��dwFlags��CVF_
//======================================================
extern "C" int __stdcall _canvas_createfromexdui (int hExDui,int width,int height,int dwFlags);

//======================================================
// �������ƣ�_canvas_resize
// �������ͣ��߼���
// ����˵�����������óߴ硣
// ����<1>��hCanvas
// ����<2>��width
// ����<3>��height
// ����<4>��fCopy
//======================================================
extern "C" BOOL __stdcall _canvas_resize (int hCanvas,int width,int height,BOOL fCopy);

//======================================================
// �������ƣ�_canvas_getcontext
// �������ͣ�������
// ����˵������ȡcanvas�����������Ϣ
// ����<1>��hCanvas
// ����<2>��nType��#CVC_
//======================================================
extern "C" int __stdcall _canvas_getcontext (int hCanvas,int nType);

//======================================================
// �������ƣ�_canvas_begindraw
// �������ͣ��߼���
// ����˵����ok
// ����<1>��hCanvas
//======================================================
extern "C" BOOL __stdcall _canvas_begindraw (int hCanvas);

//======================================================
// �������ƣ�_canvas_enddraw
// �������ͣ��߼���
// ����˵����ok
// ����<1>��hCanvas
//======================================================
extern "C" BOOL __stdcall _canvas_enddraw (int hCanvas);

//======================================================
// �������ƣ�_canvas_clear
// �������ͣ��߼���
// ����˵����ok
// ����<1>��hCanvas
// ����<2>��lColor
//======================================================
extern "C" BOOL __stdcall _canvas_clear (int hCanvas,int lColor);

//======================================================
// �������ƣ�_canvas_drawline
// �������ͣ��߼���
// ����˵����ok
// ����<1>��hCanvas
// ����<2>��hBrush
// ����<3>��X1
// ����<4>��Y1
// ����<5>��X2
// ����<6>��Y2
// ����<7>��strokeWidth
// ����<8>��strokeStyle
//======================================================
extern "C" BOOL __stdcall _canvas_drawline (int hCanvas,int hBrush,float X1,float Y1,float X2,float Y2,float strokeWidth,int strokeStyle);

//======================================================
// �������ƣ�_canvas_drawrect
// �������ͣ��߼���
// ����˵����ok
// ����<1>��hCanvas
// ����<2>��hBrush
// ����<3>��left
// ����<4>��top
// ����<5>��right
// ����<6>��bottom
// ����<7>��strokeWidth
// ����<8>��strokeStyle
//======================================================
extern "C" BOOL __stdcall _canvas_drawrect (int hCanvas,int hBrush,float left,float top,float right,float bottom,float strokeWidth,int strokeStyle);

//======================================================
// �������ƣ�_canvas_fillrect
// �������ͣ��߼���
// ����˵����ok
// ����<1>��hCanvas
// ����<2>��hBrush
// ����<3>��left
// ����<4>��top
// ����<5>��right
// ����<6>��bottom
//======================================================
extern "C" BOOL __stdcall _canvas_fillrect (int hCanvas,int hBrush,float left,float top,float right,float bottom);

//======================================================
// �������ƣ�_canvas_drawroundedrect
// �������ͣ��߼���
// ����<1>��hCanvas
// ����<2>��hBrush
// ����<3>��left
// ����<4>��top
// ����<5>��right
// ����<6>��bottom
// ����<7>��radiusX
// ����<8>��radiusY
// ����<9>��strokeWidth
// ����<10>��strokeStyle
//======================================================
extern "C" BOOL __stdcall _canvas_drawroundedrect (int hCanvas,int hBrush,float left,float top,float right,float bottom,float radiusX,float radiusY,float strokeWidth,int strokeStyle);

//======================================================
// �������ƣ�_canvas_fillroundedrect
// �������ͣ��߼���
// ����<1>��hCanvas
// ����<2>��hBrush
// ����<3>��left
// ����<4>��top
// ����<5>��right
// ����<6>��bottom
// ����<7>��radiusX
// ����<8>��radiusY
//======================================================
extern "C" BOOL __stdcall _canvas_fillroundedrect (int hCanvas,int hBrush,float left,float top,float right,float bottom,float radiusX,float radiusY);

//======================================================
// �������ƣ�_canvas_drawellipse
// �������ͣ��߼���
// ����<1>��hCanvas
// ����<2>��hBrush
// ����<3>��x
// ����<4>��y
// ����<5>��radiusX
// ����<6>��radiusY
// ����<7>��strokeWidth
// ����<8>��strokeStyle
//======================================================
extern "C" BOOL __stdcall _canvas_drawellipse (int hCanvas,int hBrush,float x,float y,float radiusX,float radiusY,float strokeWidth,int strokeStyle);

//======================================================
// �������ƣ�_canvas_fillellipse
// �������ͣ��߼���
// ����<1>��hCanvas
// ����<2>��hBrush
// ����<3>��x
// ����<4>��y
// ����<5>��radiusX
// ����<6>��radiusY
//======================================================
extern "C" BOOL __stdcall _canvas_fillellipse (int hCanvas,int hBrush,float x,float y,float radiusX,float radiusY);

//======================================================
// �������ƣ�_canvas_drawpath
// �������ͣ�������
// ����<1>��hCanvas
// ����<2>��hPath
// ����<3>��hBrush
// ����<4>��strokeWidth
// ����<5>��strokeStyle
//======================================================
extern "C" int __stdcall _canvas_drawpath (int hCanvas,int hPath,int hBrush,float strokeWidth,int strokeStyle);

//======================================================
// �������ƣ�_canvas_fillpath
// �������ͣ�������
// ����<1>��hCanvas
// ����<2>��hPath
// ����<3>��hBrush
//======================================================
extern "C" int __stdcall _canvas_fillpath (int hCanvas,int hPath,int hBrush);

//======================================================
// �������ƣ�_canvas_fillregion
// �������ͣ��߼���
// ����<1>��hCanvas
// ����<2>��hRgn
// ����<3>��hBrush
//======================================================
extern "C" BOOL __stdcall _canvas_fillregion (int hCanvas,int hRgn,int hBrush);

//======================================================
// �������ƣ�_canvas_drawimage
// �������ͣ��߼���
// ����˵����ok
// ����<1>��hCanvas��0
// ����<2>��hImage��4
// ����<3>��left��8
// ����<4>��top��12
// ����<5>��alpha��16
//======================================================
extern "C" BOOL __stdcall _canvas_drawimage (int hCanvas,int hImage,float left,float top,int alpha);

//======================================================
// �������ƣ�_canvas_drawimagerect
// �������ͣ��߼���
// ����˵����ok
// ����<1>��hCanvas
// ����<2>��hImage
// ����<3>��left
// ����<4>��top
// ����<5>��right
// ����<6>��bottom
// ����<7>��alpha
//======================================================
extern "C" BOOL __stdcall _canvas_drawimagerect (int hCanvas,int hImage,float left,float top,float right,float bottom,int alpha);

//======================================================
// �������ƣ�_canvas_drawimagerectrect
// �������ͣ��߼���
// ����˵����ok
// ����<1>��hCanvas��0
// ����<2>��hImage��4
// ����<3>��dstLeft��8
// ����<4>��dstTop��12
// ����<5>��dstRight��16
// ����<6>��dstBottom��20
// ����<7>��srcLeft��24
// ����<8>��srcTop��28
// ����<9>��srcRight��32
// ����<10>��srcBottom��36
// ����<11>��alpha��40
//======================================================
extern "C" BOOL __stdcall _canvas_drawimagerectrect (int hCanvas,int hImage,float dstLeft,float dstTop,float dstRight,float dstBottom,float srcLeft,float srcTop,float srcRight,float srcBottom,int alpha);

//======================================================
// �������ƣ�_canvas_drawimagefromgrid
// �������ͣ��߼���
// ����˵����ok
// ����<1>��hCanvas
// ����<2>��hImage
// ����<3>��dstLeft
// ����<4>��dstTop
// ����<5>��dstRight
// ����<6>��dstBottom
// ����<7>��srcLeft
// ����<8>��srcTop
// ����<9>��srcRight
// ����<10>��srcBottom
// ����<11>��gridPaddingLeft
// ����<12>��gridPaddingTop
// ����<13>��gridPaddingRight
// ����<14>��gridPaddingBottom
// ����<15>��dwFlags��#bif_
// ����<16>��dwAlpha
//======================================================
extern "C" BOOL __stdcall _canvas_drawimagefromgrid (int hCanvas,int hImage,float dstLeft,float dstTop,float dstRight,float dstBottom,float srcLeft,float srcTop,float srcRight,float srcBottom,float gridPaddingLeft,float gridPaddingTop,float gridPaddingRight,float gridPaddingBottom,int dwFlags,int dwAlpha);

//======================================================
// �������ƣ�_canvas_cliprect
// �������ͣ��߼���
// ����˵����ok
// ����<1>��hCanvas
// ����<2>��left
// ����<3>��top
// ����<4>��right
// ����<5>��bottom
//======================================================
extern "C" BOOL __stdcall _canvas_cliprect (int hCanvas,int left,int top,int right,int bottom);

//======================================================
// �������ƣ�_canvas_resetclip
// �������ͣ��߼���
// ����˵����ok
// ����<1>��hCanvas
//======================================================
extern "C" BOOL __stdcall _canvas_resetclip (int hCanvas);

//======================================================
// �������ƣ�_canvas_flush
// �������ͣ��߼���
// ����<1>��hCanvas
//======================================================
extern "C" BOOL __stdcall _canvas_flush (int hCanvas);

//======================================================
// �������ƣ�_canvas_drawcanvas
// �������ͣ��߼���
// ����<1>��hCanvas
// ����<2>��sCanvas
// ����<3>��dstLeft
// ����<4>��dstTop
// ����<5>��dstRight
// ����<6>��dstBottom
// ����<7>��srcLeft
// ����<8>��srcTop
// ����<9>��dwAlpha
// ����<10>��dwCompositeMode��#CV_COMPOSITE_MODE_
//======================================================
extern "C" BOOL __stdcall _canvas_drawcanvas (int hCanvas,int sCanvas,int dstLeft,int dstTop,int dstRight,int dstBottom,int srcLeft,int srcTop,int dwAlpha,int dwCompositeMode);

//======================================================
// �������ƣ�_canvas_getsize
// �������ͣ��߼���
// ����˵����ok
// ����<1>��hCanvas
// ����<2>��width
// ����<3>��height
//======================================================
extern "C" BOOL __stdcall _canvas_getsize (int hCanvas,int width,int height);

//======================================================
// �������ƣ�_canvas_drawtext
// �������ͣ��߼���
// ����<1>��hCanvas
// ����<2>��hFont�����Ϊ0��ʹ��Ĭ��������
// ����<3>��crText
// ����<4>��lpwzText
// ����<5>��dwLen��-1���Զ�����ߴ�(������ָ����ַ�����ָ��)
// ����<6>��dwDTFormat��#DT_
// ����<7>��left
// ����<8>��top
// ����<9>��right
// ����<10>��bottom
//======================================================
extern "C" BOOL __stdcall _canvas_drawtext (int hCanvas,int hFont,int crText,int lpwzText,int dwLen,int dwDTFormat,float left,float top,float right,float bottom);

//======================================================
// �������ƣ�_canvas_drawtextex
// �������ͣ��߼���
// ����<1>��hCanvas
// ����<2>��hFont
// ����<3>��crText
// ����<4>��lpwzText
// ����<5>��dwLen��-1���Զ�����ߴ�(������ָ����ַ�����ָ��)
// ����<6>��dwDTFormat
// ����<7>��left
// ����<8>��top
// ����<9>��right
// ����<10>��bottom
// ����<11>��iGlowsize
// ����<12>��crShadow
// ����<13>��lParam
// ����<14>��prclayout
//======================================================
extern "C" BOOL __stdcall _canvas_drawtextex (int hCanvas,int hFont,int crText,int lpwzText,int dwLen,int dwDTFormat,float left,float top,float right,float bottom,int iGlowsize,int crShadow,int lParam,int prclayout);

//======================================================
// �������ƣ�_canvas_calctextsize
// �������ͣ��߼���
// ����<1>��hCanvas
// ����<2>��hFont
// ����<3>��lpwzText
// ����<4>��dwLen
// ����<5>��dwDTFormat
// ����<6>��lParam
// ����<7>��layoutWidth
// ����<8>��layoutHeight
// ����<9>��lpWidth
// ����<10>��lpHeight
//======================================================
extern "C" BOOL __stdcall _canvas_calctextsize (int hCanvas,int hFont,int lpwzText,int dwLen,int dwDTFormat,int lParam,float layoutWidth,float layoutHeight,int lpWidth,int lpHeight);

//======================================================
// �������ƣ�_canvas_getdc
// �������ͣ�������
// ����<1>��hCanvas
//======================================================
extern "C" int __stdcall _canvas_getdc (int hCanvas);

//======================================================
// �������ƣ�_canvas_releasedc
// �������ͣ��߼���
// ����<1>��hCanvas
//======================================================
extern "C" BOOL __stdcall _canvas_releasedc (int hCanvas);

//======================================================
// �������ƣ�_canvas_blur
// �������ͣ��߼���
// ����˵����ģ��
// ����<1>��hCanvas
// ����<2>��fDeviation
// ����<3>��lprc
//======================================================
extern "C" BOOL __stdcall _canvas_blur (int hCanvas,float fDeviation,int lprc);

//======================================================
// �������ƣ�_canvas_settransform
// �������ͣ��߼���
// ����<1>��hCanvas
// ����<2>��pMatrix��0.������
//======================================================
extern "C" BOOL __stdcall _canvas_settransform (int hCanvas,int pMatrix);

//======================================================
// �������ƣ�_canvas_rotate_hue
// �������ͣ��߼���
// ����˵������תɫ��
// ����<1>��hCanvas
// ����<2>��fAngle��0-360
//======================================================
extern "C" BOOL __stdcall _canvas_rotate_hue (int hCanvas,float fAngle);

//======================================================
// �������ƣ�_img_destroy
// �������ͣ�������
// ����˵��������ͼ��
// ����<1>��hImg
//======================================================
extern "C" int __stdcall _img_destroy (int hImg);

//======================================================
// �������ƣ�_img_create
// �������ͣ�������
// ����˵��������ͼ�񡣳ɹ�����0��
// ����<1>��width��ͼ����
// ����<2>��height��ͼ��߶�
// ����<3>��hImg������ͼ��ָ��
//======================================================
extern "C" int __stdcall _img_create (int width,int height,int hImg);

//======================================================
// �������ƣ�_img_createfromres
// �������ͣ�������
// ����˵��������ͼ������Դ�����ɹ�����0��
// ����<1>��hRes
// ����<2>��atomPath
// ����<3>��hImg������ͼ��ָ��
//======================================================
extern "C" int __stdcall _img_createfromres (int hRes,int atomPath,int hImg);

//======================================================
// �������ƣ�_img_createfromhbitmap
// �������ͣ�������
// ����˵����������GDIλͼ������ɹ�����0��
// ����<1>��hBitmap
// ����<2>��hPalette
// ����<3>��fPreAlpha���Ƿ�Ԥ��͸��ͨ��
// ����<4>��hImg������ͼ��ָ��
//======================================================
extern "C" int __stdcall _img_createfromhbitmap (int hBitmap,int hPalette,BOOL fPreAlpha,int hImg);

//======================================================
// �������ƣ�_img_createfromhicon
// �������ͣ�������
// ����˵����������ͼ�������ɹ�����0��
// ����<1>��hIcon
// ����<2>��hImg������ͼ��ָ��
//======================================================
extern "C" int __stdcall _img_createfromhicon (int hIcon,int hImg);

//======================================================
// �������ƣ�_img_createfrommemory
// �������ͣ�������
// ����˵�����������ڴ档�ɹ�����0��
// ����<1>��lpData��ͼ��ָ��
// ����<2>��dwLen��ͼ�񳤶�
// ����<3>��hImg������ͼ��ָ��
//======================================================
extern "C" int __stdcall _img_createfrommemory (int lpData,int dwLen,int hImg);

//======================================================
// �������ƣ�_img_createfromstream
// �������ͣ�������
// ����˵�����������ֽ������ɹ�����0��
// ����<1>��lpStream
// ����<2>��hImg������ͼ��ָ��
//======================================================
extern "C" int __stdcall _img_createfromstream (int lpStream,int hImg);

//======================================================
// �������ƣ�_img_createfromcanvas
// �������ͣ�������
// ����˵����(����)�����Ի������ɹ�����0��
// ����<1>��hCanvas
// ����<2>��hImg������ͼ��ָ��
//======================================================
extern "C" int __stdcall _img_createfromcanvas (int hCanvas,int hImg);

//======================================================
// �������ƣ�_img_createfromfile
// �������ͣ�������
// ����˵�����������ļ����ɹ�����0��
// ����<1>��lpwzFilename
// ����<2>��hImg������ͼ��ָ��
//======================================================
extern "C" int __stdcall _img_createfromfile (int lpwzFilename,int hImg);

//======================================================
// �������ƣ�_img_savetofile
// �������ͣ�������
// ����<1>��hImg
// ����<2>��lpwzFile
//======================================================
extern "C" int __stdcall _img_savetofile (int hImg,int lpwzFile);

//======================================================
// �������ƣ�_img_savetomemory
// �������ͣ�������
// ����˵����ͼ�񱣴浽�ڴ�.���سߴ�.
// ����<1>��hImg
// ����<2>��lpBuffer
//======================================================
extern "C" int __stdcall _img_savetomemory (int hImg,int lpBuffer);

//======================================================
// �������ƣ�_img_lock
// �������ͣ�������
// ����˵��������ͼ��.�ɹ�����0.
// ����<1>��hImg
// ����<2>��lpRectL����������ָ�룬���Ϊ0������������ͼ��
// ����<3>��flags��READ:1 / WRITE:2 / READ&WRITE:3
// ����<4>��PixelFormat
// ����<5>��lpLockedBitmapData��BITMAPDATA
//======================================================
extern "C" int __stdcall _img_lock (int hImg,int lpRectL,int flags,int PixelFormat,int lpLockedBitmapData);

//======================================================
// �������ƣ�_img_unlock
// �������ͣ�������
// ����˵��������ͼ��.�ɹ�����0.
// ����<1>��hImg
// ����<2>��lpLockedBitmapData
//======================================================
extern "C" int __stdcall _img_unlock (int hImg,int lpLockedBitmapData);

//======================================================
// �������ƣ�_img_getframedelay
// �������ͣ�������
// ����˵����ȡͼ��֡��ʱ���ɹ�����0��
// ����<1>��hImg
// ����<2>��lpDelayAry��ָ��ָ��ͼ��֡��ʱ���顣
// ����<3>��nFrames��������֡��
//======================================================
extern "C" int __stdcall _img_getframedelay (int hImg,int lpDelayAry,int nFrames);

//======================================================
// �������ƣ�_img_getframecount
// �������ͣ�������
// ����˵����ȡͼ��֡�����ɹ�����0��
// ����<1>��hImg
// ����<2>��nFrameCount������֡��.
//======================================================
extern "C" int __stdcall _img_getframecount (int hImg,int nFrameCount);

//======================================================
// �������ƣ�_img_selectactiveframe
// �������ͣ�������
// ����˵�������õ�ǰ�֡���ɹ�����0��
// ����<1>��hImg
// ����<2>��nIndex
//======================================================
extern "C" int __stdcall _img_selectactiveframe (int hImg,int nIndex);

//======================================================
// �������ƣ�_img_getpixel
// �������ͣ�������
// ����˵������ȡ������,�ɹ�����0
// ����<1>��hImg
// ����<2>��x
// ����<3>��y
// ����<4>��color������ARGB��ɫ
//======================================================
extern "C" int __stdcall _img_getpixel (int hImg,int x,int y,int color);

//======================================================
// �������ƣ�_img_setpixel
// �������ͣ�������
// ����˵�������õ�����.�ɹ�����0
// ����<1>��hImg
// ����<2>��x
// ����<3>��y
// ����<4>��color��argb
//======================================================
extern "C" int __stdcall _img_setpixel (int hImg,int x,int y,int color);

//======================================================
// �������ƣ�_img_getsize
// �������ͣ�������
// ����˵������ȡͼ��ߴ�.�ɹ�����0
// ����<1>��hImg
// ����<2>��lpWidth
// ����<3>��lpHeight
//======================================================
extern "C" int __stdcall _img_getsize (int hImg,int lpWidth,int lpHeight);

//======================================================
// �������ƣ�_img_width
// �������ͣ�������
// ����˵�������ؿ��
// ����<1>��hImg
//======================================================
extern "C" int __stdcall _img_width (int hImg);

//======================================================
// �������ƣ�_img_height
// �������ͣ�������
// ����˵�������ظ߶�
// ����<1>��hImg
//======================================================
extern "C" int __stdcall _img_height (int hImg);

//======================================================
// �������ƣ�_img_copy
// �������ͣ�������
// ����˵��������ͼ��.�ɹ�����0
// ����<1>��hImg
// ����<2>��dstImg��������ͼ��ָ��
//======================================================
extern "C" int __stdcall _img_copy (int hImg,int dstImg);

//======================================================
// �������ƣ�_img_copyrect
// �������ͣ�������
// ����˵�������Ʋ���ͼ��.�ɹ�����0
// ����<1>��hImg
// ����<2>��x
// ����<3>��y
// ����<4>��width
// ����<5>��height
// ����<6>��dstImg��������ͼ��ָ��
//======================================================
extern "C" int __stdcall _img_copyrect (int hImg,int x,int y,int width,int height,int dstImg);

//======================================================
// �������ƣ�_img_scale
// �������ͣ�������
// ����˵��������ͼ��.�ɹ�����0
// ����<1>��hImage
// ����<2>��dstWidth
// ����<3>��dstHeight
// ����<4>��dstImg��������ͼ��
//======================================================
extern "C" int __stdcall _img_scale (int hImage,int dstWidth,int dstHeight,int dstImg);

//======================================================
// �������ƣ�_img_rotateflip
// �������ͣ�������
// ����˵������ת��תͼ��.�ɹ�����0
// ����<1>��hImg
// ����<2>��rfType
//======================================================
extern "C" int __stdcall _img_rotateflip (int hImg,int rfType);

//======================================================
// �������ƣ�_img_getthumbnail
// �������ͣ�������
// ����˵����ȡ����ͼ.�ɹ�����0
// ����<1>��hImg
// ����<2>��thumbWidth
// ����<3>��thumbHeight
// ����<4>��hImgThumbnail����������ͼͼ��ָ��
//======================================================
extern "C" int __stdcall _img_getthumbnail (int hImg,int thumbWidth,int thumbHeight,int hImgThumbnail);

//======================================================
// �������ƣ�_font_copy
// �������ͣ�������
// ����<1>��hFont
//======================================================
extern "C" int __stdcall _font_copy (int hFont);

//======================================================
// �������ƣ�_font_destroy
// �������ͣ��߼���
// ����<1>��hFont
//======================================================
extern "C" BOOL __stdcall _font_destroy (int hFont);

//======================================================
// �������ƣ�_font_create
// �������ͣ�������
// ����˵��������Ĭ������
//======================================================
extern "C" int __stdcall _font_create ();

//======================================================
// �������ƣ�_font_createfromfamily
// �������ͣ�������
// ����<1>��lpwzFontFace
// ����<2>��dwFontSize
// ����<3>��dwFontStyle
//======================================================
extern "C" int __stdcall _font_createfromfamily (int lpwzFontFace,int dwFontSize,int dwFontStyle);

//======================================================
// �������ƣ�_font_createfromlogfont
// �������ͣ�������
// ����<1>��lpLogfont
//======================================================
extern "C" int __stdcall _font_createfromlogfont (int lpLogfont);

//======================================================
// �������ƣ�_font_getlogfont
// �������ͣ��߼���
// ����˵������ȡ�߼�����
// ����<1>��hFont
// ����<2>��lpLogFont
//======================================================
extern "C" BOOL __stdcall _font_getlogfont (int hFont,int lpLogFont);

//======================================================
// �������ƣ�_font_getcontext
// �������ͣ�������
// ����<1>��hFont
//======================================================
extern "C" int __stdcall _font_getcontext (int hFont);

//======================================================
// �������ƣ�_matrix_create
// �������ͣ�������
//======================================================
extern "C" int __stdcall _matrix_create ();

//======================================================
// �������ƣ�_matrix_create3d
// �������ͣ�������
//======================================================
extern "C" int __stdcall _matrix_create3d ();

//======================================================
// �������ƣ�_matrix_destroy
// �������ͣ��߼���
// ����<1>��pMatrix
//======================================================
extern "C" BOOL __stdcall _matrix_destroy (int pMatrix);

//======================================================
// �������ƣ�_matrix_reset
// �������ͣ��߼���
// ����<1>��pMatrix
//======================================================
extern "C" BOOL __stdcall _matrix_reset (int pMatrix);

//======================================================
// �������ƣ�_matrix_translate
// �������ͣ��߼���
// ����<1>��pMatrix
// ����<2>��offsetX
// ����<3>��offsetY
//======================================================
extern "C" BOOL __stdcall _matrix_translate (int pMatrix,float offsetX,float offsetY);

//======================================================
// �������ƣ�_matrix_rotate
// �������ͣ��߼���
// ����<1>��pMatrix
// ����<2>��fAngle
//======================================================
extern "C" BOOL __stdcall _matrix_rotate (int pMatrix,float fAngle);

//======================================================
// �������ƣ�_matrix_scale
// �������ͣ��߼���
// ����<1>��pMatrix
// ����<2>��scaleX
// ����<3>��scaleY
//======================================================
extern "C" BOOL __stdcall _matrix_scale (int pMatrix,float scaleX,float scaleY);

//======================================================
// �������ƣ�_matrix_reset3d
// �������ͣ��߼���
// ����<1>��pMatrix
//======================================================
extern "C" BOOL __stdcall _matrix_reset3d (int pMatrix);

//======================================================
// �������ƣ�_matrix_translate3d
// �������ͣ��߼���
// ����<1>��pMatrix
// ����<2>��offsetX
// ����<3>��offsetY
// ����<4>��offsetZ
//======================================================
extern "C" BOOL __stdcall _matrix_translate3d (int pMatrix,float offsetX,float offsetY,float offsetZ);

//======================================================
// �������ƣ�_matrix_rotate3d
// �������ͣ��߼���
// ����<1>��pMatrix
// ����<2>��x
// ����<3>��y
// ����<4>��z
// ����<5>��fAngle
//======================================================
extern "C" BOOL __stdcall _matrix_rotate3d (int pMatrix,float x,float y,float z,float fAngle);

//======================================================
// �������ƣ�_matrix_scale3d
// �������ͣ��߼���
// ����<1>��pMatrix
// ����<2>��scaleX
// ����<3>��scaleY
// ����<4>��scaleZ
//======================================================
extern "C" BOOL __stdcall _matrix_scale3d (int pMatrix,float scaleX,float scaleY,float scaleZ);

//======================================================
// �������ƣ�_brush_create
// �������ͣ�������
// ����<1>��argb
//======================================================
extern "C" int __stdcall _brush_create (int argb);

//======================================================
// �������ƣ�_brush_destroy
// �������ͣ�������
// ����<1>��hBrush
//======================================================
extern "C" int __stdcall _brush_destroy (int hBrush);

//======================================================
// �������ƣ�_brush_setcolor
// �������ͣ�������
// ����<1>��hBrush
// ����<2>��argb
//======================================================
extern "C" int __stdcall _brush_setcolor (int hBrush,int argb);

//======================================================
// �������ƣ�_brush_createfromimg
// �������ͣ�������
// ����<1>��hImg
//======================================================
extern "C" int __stdcall _brush_createfromimg (int hImg);

//======================================================
// �������ƣ�_brush_createfromcanvas
// �������ͣ�������
// ����<1>��hCanvas
//======================================================
extern "C" int __stdcall _brush_createfromcanvas (int hCanvas);

//======================================================
// �������ƣ�_brush_settransform
// �������ͣ�������
// ����<1>��hBrush
// ����<2>��matrix
//======================================================
extern "C" int __stdcall _brush_settransform (int hBrush,int matrix);

//======================================================
// �������ƣ�_path_destroy
// �������ͣ�������
// ����˵��������·��
// ����<1>��hPath
//======================================================
extern "C" int __stdcall _path_destroy (int hPath);

//======================================================
// �������ƣ�_path_create
// �������ͣ�������
// ����˵��������·��
// ����<1>��brushmode
// ����<2>��dwFlags��EPF_
// ����<3>��hPath
//======================================================
extern "C" int __stdcall _path_create (int brushmode,int dwFlags,int hPath);

//======================================================
// �������ƣ�_path_reset
// �������ͣ�������
// ����˵��������·��
// ����<1>��hPath
//======================================================
extern "C" int __stdcall _path_reset (int hPath);

//======================================================
// �������ƣ�_path_getbounds
// �������ͣ�������
// ����˵����ȡ·���߽����
// ����<1>��hPath
// ����<2>��lpBounds��RECTF
//======================================================
extern "C" int __stdcall _path_getbounds (int hPath,int lpBounds);

//======================================================
// �������ƣ�_path_open
// �������ͣ�������
// ����˵������·��
// ����<1>��hPath
//======================================================
extern "C" int __stdcall _path_open (int hPath);

//======================================================
// �������ƣ�_path_close
// �������ͣ�������
// ����˵�����ر�·��
// ����<1>��hPath
//======================================================
extern "C" int __stdcall _path_close (int hPath);

//======================================================
// �������ƣ�_path_beginfigure
// �������ͣ�������
// ����˵������ʼ��ͼ��
// ����<1>��hPath
//======================================================
extern "C" int __stdcall _path_beginfigure (int hPath);

//======================================================
// �������ƣ�_path_endfigure
// �������ͣ�������
// ����˵����������ǰͼ��
// ����<1>��hPath
// ����<2>��bCloseFigure���Ƿ���Ҫ�պ�ͼ��
//======================================================
extern "C" int __stdcall _path_endfigure (int hPath,BOOL bCloseFigure);

//======================================================
// �������ƣ�_path_hittest
// �������ͣ��߼���
// ����˵�������������Ƿ��ڿɼ�·����
// ����<1>��hPath
// ����<2>��x
// ����<3>��y
//======================================================
extern "C" BOOL __stdcall _path_hittest (int hPath,float x,float y);

//======================================================
// �������ƣ�_path_addline
// �������ͣ�������
// ����˵���������
// ����<1>��hPath
// ����<2>��x1
// ����<3>��y1
// ����<4>��x2
// ����<5>��y2
//======================================================
extern "C" int __stdcall _path_addline (int hPath,float x1,float y1,float x2,float y2);

//======================================================
// �������ƣ�_path_addarc
// �������ͣ�������
// ����˵������ӻ�
// ����<1>��hPath
// ����<2>��x1����ʼ����X
// ����<3>��y1����ʼ����Y
// ����<4>��x2���յ�����X
// ����<5>��y2���յ�����Y
// ����<6>��radiusX���뾶X
// ����<7>��radiusY���뾶Y
// ����<8>��fClockwise���Ƿ�˳ʱ��
//======================================================
extern "C" int __stdcall _path_addarc (int hPath,float x1,float y1,float x2,float y2,float radiusX,float radiusY,BOOL fClockwise);

//======================================================
// �������ƣ�_path_addrect
// �������ͣ�������
// ����˵������Ӿ���
// ����<1>��hPath
// ����<2>��left
// ����<3>��top
// ����<4>��right
// ����<5>��bottom
//======================================================
extern "C" int __stdcall _path_addrect (int hPath,float left,float top,float right,float bottom);

//======================================================
// �������ƣ�_path_addroundedrect
// �������ͣ�������
// ����˵�������Բ�Ǿ���
// ����<1>��hPath
// ����<2>��left
// ����<3>��top
// ����<4>��right
// ����<5>��bottom
// ����<6>��radiusTopLeft
// ����<7>��radiusTopRight
// ����<8>��radiusBottomLeft
// ����<9>��radiusBottomRight
// ����<10>��unit
//======================================================
extern "C" int __stdcall _path_addroundedrect (int hPath,float left,float top,float right,float bottom,float radiusTopLeft,float radiusTopRight,float radiusBottomLeft,float radiusBottomRight,int unit);

//======================================================
// �������ƣ�_rgn_destroy
// �������ͣ��߼���
// ����<1>��hRgn
//======================================================
extern "C" BOOL __stdcall _rgn_destroy (int hRgn);

//======================================================
// �������ƣ�_rgn_createfromrect
// �������ͣ�������
// ����<1>��left
// ����<2>��top
// ����<3>��right
// ����<4>��bottom
//======================================================
extern "C" int __stdcall _rgn_createfromrect (float left,float top,float right,float bottom);

//======================================================
// �������ƣ�_rgn_createfromroundrect
// �������ͣ�������
// ����<1>��left
// ����<2>��top
// ����<3>��right
// ����<4>��bottom
// ����<5>��radiusX
// ����<6>��radiusY
//======================================================
extern "C" int __stdcall _rgn_createfromroundrect (float left,float top,float right,float bottom,float radiusX,float radiusY);

//======================================================
// �������ƣ�_rgn_combine
// �������ͣ�������
// ����<1>��hRgnSrc
// ����<2>��hRgnDst
// ����<3>��nCombineMode��#RGN_COMBINE_
// ����<4>��dstOffsetX
// ����<5>��dstOffsetY
//======================================================
extern "C" int __stdcall _rgn_combine (int hRgnSrc,int hRgnDst,int nCombineMode,int dstOffsetX,int dstOffsetY);

//======================================================
// �������ƣ�_rgn_hittest
// �������ͣ��߼���
// ����<1>��hRgn
// ����<2>��x
// ����<3>��y
//======================================================
extern "C" BOOL __stdcall _rgn_hittest (int hRgn,float x,float y);

//======================================================
// �������ƣ�Ex_ObjScrollGetControl
// �������ͣ�������
// ����˵������ȡ���������
// ����<1>��hObj
// ����<2>��nBar����س��� #SB_
//======================================================
extern "C" int __stdcall Ex_ObjScrollGetControl (int hObj,int nBar);

//======================================================
// �������ƣ�Ex_ObjScrollSetInfo
// �������ͣ�������
// ����˵�������ù�������Ϣ
// ����<1>��hObj
// ����<2>��fnBar��SB_
// ����<3>��fMask��SIF_
// ����<4>��nMin
// ����<5>��nMax
// ����<6>��nPage
// ����<7>��nPos
// ����<8>��fRedraw
//======================================================
extern "C" int __stdcall Ex_ObjScrollSetInfo (int hObj,int fnBar,int fMask,int nMin,int nMax,int nPage,int nPos,BOOL fRedraw);

//======================================================
// �������ƣ�Ex_ObjScrollSetRange
// �������ͣ��߼���
// ����˵�������ù�������Χ
// ����<1>��hObj
// ����<2>��nBar��SB_
// ����<3>��nMin
// ����<4>��nMax
// ����<5>��bRedraw
//======================================================
extern "C" BOOL __stdcall Ex_ObjScrollSetRange (int hObj,int nBar,int nMin,int nMax,BOOL bRedraw);

//======================================================
// �������ƣ�Ex_ObjScrollSetPos
// �������ͣ�������
// ����˵�������ù�����λ��
// ����<1>��hObj
// ����<2>��nBar��SB_
// ����<3>��nPos
// ����<4>��bRedraw
//======================================================
extern "C" int __stdcall Ex_ObjScrollSetPos (int hObj,int nBar,int nPos,BOOL bRedraw);

//======================================================
// �������ƣ�Ex_ObjScrollGetInfo
// �������ͣ��߼���
// ����˵������ȡ��������Ϣ
// ����<1>��hObj
// ����<2>��fnBar
// ����<3>��lpnMin
// ����<4>��lpnMax
// ����<5>��lpnPos
// ����<6>��lpnTrackPos
//======================================================
extern "C" BOOL __stdcall Ex_ObjScrollGetInfo (int hObj,int fnBar,int lpnMin,int lpnMax,int lpnPos,int lpnTrackPos);

//======================================================
// �������ƣ�Ex_ObjScrollGetPos
// �������ͣ�������
// ����˵������ȡ������λ��
// ����<1>��hObj
// ����<2>��nBar
//======================================================
extern "C" int __stdcall Ex_ObjScrollGetPos (int hObj,int nBar);

//======================================================
// �������ƣ�Ex_ObjScrollGetTrackPos
// �������ͣ�������
// ����˵������ȡ�������϶�λ��
// ����<1>��hObj
// ����<2>��nBar
//======================================================
extern "C" int __stdcall Ex_ObjScrollGetTrackPos (int hObj,int nBar);

//======================================================
// �������ƣ�Ex_ObjScrollGetRange
// �������ͣ��߼���
// ����˵������ȡ��������Χ
// ����<1>��hObj
// ����<2>��nBar
// ����<3>��lpnMinPos
// ����<4>��lpnMaxPos
//======================================================
extern "C" BOOL __stdcall Ex_ObjScrollGetRange (int hObj,int nBar,int lpnMinPos,int lpnMaxPos);

//======================================================
// �������ƣ�Ex_ObjScrollShow
// �������ͣ��߼���
// ����˵������ʾ/���ع�����
// ����<1>��hObj
// ����<2>��wBar��֧��SB_BOTH
// ����<3>��fShow
//======================================================
extern "C" BOOL __stdcall Ex_ObjScrollShow (int hObj,int wBar,BOOL fShow);

//======================================================
// �������ƣ�Ex_ObjScrollEnable
// �������ͣ��߼���
// ����˵��������/���ù�����
// ����<1>��hObj
// ����<2>��wSB��֧��SB_BOTH
// ����<3>��wArrows����س��� ESB_
//======================================================
extern "C" BOOL __stdcall Ex_ObjScrollEnable (int hObj,int wSB,int wArrows);

//======================================================
// �������ƣ�_easing_curve_load
// �������ͣ�������
// ����<1>��lpCurveInfo
// ����<2>��cbCurveInfo
//======================================================
extern "C" int __stdcall _easing_curve_load (int lpCurveInfo,int cbCurveInfo);

//======================================================
// �������ƣ�_easing_curve_free
// �������ͣ��޷���ֵ
// ����<1>��pCurveInfo
//======================================================
extern "C" void __stdcall _easing_curve_free (int pCurveInfo);

//======================================================
// �������ƣ�_easing_create
// �������ͣ�������
// ����<1>��dwType��#��������_
// ����<2>��pEasingContext
// ����<3>��dwMode��#����ģʽ_ �����
// ����<4>��pContext
// ����<5>��nTotalTime��ms
// ����<6>��nInterval��ms
// ����<7>��nState��#EES_
// ����<8>��nStart
// ����<9>��nStop
// ����<10>��param1
// ����<11>��param2
// ����<12>��param3
// ����<13>��param4
//======================================================
extern "C" int __stdcall _easing_create (int dwType,int pEasingContext,int dwMode,int pContext,int nTotalTime,int nInterval,int nState,int nStart,int nStop,int param1,int param2,int param3,int param4);

//======================================================
// �������ƣ�_easing_setstate
// �������ͣ��߼���
// ����<1>��pEasing
// ����<2>��nState��#EES_
//======================================================
extern "C" BOOL __stdcall _easing_setstate (int pEasing,int nState);

//======================================================
// �������ƣ�_easing_getstate
// �������ͣ�������
// ����<1>��pEasing
//======================================================
extern "C" int __stdcall _easing_getstate (int pEasing);

//======================================================
// �������ƣ�_imglist_create
// �������ͣ�������
// ����<1>��nWidth
// ����<2>��nHeight
//======================================================
extern "C" int __stdcall _imglist_create (int nWidth,int nHeight);

//======================================================
// �������ƣ�_imglist_add
// �������ͣ�������
// ����<1>��hImageList
// ����<2>��lpImage
// ����<3>��cbImage
// ����<4>��nIndexInsert
//======================================================
extern "C" int __stdcall _imglist_add (int hImageList,int lpImage,int cbImage,int nIndexInsert);

//======================================================
// �������ƣ�_imglist_del
// �������ͣ��޷���ֵ
// ����<1>��hImageList
// ����<2>��nIndex
//======================================================
extern "C" void __stdcall _imglist_del (int hImageList,int nIndex);

//======================================================
// �������ƣ�_imglist_get
// �������ͣ�������
// ����<1>��hImageList
// ����<2>��nIndex
//======================================================
extern "C" int __stdcall _imglist_get (int hImageList,int nIndex);

//======================================================
// �������ƣ�_imglist_draw
// �������ͣ��߼���
// ����<1>��hImageList
// ����<2>��nIndex
// ����<3>��hCanvas
// ����<4>��nLeft
// ����<5>��nTop
// ����<6>��nRight
// ����<7>��nBottom
// ����<8>��nAlpha
//======================================================
extern "C" BOOL __stdcall _imglist_draw (int hImageList,int nIndex,int hCanvas,int nLeft,int nTop,int nRight,int nBottom,int nAlpha);

//======================================================
// �������ƣ�_imglist_set
// �������ͣ��޷���ֵ
// ����<1>��hImageList
// ����<2>��nIndex
// ����<3>��lpImage
// ����<4>��cbImage
//======================================================
extern "C" void __stdcall _imglist_set (int hImageList,int nIndex,int lpImage,int cbImage);

//======================================================
// �������ƣ�_imglist_count
// �������ͣ�������
// ����<1>��hImageList
//======================================================
extern "C" int __stdcall _imglist_count (int hImageList);

//======================================================
// �������ƣ�_imglist_destroy
// �������ͣ��޷���ֵ
// ����<1>��hImageList
//======================================================
extern "C" void __stdcall _imglist_destroy (int hImageList);

//======================================================
// �������ƣ�_imglist_size
// �������ͣ��޷���ֵ
// ����<1>��hImageList
// ����<2>��pWidth
// ����<3>��pHeight
//======================================================
extern "C" void __stdcall _imglist_size (int hImageList,int pWidth,int pHeight);

//======================================================
// �������ƣ�_imglist_addimage
// �������ͣ�������
// ����<1>��hImageList
// ����<2>��hImage
// ����<3>��nIndexInsert
//======================================================
extern "C" int __stdcall _imglist_addimage (int hImageList,int hImage,int nIndexInsert);

//======================================================
// �������ƣ�_imglist_setimage
// �������ͣ��޷���ֵ
// ����<1>��hImageList
// ����<2>��nIndex
// ����<3>��hImage
//======================================================
extern "C" void __stdcall _imglist_setimage (int hImageList,int nIndex,int hImage);

//======================================================
// �������ƣ�Ex_ObjEnableIME
// �������ͣ��߼���
// ����<1>��hObj
// ����<2>��fEnable
//======================================================
extern "C" BOOL __stdcall Ex_ObjEnableIME (int hObj,BOOL fEnable);

//======================================================
// �������ƣ�Ex_ObjSetIMEState
// �������ͣ��߼���
// ����<1>��hObjOrExDui
// ����<2>��fOpen
//======================================================
extern "C" BOOL __stdcall Ex_ObjSetIMEState (int hObjOrExDui,BOOL fOpen);

//======================================================
// �������ƣ�Ex_ObjDisableTranslateSpaceAndEnterToClick
// �������ͣ��߼���
// ����<1>��hObj
// ����<2>��fDisable
//======================================================
extern "C" BOOL __stdcall Ex_ObjDisableTranslateSpaceAndEnterToClick (int hObj,BOOL fDisable);

//======================================================
// �������ƣ�_canvas_setantialias
// �������ͣ��߼���
// ����˵��������ͼ�ο����
// ����<1>��hCanvas
// ����<2>��antialias
//======================================================
extern "C" BOOL __stdcall _canvas_setantialias (int hCanvas,BOOL antialias);

//======================================================
// �������ƣ�_canvas_setimageantialias
// �������ͣ��߼���
// ����˵��������ͼ�񿹾��
// ����<1>��hCanvas
// ����<2>��antialias
//======================================================
extern "C" BOOL __stdcall _canvas_setimageantialias (int hCanvas,BOOL antialias);

//======================================================
// �������ƣ�_canvas_settextantialiasmode
// �������ͣ��߼���
// ����˵���������ı������ģʽ
// ����<1>��hCanvas
// ����<2>��textAntialiasMode��0.������� 1.����� 2.ClearType
//======================================================
extern "C" BOOL __stdcall _canvas_settextantialiasmode (int hCanvas,int textAntialiasMode);

//======================================================
// �������ƣ�_rgn_createfrompath
// �������ͣ�������
// ����<1>��hPath
//======================================================
extern "C" int __stdcall _rgn_createfrompath (int hPath);

//======================================================
// �������ƣ�_brush_createlinear
// �������ͣ�������
// ����<1>��xs
// ����<2>��ys
// ����<3>��xe
// ����<4>��ye
// ����<5>��crBegin
// ����<6>��crEnd
//======================================================
extern "C" int __stdcall _brush_createlinear (float xs,float ys,float xe,float ye,int crBegin,int crEnd);

//======================================================
// �������ƣ�_brush_createlinear_ex
// �������ͣ�������
// ����<1>��xs
// ����<2>��ys
// ����<3>��xe
// ����<4>��ye
// ����<5>��arrStopPts
// ����<6>��cStopPts
//======================================================
extern "C" int __stdcall _brush_createlinear_ex (float xs,float ys,float xe,float ye,int arrStopPts,int cStopPts);

//======================================================
// �������ƣ�_path_beginfigure2
// �������ͣ�������
// ����˵������ʼ��ͼ�� v2
// ����<1>��hPath
// ����<2>��x����ʼ����
// ����<3>��y����ʼ����
//======================================================
extern "C" int __stdcall _path_beginfigure2 (int hPath,float x,float y);

//======================================================
// �������ƣ�_brush_createfromcanvas2
// �������ͣ�������
// ����<1>��hCanvas
// ����<2>��alpha
//======================================================
extern "C" int __stdcall _brush_createfromcanvas2 (int hCanvas,int alpha);

//======================================================
// �������ƣ�Ex_Init
// �������ͣ��߼���
// ����˵������ʼ������.
// ����<1>��hInstance��(ֵ��Ϊ0)
// ����<2>��dwGlobalFlags����س���:#EXGF_ .(ֵ��Ϊ0)
// ����<3>��hDefaultCursor��Ĭ�����ָ��.(ֵ��Ϊ0)
// ����<4>��lpszDefaultClassName��Ĭ�ϴ�������.(ֵ��Ϊ0)
// ����<5>��lpDefaultTheme��Ĭ�������ָ��.
// ����<6>��dwDefaultThemeLen��Ĭ�����������.
// ����<7>��lpDefaultI18N��Ĭ�����԰�ָ��.(ֵ��Ϊ0)
// ����<8>��dwDefaultI18NLen��Ĭ�����԰�����.(ֵ��Ϊ0)
//======================================================
extern "C" BOOL __stdcall Ex_Init (int hInstance,int dwGlobalFlags,int hDefaultCursor,int lpszDefaultClassName,int lpDefaultTheme,int dwDefaultThemeLen,int lpDefaultI18N,int dwDefaultI18NLen);

//======================================================
// �������ƣ�Ex_UnInit
// �������ͣ��޷���ֵ
// ����˵��������ʼ������
//======================================================
extern "C" void __stdcall Ex_UnInit ();

//======================================================
// �������ƣ�Ex_GetLastError
// �������ͣ�������
// ����˵������ȡ���������.��س��� :#ERROR_EX_
//======================================================
extern "C" int __stdcall Ex_GetLastError ();

//======================================================
// �������ƣ�Ex_SetLastError
// �������ͣ��޷���ֵ
// ����˵�����������������.��س��� :#ERROR_EX_
// ����<1>��nError
//======================================================
extern "C" void __stdcall Ex_SetLastError (int nError);

//======================================================
// �������ƣ�Ex_IsDxRender
// �������ͣ��߼���
// ����˵�����Ƿ�ʹ��D2D��Ⱦ
//======================================================
extern "C" BOOL __stdcall Ex_IsDxRender ();

//======================================================
// �������ƣ�Ex_Atom
// �������ͣ�������
// ����˵������ȡ�ַ���Ψһԭ�Ӻ�
// ����<1>��lptstring
//======================================================
extern "C" int __stdcall Ex_Atom (int lptstring);

//======================================================
// �������ƣ�_fmt_int
// �������ͣ�������
// ����˵������ʽ��_�ı�������
// ����<1>��lpValue���ַ���ָ��
// ����<2>��lpdwPercentFlags��(out)�����Ƿ�Ϊ�ٷֱȵ�λ
//======================================================
extern "C" int __stdcall _fmt_int (int lpValue,int lpdwPercentFlags);

//======================================================
// �������ƣ�_fmt_intary
// �������ͣ�������
// ����˵������ʽ��_�ı�����������
// ����<1>��lpValue���ַ���ָ��
// ����<2>��lpAry������ָ��
// ����<3>��nMaxCount���������
// ����<4>��fZero���Ƿ����
// ����<5>��lpdwPercentFlags��(out)���ذٷֱȱ��λ(0-31λ)
//======================================================
extern "C" int __stdcall _fmt_intary (int lpValue,int lpAry,int nMaxCount,BOOL fZero,int lpdwPercentFlags);

//======================================================
// �������ƣ�_fmt_rect
// �������ͣ��߼���
// ����˵������ʽ��_�ı�������
// ����<1>��lpValue���ַ���ָ��
// ����<2>��lpRect������ָ��
// ����<3>��lpdwPercentFlags��(out)���ذٷֱȱ��λ(0-31λ)
//======================================================
extern "C" BOOL __stdcall _fmt_rect (int lpValue,int lpRect,int lpdwPercentFlags);

//======================================================
// �������ƣ�_fmt_string
// �������ͣ��߼���
// ����˵������ʽ��_�ı����ı�_���԰�
// ����<1>��hRes����Դ���.(ֵ��Ϊ0)
// ����<2>��lpValue���ַ���ָ��
// ����<3>��lpString��(out)
// ����<4>��bDispatchI18NCallback��(in/out)
//======================================================
extern "C" BOOL __stdcall _fmt_string (int hRes,int lpValue,int lpString,BOOL bDispatchI18NCallback);

//======================================================
// �������ƣ�_fmt_color
// �������ͣ��߼���
// ����˵������ʽ��_�ı�����ɫ
// ����<1>��lpValue���ַ���ָ��
// ����<2>��lpColor��(out)������ɫ
//======================================================
extern "C" BOOL __stdcall _fmt_color (int lpValue,int lpColor);

//======================================================
// �������ƣ�_fmt_bin
// �������ͣ��߼���
// ����˵������ʽ��_����������
// ����<1>��hRes����Դ���
// ����<2>��lpValue������ָ��
// ����<3>��lpBin��(out)���ض���������ָ��
// ����<4>��lpLen��(out)�������ݳ���
// ����<5>��lpFreeBuffer��(out)�����Ƿ���Ҫ�ͷ�����
//======================================================
extern "C" BOOL __stdcall _fmt_bin (int hRes,int lpValue,int lpBin,int lpLen,BOOL lpFreeBuffer);

//======================================================
// �������ƣ�_fmt_getvalue
// �������ͣ��߼���
// ����˵������ʽ��_��ȡ����ƫ�Ƶ�ַ
// ����<1>��lpValue
// ����<2>��atomDest
//======================================================
extern "C" BOOL __stdcall _fmt_getvalue (int lpValue,int atomDest);

//======================================================
// �������ƣ�_fmt_getatom
// �������ͣ�������
// ����˵������ʽ��_��ȡ����ƫ�Ƶ�ַ
// ����<1>��lpValue
// ����<2>��lpValueOffset
//======================================================
extern "C" int __stdcall _fmt_getatom (int lpValue,int lpValueOffset);

//======================================================
// �������ƣ�_fmt_const
// �������ͣ��߼���
// ����<1>��const��in/out
// ����<2>��consts��atom
// ����<3>��values��value
// ����<4>��nCount
//======================================================
extern "C" BOOL __stdcall _fmt_const (int const,int consts,int values,int nCount);

//======================================================
// �������ƣ�_path_addarc2
// �������ͣ�������
// ����˵������ӻ� v2
// ����<1>��hPath
// ����<2>��x
// ����<3>��y
// ����<4>��width
// ����<5>��height
// ����<6>��startAngle
// ����<7>��sweepAngle
//======================================================
extern "C" int __stdcall _path_addarc2 (int hPath,float x,float y,float width,float height,float startAngle,float sweepAngle);
