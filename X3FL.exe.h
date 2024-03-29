/*
   This file has been generated by IDA.
   It contains local type definitions from
   the type library 'X3FL.exe'
*/

#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long

struct _XINPUT_STATE;
struct tagVARIANT;
struct IUnknown;
struct IUnknownVtbl;
struct IDispatch;
struct IDispatchVtbl;
struct ITypeInfo;
struct ITypeInfoVtbl;
struct tagTYPEATTR;
struct tagTYPEDESC;
struct tagARRAYDESC;
struct ITypeComp;
struct ITypeCompVtbl;
union tagBINDPTR;
struct tagFUNCDESC;
struct tagELEMDESC;
struct tagPARAMDESCEX;
struct tagVARDESC;
struct tagDISPPARAMS;
struct tagEXCEPINFO;
struct ITypeLib;
struct ITypeLibVtbl;
struct tagTLIBATTR;
struct tagSAFEARRAY;
struct tagDEC;
struct IRecordInfo;
struct IRecordInfoVtbl;
struct HWND__;
struct tagWNDCLASSA;
struct HINSTANCE__;
struct HICON__;
struct HBRUSH__;
union _LARGE_INTEGER;
struct _RTL_CRITICAL_SECTION_DEBUG;
struct _EXCEPTION_RECORD;
struct _CONTEXT;
struct _s_ThrowInfo;
struct _s_CatchableTypeArray;
struct _s_CatchableType;
struct TypeDescriptor;

/* 1 */
struct _GUID
{
  unsigned int Data1;
  unsigned __int16 Data2;
  unsigned __int16 Data3;
  unsigned __int8 Data4[8];
};

/* 2 */
typedef struct _GUID GUID;

/* 3 */
enum __TI_flags
{
  TI_IsConst = 0x1,
  TI_IsVolatile = 0x2,
  TI_IsUnaligned = 0x4,
  TI_IsPure = 0x8,
  TI_IsWinRT = 0x10,
};

/* 4 */
enum __CT_flags
{
  CT_IsSimpleType = 0x1,
  CT_ByReferenceOnly = 0x2,
  CT_HasVirtualBase = 0x4,
  CT_IsWinRTHandle = 0x8,
  CT_IsStdBadAlloc = 0x10,
};

/* 5 */
struct _EH4_SCOPETABLE_RECORD
{
  int EnclosingLevel;
  void *FilterFunc;
  void *HandlerFunc;
};

/* 13 */
typedef unsigned int DWORD;

/* 6 */
struct _EH4_SCOPETABLE
{
  DWORD GSCookieOffset;
  DWORD GSCookieXOROffset;
  DWORD EHCookieOffset;
  DWORD EHCookieXOROffset;
  struct _EH4_SCOPETABLE_RECORD ScopeRecord[];
};

/* 7 */
typedef struct _SCOPETABLE_ENTRY *PSCOPETABLE_ENTRY;

/* 99 */
typedef void *PVOID;

/* 8 */
struct _EH3_EXCEPTION_REGISTRATION
{
  struct _EH3_EXCEPTION_REGISTRATION *Next;
  PVOID ExceptionHandler;
  PSCOPETABLE_ENTRY ScopeTable;
  DWORD TryLevel;
};

/* 9 */
typedef struct _EH3_EXCEPTION_REGISTRATION EH3_EXCEPTION_REGISTRATION;

/* 10 */
typedef struct _EH3_EXCEPTION_REGISTRATION *PEH3_EXCEPTION_REGISTRATION;

/* 11 */
struct CPPEH_RECORD
{
  DWORD old_esp;
  EXCEPTION_POINTERS *exc_ptr;
  struct _EH3_EXCEPTION_REGISTRATION registration;
};

/* 15 */
typedef unsigned int ULONG_PTR;

/* 14 */
typedef ULONG_PTR SIZE_T;

/* 12 */
struct _MEMORYSTATUS
{
  DWORD dwLength;
  DWORD dwMemoryLoad;
  SIZE_T dwTotalPhys;
  SIZE_T dwAvailPhys;
  SIZE_T dwTotalPageFile;
  SIZE_T dwAvailPageFile;
  SIZE_T dwTotalVirtual;
  SIZE_T dwAvailVirtual;
};

/* 16 */
typedef struct _XINPUT_STATE XINPUT_STATE;

/* 20 */
typedef unsigned __int16 WORD;

/* 21 */
typedef unsigned __int8 BYTE;

/* 22 */
typedef __int16 SHORT;

/* 19 */
struct _XINPUT_GAMEPAD
{
  WORD wButtons;
  BYTE bLeftTrigger;
  BYTE bRightTrigger;
  SHORT sThumbLX;
  SHORT sThumbLY;
  SHORT sThumbRX;
  SHORT sThumbRY;
};

/* 18 */
typedef struct _XINPUT_GAMEPAD XINPUT_GAMEPAD;

/* 17 */
struct _XINPUT_STATE
{
  DWORD dwPacketNumber;
  XINPUT_GAMEPAD Gamepad;
};

/* 23 */
typedef GUID IID;

/* 25 */
typedef struct tagVARIANT VARIANT;

/* 24 */
typedef VARIANT VARIANTARG;

/* 29 */
typedef unsigned __int16 VARTYPE;

/* 31 */
typedef __int64 LONGLONG;

/* 32 */
typedef int LONG;

/* 33 */
typedef float FLOAT;

/* 34 */
typedef double DOUBLE;

/* 35 */
typedef __int16 VARIANT_BOOL;

/* 36 */
typedef LONG SCODE;

/* 40 */
typedef unsigned int ULONG;

/* 39 */
struct tagCY::$3EA7BC8C29B528C7CA1203FC489E132F
{
  ULONG Lo;
  LONG Hi;
};

/* 38 */
union tagCY
{
  struct
  {
    ULONG Lo;
    LONG Hi;
  };
  LONGLONG int64;
};

/* 37 */
typedef union tagCY CY;

/* 41 */
typedef double DATE;

/* 45 */
typedef unsigned __int16 wchar_t;

/* 44 */
typedef wchar_t WCHAR;

/* 43 */
typedef WCHAR OLECHAR;

/* 42 */
typedef OLECHAR *BSTR;

/* 111 */
typedef struct tagSAFEARRAY SAFEARRAY;

/* 113 */
typedef char CHAR;

/* 66 */
typedef unsigned __int16 USHORT;

/* 114 */
typedef unsigned __int64 ULONGLONG;

/* 98 */
typedef int INT;

/* 51 */
typedef unsigned int UINT;

/* 115 */
typedef struct tagDEC DECIMAL;

/* 121 */
#pragma pack(push, 8)
struct tagVARIANT::$::$::$E09503A454170B491AC1C4312CE36FE6::$0FDBD249F1AECD6A49409B6B82281578
{
  PVOID pvRecord;
  IRecordInfo *pRecInfo;
};
#pragma pack(pop)

/* 30 */
#pragma pack(push, 8)
union tagVARIANT::$::$65D68C826D16CA47CF95571D7BFCD657::$E09503A454170B491AC1C4312CE36FE6
{
  LONGLONG llVal;
  LONG lVal;
  BYTE bVal;
  SHORT iVal;
  FLOAT fltVal;
  DOUBLE dblVal;
  VARIANT_BOOL boolVal;
  SCODE scode;
  CY cyVal;
  DATE date;
  BSTR bstrVal;
  IUnknown *punkVal;
  IDispatch *pdispVal;
  SAFEARRAY *parray;
  BYTE *pbVal;
  SHORT *piVal;
  LONG *plVal;
  LONGLONG *pllVal;
  FLOAT *pfltVal;
  DOUBLE *pdblVal;
  VARIANT_BOOL *pboolVal;
  SCODE *pscode;
  CY *pcyVal;
  DATE *pdate;
  BSTR *pbstrVal;
  IUnknown **ppunkVal;
  IDispatch **ppdispVal;
  SAFEARRAY **pparray;
  VARIANT *pvarVal;
  PVOID byref;
  CHAR cVal;
  USHORT uiVal;
  ULONG ulVal;
  ULONGLONG ullVal;
  INT intVal;
  UINT uintVal;
  DECIMAL *pdecVal;
  CHAR *pcVal;
  USHORT *puiVal;
  ULONG *pulVal;
  ULONGLONG *pullVal;
  INT *pintVal;
  UINT *puintVal;
  #pragma pack(push, 8)
  struct
  {
    PVOID pvRecord;
    IRecordInfo *pRecInfo;
  };
  #pragma pack(pop)
};
#pragma pack(pop)

/* 28 */
#pragma pack(push, 8)
struct tagVARIANT::$E93DC971A089CC95F6C875332324C1E7::$65D68C826D16CA47CF95571D7BFCD657
{
  VARTYPE vt;
  WORD wReserved1;
  WORD wReserved2;
  WORD wReserved3;
  #pragma pack(push, 8)
  union
  {
    LONGLONG llVal;
    LONG lVal;
    BYTE bVal;
    SHORT iVal;
    FLOAT fltVal;
    DOUBLE dblVal;
    VARIANT_BOOL boolVal;
    SCODE scode;
    CY cyVal;
    DATE date;
    BSTR bstrVal;
    IUnknown *punkVal;
    IDispatch *pdispVal;
    SAFEARRAY *parray;
    BYTE *pbVal;
    SHORT *piVal;
    LONG *plVal;
    LONGLONG *pllVal;
    FLOAT *pfltVal;
    DOUBLE *pdblVal;
    VARIANT_BOOL *pboolVal;
    SCODE *pscode;
    CY *pcyVal;
    DATE *pdate;
    BSTR *pbstrVal;
    IUnknown **ppunkVal;
    IDispatch **ppdispVal;
    SAFEARRAY **pparray;
    VARIANT *pvarVal;
    PVOID byref;
    CHAR cVal;
    USHORT uiVal;
    ULONG ulVal;
    ULONGLONG ullVal;
    INT intVal;
    UINT uintVal;
    DECIMAL *pdecVal;
    CHAR *pcVal;
    USHORT *puiVal;
    ULONG *pulVal;
    ULONGLONG *pullVal;
    INT *pintVal;
    UINT *puintVal;
    #pragma pack(push, 8)
    struct
    {
      PVOID pvRecord;
      IRecordInfo *pRecInfo;
    };
    #pragma pack(pop)
  };
  #pragma pack(pop)
};
#pragma pack(pop)

/* 118 */
struct tagDEC::$64EC678C49E7BE49873AFBFB7A849D34::$7F8459940C2B08BD5D82B0F27239141B
{
  BYTE scale;
  BYTE sign;
};

/* 117 */
union tagDEC::$64EC678C49E7BE49873AFBFB7A849D34
{
  struct
  {
    BYTE scale;
    BYTE sign;
  };
  USHORT signscale;
};

/* 120 */
struct tagDEC::$D28E26DEC3EC762C06C2AA9D0F7AC301::$674876891A86A76F12C10005982BCA56
{
  ULONG Lo32;
  ULONG Mid32;
};

/* 119 */
union tagDEC::$D28E26DEC3EC762C06C2AA9D0F7AC301
{
  struct
  {
    ULONG Lo32;
    ULONG Mid32;
  };
  ULONGLONG Lo64;
};

/* 116 */
struct tagDEC
{
  USHORT wReserved;
  union
  {
    struct
    {
      BYTE scale;
      BYTE sign;
    };
    USHORT signscale;
  };
  ULONG Hi32;
  union
  {
    struct
    {
      ULONG Lo32;
      ULONG Mid32;
    };
    ULONGLONG Lo64;
  };
};

/* 27 */
#pragma pack(push, 8)
union tagVARIANT::$E93DC971A089CC95F6C875332324C1E7
{
  #pragma pack(push, 8)
  struct
  {
    VARTYPE vt;
    WORD wReserved1;
    WORD wReserved2;
    WORD wReserved3;
    #pragma pack(push, 8)
    union
    {
      LONGLONG llVal;
      LONG lVal;
      BYTE bVal;
      SHORT iVal;
      FLOAT fltVal;
      DOUBLE dblVal;
      VARIANT_BOOL boolVal;
      SCODE scode;
      CY cyVal;
      DATE date;
      BSTR bstrVal;
      IUnknown *punkVal;
      IDispatch *pdispVal;
      SAFEARRAY *parray;
      BYTE *pbVal;
      SHORT *piVal;
      LONG *plVal;
      LONGLONG *pllVal;
      FLOAT *pfltVal;
      DOUBLE *pdblVal;
      VARIANT_BOOL *pboolVal;
      SCODE *pscode;
      CY *pcyVal;
      DATE *pdate;
      BSTR *pbstrVal;
      IUnknown **ppunkVal;
      IDispatch **ppdispVal;
      SAFEARRAY **pparray;
      VARIANT *pvarVal;
      PVOID byref;
      CHAR cVal;
      USHORT uiVal;
      ULONG ulVal;
      ULONGLONG ullVal;
      INT intVal;
      UINT uintVal;
      DECIMAL *pdecVal;
      CHAR *pcVal;
      USHORT *puiVal;
      ULONG *pulVal;
      ULONGLONG *pullVal;
      INT *pintVal;
      UINT *puintVal;
      #pragma pack(push, 8)
      struct
      {
        PVOID pvRecord;
        IRecordInfo *pRecInfo;
      };
      #pragma pack(pop)
    };
    #pragma pack(pop)
  };
  #pragma pack(pop)
  DECIMAL decVal;
};
#pragma pack(pop)

/* 26 */
#pragma pack(push, 8)
struct tagVARIANT
{
  #pragma pack(push, 8)
  union
  {
    #pragma pack(push, 8)
    struct
    {
      VARTYPE vt;
      WORD wReserved1;
      WORD wReserved2;
      WORD wReserved3;
      #pragma pack(push, 8)
      union
      {
        LONGLONG llVal;
        LONG lVal;
        BYTE bVal;
        SHORT iVal;
        FLOAT fltVal;
        DOUBLE dblVal;
        VARIANT_BOOL boolVal;
        SCODE scode;
        CY cyVal;
        DATE date;
        BSTR bstrVal;
        IUnknown *punkVal;
        IDispatch *pdispVal;
        SAFEARRAY *parray;
        BYTE *pbVal;
        SHORT *piVal;
        LONG *plVal;
        LONGLONG *pllVal;
        FLOAT *pfltVal;
        DOUBLE *pdblVal;
        VARIANT_BOOL *pboolVal;
        SCODE *pscode;
        CY *pcyVal;
        DATE *pdate;
        BSTR *pbstrVal;
        IUnknown **ppunkVal;
        IDispatch **ppdispVal;
        SAFEARRAY **pparray;
        VARIANT *pvarVal;
        PVOID byref;
        CHAR cVal;
        USHORT uiVal;
        ULONG ulVal;
        ULONGLONG ullVal;
        INT intVal;
        UINT uintVal;
        DECIMAL *pdecVal;
        CHAR *pcVal;
        USHORT *puiVal;
        ULONG *pulVal;
        ULONGLONG *pullVal;
        INT *pintVal;
        UINT *puintVal;
        #pragma pack(push, 8)
        struct
        {
          PVOID pvRecord;
          IRecordInfo *pRecInfo;
        };
        #pragma pack(pop)
      };
      #pragma pack(pop)
    };
    #pragma pack(pop)
    DECIMAL decVal;
  };
  #pragma pack(pop)
};
#pragma pack(pop)

/* 46 */
#pragma pack(push, 8)
struct IUnknown
{
  struct IUnknownVtbl *lpVtbl;
};
#pragma pack(pop)

/* 49 */
#pragma pack(push, 8)
struct IDispatch
{
  struct IDispatchVtbl *lpVtbl;
};
#pragma pack(pop)

/* 68 */
#pragma pack(push, 8)
struct tagSAFEARRAYBOUND
{
  ULONG cElements;
  LONG lLbound;
};
#pragma pack(pop)

/* 67 */
typedef struct tagSAFEARRAYBOUND SAFEARRAYBOUND;

/* 112 */
#pragma pack(push, 8)
struct tagSAFEARRAY
{
  USHORT cDims;
  USHORT fFeatures;
  ULONG cbElements;
  ULONG cLocks;
  PVOID pvData;
  SAFEARRAYBOUND rgsabound[1];
};
#pragma pack(pop)

/* 122 */
#pragma pack(push, 8)
struct IRecordInfo
{
  struct IRecordInfoVtbl *lpVtbl;
};
#pragma pack(pop)

/* 48 */
typedef int HRESULT;

/* 47 */
#pragma pack(push, 8)
struct IUnknownVtbl
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(IUnknown *This);
  ULONG (__stdcall *Release)(IUnknown *This);
};
#pragma pack(pop)

/* 52 */
typedef DWORD LCID;

/* 59 */
typedef OLECHAR *LPOLESTR;

/* 58 */
typedef LONG DISPID;

/* 100 */
typedef struct tagDISPPARAMS DISPPARAMS;

/* 102 */
typedef struct tagEXCEPINFO EXCEPINFO;

/* 50 */
#pragma pack(push, 8)
struct IDispatchVtbl
{
  HRESULT (__stdcall *QueryInterface)(IDispatch *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(IDispatch *This);
  ULONG (__stdcall *Release)(IDispatch *This);
  HRESULT (__stdcall *GetTypeInfoCount)(IDispatch *This, UINT *pctinfo);
  HRESULT (__stdcall *GetTypeInfo)(IDispatch *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
  HRESULT (__stdcall *GetIDsOfNames)(IDispatch *This, const IID *const riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
  HRESULT (__stdcall *Invoke)(IDispatch *This, DISPID dispIdMember, const IID *const riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
};
#pragma pack(pop)

/* 124 */
typedef const OLECHAR *LPCOLESTR;

/* 110 */
typedef int BOOL;

/* 123 */
#pragma pack(push, 8)
struct IRecordInfoVtbl
{
  HRESULT (__stdcall *QueryInterface)(IRecordInfo *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(IRecordInfo *This);
  ULONG (__stdcall *Release)(IRecordInfo *This);
  HRESULT (__stdcall *RecordInit)(IRecordInfo *This, PVOID pvNew);
  HRESULT (__stdcall *RecordClear)(IRecordInfo *This, PVOID pvExisting);
  HRESULT (__stdcall *RecordCopy)(IRecordInfo *This, PVOID pvExisting, PVOID pvNew);
  HRESULT (__stdcall *GetGuid)(IRecordInfo *This, GUID *pguid);
  HRESULT (__stdcall *GetName)(IRecordInfo *This, BSTR *pbstrName);
  HRESULT (__stdcall *GetSize)(IRecordInfo *This, ULONG *pcbSize);
  HRESULT (__stdcall *GetTypeInfo)(IRecordInfo *This, ITypeInfo **ppTypeInfo);
  HRESULT (__stdcall *GetField)(IRecordInfo *This, PVOID pvData, LPCOLESTR szFieldName, VARIANT *pvarField);
  HRESULT (__stdcall *GetFieldNoCopy)(IRecordInfo *This, PVOID pvData, LPCOLESTR szFieldName, VARIANT *pvarField, PVOID *ppvDataCArray);
  HRESULT (__stdcall *PutField)(IRecordInfo *This, ULONG wFlags, PVOID pvData, LPCOLESTR szFieldName, VARIANT *pvarField);
  HRESULT (__stdcall *PutFieldNoCopy)(IRecordInfo *This, ULONG wFlags, PVOID pvData, LPCOLESTR szFieldName, VARIANT *pvarField);
  HRESULT (__stdcall *GetFieldNames)(IRecordInfo *This, ULONG *pcNames, BSTR *rgBstrNames);
  BOOL (__stdcall *IsMatchingType)(IRecordInfo *This, IRecordInfo *pRecordInfo);
  PVOID (__stdcall *RecordCreate)(IRecordInfo *This);
  HRESULT (__stdcall *RecordCreateCopy)(IRecordInfo *This, PVOID pvSource, PVOID *ppvDest);
  HRESULT (__stdcall *RecordDestroy)(IRecordInfo *This, PVOID pvRecord);
};
#pragma pack(pop)

/* 53 */
#pragma pack(push, 8)
struct ITypeInfo
{
  struct ITypeInfoVtbl *lpVtbl;
};
#pragma pack(pop)

/* 101 */
#pragma pack(push, 8)
struct tagDISPPARAMS
{
  VARIANTARG *rgvarg;
  DISPID *rgdispidNamedArgs;
  UINT cArgs;
  UINT cNamedArgs;
};
#pragma pack(pop)

/* 103 */
#pragma pack(push, 8)
struct tagEXCEPINFO
{
  WORD wCode;
  WORD wReserved;
  BSTR bstrSource;
  BSTR bstrDescription;
  BSTR bstrHelpFile;
  DWORD dwHelpContext;
  PVOID pvReserved;
  HRESULT (__stdcall *pfnDeferredFillIn)(struct tagEXCEPINFO *);
  SCODE scode;
};
#pragma pack(pop)

/* 55 */
typedef struct tagTYPEATTR TYPEATTR;

/* 78 */
typedef struct tagFUNCDESC FUNCDESC;

/* 93 */
typedef struct tagVARDESC VARDESC;

/* 57 */
typedef DISPID MEMBERID;

/* 69 */
typedef DWORD HREFTYPE;

/* 90 */
enum tagINVOKEKIND
{
  INVOKE_FUNC = 0x1,
  INVOKE_PROPERTYGET = 0x2,
  INVOKE_PROPERTYPUT = 0x4,
  INVOKE_PROPERTYPUTREF = 0x8,
};

/* 89 */
typedef enum tagINVOKEKIND INVOKEKIND;

/* 54 */
#pragma pack(push, 8)
struct ITypeInfoVtbl
{
  HRESULT (__stdcall *QueryInterface)(ITypeInfo *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(ITypeInfo *This);
  ULONG (__stdcall *Release)(ITypeInfo *This);
  HRESULT (__stdcall *GetTypeAttr)(ITypeInfo *This, TYPEATTR **ppTypeAttr);
  HRESULT (__stdcall *GetTypeComp)(ITypeInfo *This, ITypeComp **ppTComp);
  HRESULT (__stdcall *GetFuncDesc)(ITypeInfo *This, UINT index, FUNCDESC **ppFuncDesc);
  HRESULT (__stdcall *GetVarDesc)(ITypeInfo *This, UINT index, VARDESC **ppVarDesc);
  HRESULT (__stdcall *GetNames)(ITypeInfo *This, MEMBERID memid, BSTR *rgBstrNames, UINT cMaxNames, UINT *pcNames);
  HRESULT (__stdcall *GetRefTypeOfImplType)(ITypeInfo *This, UINT index, HREFTYPE *pRefType);
  HRESULT (__stdcall *GetImplTypeFlags)(ITypeInfo *This, UINT index, INT *pImplTypeFlags);
  HRESULT (__stdcall *GetIDsOfNames)(ITypeInfo *This, LPOLESTR *rgszNames, UINT cNames, MEMBERID *pMemId);
  HRESULT (__stdcall *Invoke)(ITypeInfo *This, PVOID pvInstance, MEMBERID memid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
  HRESULT (__stdcall *GetDocumentation)(ITypeInfo *This, MEMBERID memid, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
  HRESULT (__stdcall *GetDllEntry)(ITypeInfo *This, MEMBERID memid, INVOKEKIND invKind, BSTR *pBstrDllName, BSTR *pBstrName, WORD *pwOrdinal);
  HRESULT (__stdcall *GetRefTypeInfo)(ITypeInfo *This, HREFTYPE hRefType, ITypeInfo **ppTInfo);
  HRESULT (__stdcall *AddressOfMember)(ITypeInfo *This, MEMBERID memid, INVOKEKIND invKind, PVOID *ppv);
  HRESULT (__stdcall *CreateInstance)(ITypeInfo *This, IUnknown *pUnkOuter, const IID *const riid, PVOID *ppvObj);
  HRESULT (__stdcall *GetMops)(ITypeInfo *This, MEMBERID memid, BSTR *pBstrMops);
  HRESULT (__stdcall *GetContainingTypeLib)(ITypeInfo *This, ITypeLib **ppTLib, UINT *pIndex);
  void (__stdcall *ReleaseTypeAttr)(ITypeInfo *This, TYPEATTR *pTypeAttr);
  void (__stdcall *ReleaseFuncDesc)(ITypeInfo *This, FUNCDESC *pFuncDesc);
  void (__stdcall *ReleaseVarDesc)(ITypeInfo *This, VARDESC *pVarDesc);
};
#pragma pack(pop)

/* 61 */
enum tagTYPEKIND
{
  TKIND_ENUM = 0x0,
  TKIND_RECORD = 0x1,
  TKIND_MODULE = 0x2,
  TKIND_INTERFACE = 0x3,
  TKIND_DISPATCH = 0x4,
  TKIND_COCLASS = 0x5,
  TKIND_ALIAS = 0x6,
  TKIND_UNION = 0x7,
  TKIND_MAX = 0x8,
};

/* 60 */
typedef enum tagTYPEKIND TYPEKIND;

/* 64 */
#pragma pack(push, 8)
union tagTYPEDESC::$AC700B6542D8071E244CADABF8A32897
{
  struct tagTYPEDESC *lptdesc;
  struct tagARRAYDESC *lpadesc;
  HREFTYPE hreftype;
};
#pragma pack(pop)

/* 63 */
#pragma pack(push, 8)
struct tagTYPEDESC
{
  #pragma pack(push, 8)
  union
  {
    struct tagTYPEDESC *lptdesc;
    struct tagARRAYDESC *lpadesc;
    HREFTYPE hreftype;
  };
  #pragma pack(pop)
  VARTYPE vt;
};
#pragma pack(pop)

/* 62 */
typedef struct tagTYPEDESC TYPEDESC;

/* 71 */
#pragma pack(push, 8)
struct tagIDLDESC
{
  ULONG_PTR dwReserved;
  USHORT wIDLFlags;
};
#pragma pack(pop)

/* 70 */
typedef struct tagIDLDESC IDLDESC;

/* 56 */
#pragma pack(push, 8)
struct tagTYPEATTR
{
  GUID guid;
  LCID lcid;
  DWORD dwReserved;
  MEMBERID memidConstructor;
  MEMBERID memidDestructor;
  LPOLESTR lpstrSchema;
  ULONG cbSizeInstance;
  TYPEKIND typekind;
  WORD cFuncs;
  WORD cVars;
  WORD cImplTypes;
  WORD cbSizeVft;
  WORD cbAlignment;
  WORD wTypeFlags;
  WORD wMajorVerNum;
  WORD wMinorVerNum;
  TYPEDESC tdescAlias;
  IDLDESC idldescType;
};
#pragma pack(pop)

/* 72 */
#pragma pack(push, 8)
struct ITypeComp
{
  struct ITypeCompVtbl *lpVtbl;
};
#pragma pack(pop)

/* 80 */
typedef struct tagELEMDESC ELEMDESC;

/* 88 */
enum tagFUNCKIND
{
  FUNC_VIRTUAL = 0x0,
  FUNC_PUREVIRTUAL = 0x1,
  FUNC_NONVIRTUAL = 0x2,
  FUNC_STATIC = 0x3,
  FUNC_DISPATCH = 0x4,
};

/* 87 */
typedef enum tagFUNCKIND FUNCKIND;

/* 92 */
enum tagCALLCONV
{
  CC_FASTCALL = 0x0,
  CC_CDECL = 0x1,
  CC_MSCPASCAL = 0x2,
  CC_PASCAL = 0x2,
  CC_MACPASCAL = 0x3,
  CC_STDCALL = 0x4,
  CC_FPFASTCALL = 0x5,
  CC_SYSCALL = 0x6,
  CC_MPWCDECL = 0x7,
  CC_MPWPASCAL = 0x8,
  CC_MAX = 0x9,
};

/* 91 */
typedef enum tagCALLCONV CALLCONV;

/* 85 */
typedef struct tagPARAMDESCEX *LPPARAMDESCEX;

/* 84 */
#pragma pack(push, 8)
struct tagPARAMDESC
{
  LPPARAMDESCEX pparamdescex;
  USHORT wParamFlags;
};
#pragma pack(pop)

/* 83 */
typedef struct tagPARAMDESC PARAMDESC;

/* 82 */
#pragma pack(push, 8)
union tagELEMDESC::$7C8F4CED1424251743D09680A1A0B07D
{
  IDLDESC idldesc;
  PARAMDESC paramdesc;
};
#pragma pack(pop)

/* 81 */
#pragma pack(push, 8)
struct tagELEMDESC
{
  TYPEDESC tdesc;
  #pragma pack(push, 8)
  union
  {
    IDLDESC idldesc;
    PARAMDESC paramdesc;
  };
  #pragma pack(pop)
};
#pragma pack(pop)

/* 79 */
#pragma pack(push, 8)
struct tagFUNCDESC
{
  MEMBERID memid;
  SCODE *lprgscode;
  ELEMDESC *lprgelemdescParam;
  FUNCKIND funckind;
  INVOKEKIND invkind;
  CALLCONV callconv;
  SHORT cParams;
  SHORT cParamsOpt;
  SHORT oVft;
  SHORT cScodes;
  ELEMDESC elemdescFunc;
  WORD wFuncFlags;
};
#pragma pack(pop)

/* 95 */
#pragma pack(push, 8)
union tagVARDESC::$E6274BD6A7149C9CC2413444FF769F0B
{
  ULONG oInst;
  VARIANT *lpvarValue;
};
#pragma pack(pop)

/* 97 */
enum tagVARKIND
{
  VAR_PERINSTANCE = 0x0,
  VAR_STATIC = 0x1,
  VAR_CONST = 0x2,
  VAR_DISPATCH = 0x3,
};

/* 96 */
typedef enum tagVARKIND VARKIND;

/* 94 */
#pragma pack(push, 8)
struct tagVARDESC
{
  MEMBERID memid;
  LPOLESTR lpstrSchema;
  #pragma pack(push, 8)
  union
  {
    ULONG oInst;
    VARIANT *lpvarValue;
  };
  #pragma pack(pop)
  ELEMDESC elemdescVar;
  WORD wVarFlags;
  VARKIND varkind;
};
#pragma pack(pop)

/* 104 */
#pragma pack(push, 8)
struct ITypeLib
{
  struct ITypeLibVtbl *lpVtbl;
};
#pragma pack(pop)

/* 65 */
#pragma pack(push, 8)
struct tagARRAYDESC
{
  TYPEDESC tdescElem;
  USHORT cDims;
  SAFEARRAYBOUND rgbounds[1];
};
#pragma pack(pop)

/* 75 */
enum tagDESCKIND
{
  DESCKIND_NONE = 0x0,
  DESCKIND_FUNCDESC = 0x1,
  DESCKIND_VARDESC = 0x2,
  DESCKIND_TYPECOMP = 0x3,
  DESCKIND_IMPLICITAPPOBJ = 0x4,
  DESCKIND_MAX = 0x5,
};

/* 74 */
typedef enum tagDESCKIND DESCKIND;

/* 76 */
typedef union tagBINDPTR BINDPTR;

/* 73 */
#pragma pack(push, 8)
struct ITypeCompVtbl
{
  HRESULT (__stdcall *QueryInterface)(ITypeComp *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(ITypeComp *This);
  ULONG (__stdcall *Release)(ITypeComp *This);
  HRESULT (__stdcall *Bind)(ITypeComp *This, LPOLESTR szName, ULONG lHashVal, WORD wFlags, ITypeInfo **ppTInfo, DESCKIND *pDescKind, BINDPTR *pBindPtr);
  HRESULT (__stdcall *BindType)(ITypeComp *This, LPOLESTR szName, ULONG lHashVal, ITypeInfo **ppTInfo, ITypeComp **ppTComp);
};
#pragma pack(pop)

/* 86 */
#pragma pack(push, 8)
struct tagPARAMDESCEX
{
  ULONG cBytes;
  VARIANTARG varDefaultValue;
};
#pragma pack(pop)

/* 106 */
typedef struct tagTLIBATTR TLIBATTR;

/* 105 */
#pragma pack(push, 8)
struct ITypeLibVtbl
{
  HRESULT (__stdcall *QueryInterface)(ITypeLib *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(ITypeLib *This);
  ULONG (__stdcall *Release)(ITypeLib *This);
  UINT (__stdcall *GetTypeInfoCount)(ITypeLib *This);
  HRESULT (__stdcall *GetTypeInfo)(ITypeLib *This, UINT index, ITypeInfo **ppTInfo);
  HRESULT (__stdcall *GetTypeInfoType)(ITypeLib *This, UINT index, TYPEKIND *pTKind);
  HRESULT (__stdcall *GetTypeInfoOfGuid)(ITypeLib *This, const GUID *const guid, ITypeInfo **ppTinfo);
  HRESULT (__stdcall *GetLibAttr)(ITypeLib *This, TLIBATTR **ppTLibAttr);
  HRESULT (__stdcall *GetTypeComp)(ITypeLib *This, ITypeComp **ppTComp);
  HRESULT (__stdcall *GetDocumentation)(ITypeLib *This, INT index, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
  HRESULT (__stdcall *IsName)(ITypeLib *This, LPOLESTR szNameBuf, ULONG lHashVal, BOOL *pfName);
  HRESULT (__stdcall *FindName)(ITypeLib *This, LPOLESTR szNameBuf, ULONG lHashVal, ITypeInfo **ppTInfo, MEMBERID *rgMemId, USHORT *pcFound);
  void (__stdcall *ReleaseTLibAttr)(ITypeLib *This, TLIBATTR *pTLibAttr);
};
#pragma pack(pop)

/* 77 */
#pragma pack(push, 8)
union tagBINDPTR
{
  FUNCDESC *lpfuncdesc;
  VARDESC *lpvardesc;
  ITypeComp *lptcomp;
};
#pragma pack(pop)

/* 109 */
enum tagSYSKIND
{
  SYS_WIN16 = 0x0,
  SYS_WIN32 = 0x1,
  SYS_MAC = 0x2,
  SYS_WIN64 = 0x3,
};

/* 108 */
typedef enum tagSYSKIND SYSKIND;

/* 107 */
#pragma pack(push, 8)
struct tagTLIBATTR
{
  GUID guid;
  LCID lcid;
  SYSKIND syskind;
  WORD wMajorVerNum;
  WORD wMinorVerNum;
  WORD wLibFlags;
};
#pragma pack(pop)

/* 125 */
#pragma pack(push, 1)
struct joyinfo_tag
{
  UINT wXpos;
  UINT wYpos;
  UINT wZpos;
  UINT wButtons;
};
#pragma pack(pop)

/* 127 */
typedef struct HWND__ *HWND;

/* 130 */
typedef unsigned int UINT_PTR;

/* 129 */
typedef UINT_PTR WPARAM;

/* 132 */
typedef int LONG_PTR;

/* 131 */
typedef LONG_PTR LPARAM;

/* 134 */
struct tagPOINT
{
  LONG x;
  LONG y;
};

/* 133 */
typedef struct tagPOINT POINT;

/* 126 */
struct tagMSG
{
  HWND hwnd;
  UINT message;
  WPARAM wParam;
  LPARAM lParam;
  DWORD time;
  POINT pt;
};

/* 128 */
struct HWND__
{
  int unused;
};

/* 135 */
struct _OSVERSIONINFOA
{
  DWORD dwOSVersionInfoSize;
  DWORD dwMajorVersion;
  DWORD dwMinorVersion;
  DWORD dwBuildNumber;
  DWORD dwPlatformId;
  CHAR szCSDVersion[128];
};

/* 136 */
typedef struct tagWNDCLASSA WNDCLASSA;

/* 139 */
typedef LONG_PTR LRESULT;

/* 138 */
typedef LRESULT (__stdcall *WNDPROC)(HWND, UINT, WPARAM, LPARAM);

/* 140 */
typedef struct HINSTANCE__ *HINSTANCE;

/* 142 */
typedef struct HICON__ *HICON;

/* 144 */
typedef HICON HCURSOR;

/* 145 */
typedef struct HBRUSH__ *HBRUSH;

/* 147 */
typedef const CHAR *LPCSTR;

/* 137 */
struct tagWNDCLASSA
{
  UINT style;
  WNDPROC lpfnWndProc;
  int cbClsExtra;
  int cbWndExtra;
  HINSTANCE hInstance;
  HICON hIcon;
  HCURSOR hCursor;
  HBRUSH hbrBackground;
  LPCSTR lpszMenuName;
  LPCSTR lpszClassName;
};

/* 141 */
struct HINSTANCE__
{
  int unused;
};

/* 143 */
struct HICON__
{
  int unused;
};

/* 146 */
struct HBRUSH__
{
  int unused;
};

/* 148 */
struct tagRECT
{
  LONG left;
  LONG top;
  LONG right;
  LONG bottom;
};

/* 150 */
typedef struct tagRECT RECT;

/* 149 */
struct tagMONITORINFO
{
  DWORD cbSize;
  RECT rcMonitor;
  RECT rcWork;
  DWORD dwFlags;
};

/* 151 */
typedef union _LARGE_INTEGER LARGE_INTEGER;

/* 153 */
struct _LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E
{
  DWORD LowPart;
  LONG HighPart;
};

/* 152 */
union _LARGE_INTEGER
{
  struct
  {
    DWORD LowPart;
    LONG HighPart;
  };
  struct _LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E u;
  LONGLONG QuadPart;
};

/* 156 */
struct _SYSTEM_INFO::$A707B71C060B6D10F73A71917EA8473F::$AA04DEB0C6383F89F13D312A174572A9
{
  WORD wProcessorArchitecture;
  WORD wReserved;
};

/* 155 */
union _SYSTEM_INFO::$A707B71C060B6D10F73A71917EA8473F
{
  DWORD dwOemId;
  struct
  {
    WORD wProcessorArchitecture;
    WORD wReserved;
  };
};

/* 157 */
typedef void *LPVOID;

/* 158 */
typedef ULONG_PTR DWORD_PTR;

/* 154 */
struct _SYSTEM_INFO
{
  union
  {
    DWORD dwOemId;
    struct
    {
      WORD wProcessorArchitecture;
      WORD wReserved;
    };
  };
  DWORD dwPageSize;
  LPVOID lpMinimumApplicationAddress;
  LPVOID lpMaximumApplicationAddress;
  DWORD_PTR dwActiveProcessorMask;
  DWORD dwNumberOfProcessors;
  DWORD dwProcessorType;
  DWORD dwAllocationGranularity;
  WORD wProcessorLevel;
  WORD wProcessorRevision;
};

/* 160 */
typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

/* 164 */
typedef void *HANDLE;

/* 159 */
#pragma pack(push, 8)
struct _RTL_CRITICAL_SECTION
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
  LONG LockCount;
  LONG RecursionCount;
  HANDLE OwningThread;
  HANDLE LockSemaphore;
  ULONG_PTR SpinCount;
};
#pragma pack(pop)

/* 163 */
struct _LIST_ENTRY
{
  struct _LIST_ENTRY *Flink;
  struct _LIST_ENTRY *Blink;
};

/* 162 */
typedef struct _LIST_ENTRY LIST_ENTRY;

/* 161 */
struct _RTL_CRITICAL_SECTION_DEBUG
{
  WORD Type;
  WORD CreatorBackTraceIndex;
  struct _RTL_CRITICAL_SECTION *CriticalSection;
  LIST_ENTRY ProcessLocksList;
  DWORD EntryCount;
  DWORD ContentionCount;
  DWORD Flags;
  WORD CreatorBackTraceIndexHigh;
  WORD SpareWORD;
};

/* 167 */
typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

/* 166 */
typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

/* 170 */
typedef struct _CONTEXT CONTEXT;

/* 169 */
typedef CONTEXT *PCONTEXT;

/* 165 */
struct _EXCEPTION_POINTERS
{
  PEXCEPTION_RECORD ExceptionRecord;
  PCONTEXT ContextRecord;
};

/* 168 */
struct _EXCEPTION_RECORD
{
  DWORD ExceptionCode;
  DWORD ExceptionFlags;
  struct _EXCEPTION_RECORD *ExceptionRecord;
  PVOID ExceptionAddress;
  DWORD NumberParameters;
  ULONG_PTR ExceptionInformation[15];
};

/* 173 */
struct _FLOATING_SAVE_AREA
{
  DWORD ControlWord;
  DWORD StatusWord;
  DWORD TagWord;
  DWORD ErrorOffset;
  DWORD ErrorSelector;
  DWORD DataOffset;
  DWORD DataSelector;
  BYTE RegisterArea[80];
  DWORD Spare0;
};

/* 172 */
typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

/* 171 */
#pragma pack(push, 4)
struct _CONTEXT
{
  DWORD ContextFlags;
  DWORD Dr0;
  DWORD Dr1;
  DWORD Dr2;
  DWORD Dr3;
  DWORD Dr6;
  DWORD Dr7;
  FLOATING_SAVE_AREA FloatSave;
  DWORD SegGs;
  DWORD SegFs;
  DWORD SegEs;
  DWORD SegDs;
  DWORD Edi;
  DWORD Esi;
  DWORD Ebx;
  DWORD Edx;
  DWORD Ecx;
  DWORD Eax;
  DWORD Ebp;
  DWORD Eip;
  DWORD SegCs;
  DWORD EFlags;
  DWORD Esp;
  DWORD SegSs;
  BYTE ExtendedRegisters[512];
};
#pragma pack(pop)

/* 175 */
typedef WCHAR *LPWSTR;

/* 176 */
typedef BYTE *LPBYTE;

/* 174 */
struct _STARTUPINFOW
{
  DWORD cb;
  LPWSTR lpReserved;
  LPWSTR lpDesktop;
  LPWSTR lpTitle;
  DWORD dwX;
  DWORD dwY;
  DWORD dwXSize;
  DWORD dwYSize;
  DWORD dwXCountChars;
  DWORD dwYCountChars;
  DWORD dwFillAttribute;
  DWORD dwFlags;
  WORD wShowWindow;
  WORD cbReserved2;
  LPBYTE lpReserved2;
  HANDLE hStdInput;
  HANDLE hStdOutput;
  HANDLE hStdError;
};

/* 177 */
struct _FILETIME
{
  DWORD dwLowDateTime;
  DWORD dwHighDateTime;
};

/* 179 */
typedef struct _FILETIME FILETIME;

/* 178 */
struct _WIN32_FIND_DATAW
{
  DWORD dwFileAttributes;
  FILETIME ftCreationTime;
  FILETIME ftLastAccessTime;
  FILETIME ftLastWriteTime;
  DWORD nFileSizeHigh;
  DWORD nFileSizeLow;
  DWORD dwReserved0;
  DWORD dwReserved1;
  WCHAR cFileName[260];
  WCHAR cAlternateFileName[14];
};

/* 180 */
struct _SYSTEMTIME
{
  WORD wYear;
  WORD wMonth;
  WORD wDayOfWeek;
  WORD wDay;
  WORD wHour;
  WORD wMinute;
  WORD wSecond;
  WORD wMilliseconds;
};

/* 182 */
typedef struct _SYSTEMTIME SYSTEMTIME;

/* 181 */
struct _TIME_ZONE_INFORMATION
{
  LONG Bias;
  WCHAR StandardName[32];
  SYSTEMTIME StandardDate;
  LONG StandardBias;
  WCHAR DaylightName[32];
  SYSTEMTIME DaylightDate;
  LONG DaylightBias;
};

/* 183 */
struct _cpinfo
{
  UINT MaxCharSize;
  BYTE DefaultChar[2];
  BYTE LeadByte[12];
};

/* 184 */
struct _Ctypevec
{
  unsigned int _Page;
  const __int16 *_Table;
  int _Delfl;
  wchar_t *_LocaleName;
};

/* 185 */
struct _Cvtvec
{
  unsigned int _Page;
  unsigned int _Mbcurmax;
  int _Isclocale;
  unsigned __int8 _Isleadbyte[32];
};

/* 189 */
struct _SINGLE_LIST_ENTRY
{
  struct _SINGLE_LIST_ENTRY *Next;
};

/* 188 */
typedef struct _SINGLE_LIST_ENTRY SLIST_ENTRY;

/* 187 */
struct _SLIST_HEADER::$04C3B4B3818F1694974352AE64BF5082
{
  SLIST_ENTRY Next;
  WORD Depth;
  WORD CpuId;
};

/* 186 */
union _SLIST_HEADER
{
  ULONGLONG Alignment;
  struct
  {
    SLIST_ENTRY Next;
    WORD Depth;
    WORD CpuId;
  };
};

/* 191 */
typedef const struct _s_ThrowInfo ThrowInfo;

/* 190 */
typedef ThrowInfo _ThrowInfo;

/* 193 */
typedef void (__cdecl *PMFN)(void *);

/* 194 */
typedef const struct _s_CatchableTypeArray CatchableTypeArray;

/* 192 */
#pragma pack(push, 4)
struct _s_ThrowInfo
{
  unsigned int attributes;
  PMFN pmfnUnwind;
  int (__cdecl *pForwardCompat)();
  CatchableTypeArray *pCatchableTypeArray;
};
#pragma pack(pop)

/* 196 */
typedef const struct _s_CatchableType CatchableType;

/* 195 */
#pragma pack(push, 4)
struct _s_CatchableTypeArray
{
  int nCatchableTypes;
  CatchableType *arrayOfCatchableTypes[];
};
#pragma pack(pop)

/* 199 */
#pragma pack(push, 4)
struct PMD
{
  int mdisp;
  int pdisp;
  int vdisp;
};
#pragma pack(pop)

/* 197 */
#pragma pack(push, 4)
struct _s_CatchableType
{
  unsigned int properties;
  TypeDescriptor *pType;
  PMD thisDisplacement;
  int sizeOrOffset;
  PMFN copyFunction;
};
#pragma pack(pop)

/* 198 */
struct TypeDescriptor
{
  void *pVFTable;
  void *spare;
  char name[];
};

/* 200 */
#pragma pack(push, 8)
struct __crt_locale_pointers
{
  struct __crt_locale_data *locinfo;
  struct __crt_multibyte_data *mbcinfo;
};
#pragma pack(pop)

/* 201 */
struct FuncInfo
{
  int magicNumber;
  int maxState;
  void *pUnwindMap;
  int nTryBlocks;
  void *pTryBlockMap;
  int nIPMapEntries;
  void *pIPtoStateMap;
  void *pESTypeList;
  int EHFlags;
};

/* 202 */
struct UnwindMapEntry
{
  int toState;
  void *action;
};

/* 203 */
struct TryBlockMapEntry
{
  int tryLow;
  int tryHigh;
  int catchHigh;
  int nCatches;
  void *pHandlerArray;
};

/* 204 */
struct HandlerType
{
  int adjectives;
  void *pType;
  int dispCatchObj;
  void *addressOfHandler;
};

/* 205 */
#pragma pack(push, 8)
struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
};
#pragma pack(pop)

/* 206 */
enum _crt_argv_mode
{
  _crt_argv_no_arguments = 0x0,
  _crt_argv_unexpanded_arguments = 0x1,
  _crt_argv_expanded_arguments = 0x2,
};

/* 208 */
typedef void (__cdecl *_PVFV)();

/* 207 */
#pragma pack(push, 8)
struct _onexit_table_t
{
  _PVFV *_first;
  _PVFV *_last;
  _PVFV *_end;
};
#pragma pack(pop)

/* 209 */
#pragma pack(push, 8)
struct fenv_t
{
  unsigned int _Fe_ctl;
  unsigned int _Fe_stat;
};
#pragma pack(pop)

/* 211 */
typedef unsigned int _dev_t;

/* 212 */
typedef unsigned __int16 _ino_t;

/* 213 */
typedef int _off_t;

/* 214 */
typedef __int64 __time64_t;

/* 210 */
#pragma pack(push, 8)
struct _stat64i32
{
  _dev_t st_dev;
  _ino_t st_ino;
  unsigned __int16 st_mode;
  __int16 st_nlink;
  __int16 st_uid;
  __int16 st_gid;
  _dev_t st_rdev;
  _off_t st_size;
  __time64_t st_atime;
  __time64_t st_mtime;
  __time64_t st_ctime;
};
#pragma pack(pop)

/* 216 */
typedef struct _EXCEPTION_POINTERS *PEXCEPTION_POINTERS;

/* 215 */
#pragma pack(push, 4)
struct _MINIDUMP_EXCEPTION_INFORMATION
{
  DWORD ThreadId;
  PEXCEPTION_POINTERS ExceptionPointers;
  BOOL ClientPointers;
};
#pragma pack(pop)

/* 217 */
struct __crt_strtox::floating_point_value;

/* 218 */
struct __crt_strtox;

/* 219 */
struct __crt_stdio_output::formatting_buffer;

/* 220 */
struct __crt_stdio_output;

/* 221 */
struct _anonymous_namespace_::scoped_fp_state_reset;

/* 222 */
struct std::_Lockit;

/* 223 */
struct std::locale::_Locimp;

/* 224 */
struct std::ios_base;

/* 225 */
struct _Init_atexit;

/* 226 */
struct std::_Init_locks;

/* 228 */
typedef int __ehstate_t;

/* 227 */
#pragma pack(push, 4)
struct EHRegistrationNode
{
  EHRegistrationNode *pNext;
  void *frameHandler;
  __ehstate_t state;
};
#pragma pack(pop)

/* 229 */
struct _LocaleUpdate;

/* 230 */
enum _crt_exit_cleanup_mode
{
  _crt_exit_full_cleanup = 0x0,
  _crt_exit_quick_cleanup = 0x1,
  _crt_exit_no_cleanup = 0x2,
};

/* 231 */
enum _crt_exit_return_mode
{
  _crt_exit_terminate_process = 0x0,
  _crt_exit_return_to_caller = 0x1,
};

/* 232 */
struct std::_Fac_node;

/* 233 */
struct std::_Fac_tidy_reg_t;

/* 234 */
union __declspec(align(16)) __m128i
{
  __int8 m128i_i8[16];
  __int16 m128i_i16[8];
  __int32 m128i_i32[4];
  __int64 m128i_i64[2];
  unsigned __int8 m128i_u8[16];
  unsigned __int16 m128i_u16[8];
  unsigned __int32 m128i_u32[4];
  unsigned __int64 m128i_u64[2];
};

