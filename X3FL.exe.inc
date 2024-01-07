; ---------------------------------------------------------------------------

IDispatchVtbl   struc ; (sizeof=0x1C, align=0x4, copyof_50)
QueryInterface  dd ?                    ; offset
AddRef          dd ?                    ; offset
Release         dd ?                    ; offset
GetTypeInfoCount dd ?                   ; offset
GetTypeInfo     dd ?                    ; offset
GetIDsOfNames   dd ?                    ; offset
Invoke          dd ?                    ; offset
IDispatchVtbl   ends

; ---------------------------------------------------------------------------

GUID            struc ; (sizeof=0x10, align=0x4, copyof_2)
                                        ; XREF: .rdata:pcGuidDevice/r
                                        ; .rdata:0059B9B0/r
Data1           dd ?
Data2           dw ?
Data3           dw ?
Data4           db 8 dup(?)
GUID            ends

; ---------------------------------------------------------------------------

_EH4_SCOPETABLE struc ; (sizeof=0x10, align=0x4, copyof_6, variable size)
                                        ; XREF: .rdata:stru_59FB40/r
                                        ; .rdata:stru_59FB60/r ...
GSCookieOffset  dd ?
GSCookieXOROffset dd ?
EHCookieOffset  dd ?
EHCookieXOROffset dd ?
ScopeRecord     _EH4_SCOPETABLE_RECORD 0 dup(?)
                                        ; XREF: .rdata:0056EEF0/o
_EH4_SCOPETABLE ends

; ---------------------------------------------------------------------------

_EH4_SCOPETABLE_RECORD struc ; (sizeof=0xC, align=0x4, copyof_5)
                                        ; XREF: _EH4_SCOPETABLE/r
EnclosingLevel  dd ?                    ; XREF: .rdata:0056EEF0/o
FilterFunc      dd ?                    ; offset
HandlerFunc     dd ?                    ; offset
_EH4_SCOPETABLE_RECORD ends

; ---------------------------------------------------------------------------

CPPEH_RECORD    struc ; (sizeof=0x18, align=0x4, copyof_11)
                                        ; XREF: ??_M@YGXPAXIIP6EX0@Z@Z/r
                                        ; ?__ArrayUnwind@@YGXPAXIIP6EX0@Z@Z/r ...
old_esp         dd ?                    ; XREF: __ArrayUnwind(void *,uint,uint,void (*)(void *)):loc_51E31C/r
                                        ; ___scrt_is_nonwritable_in_current_image:loc_51E7AD/r ...
exc_ptr         dd ?                    ; XREF: __ArrayUnwind(void *,uint,uint,void (*)(void *)):loc_51E2F3/r
                                        ; ___scrt_is_nonwritable_in_current_image:loc_51E79A/r ... ; offset
registration    _EH3_EXCEPTION_REGISTRATION ?
                                        ; XREF: `eh vector destructor iterator'(void *,uint,uint,void (*)(void *))+23/w
                                        ; `eh vector destructor iterator'(void *,uint,uint,void (*)(void *))+4A/w ...
CPPEH_RECORD    ends

; ---------------------------------------------------------------------------

_EH3_EXCEPTION_REGISTRATION struc ; (sizeof=0x10, align=0x4, copyof_8)
                                        ; XREF: CPPEH_RECORD/r
Next            dd ?                    ; XREF: __IsNonwritableInCurrentImage+77/r
                                        ; __IsNonwritableInCurrentImage+A8/r ; offset
ExceptionHandler dd ?                   ; offset
ScopeTable      dd ?                    ; XREF: __IsNonwritableInCurrentImage+21/w ; offset
TryLevel        dd ?                    ; XREF: `eh vector destructor iterator'(void *,uint,uint,void (*)(void *))+23/w
                                        ; `eh vector destructor iterator'(void *,uint,uint,void (*)(void *))+4A/w ...
_EH3_EXCEPTION_REGISTRATION ends

; ---------------------------------------------------------------------------

_MEMORYSTATUS   struc ; (sizeof=0x20, align=0x4, copyof_12)
                                        ; XREF: sub_476BC0/r
dwLength        dd ?
dwMemoryLoad    dd ?
dwTotalPhys     dd ?                    ; XREF: sub_476BC0+7D2/o
                                        ; sub_476BC0+7F9/r ...
dwAvailPhys     dd ?                    ; XREF: sub_476BC0+6A9/r
dwTotalPageFile dd ?
dwAvailPageFile dd ?                    ; XREF: sub_476BC0+6B4/r
dwTotalVirtual  dd ?                    ; XREF: sub_476BC0+945/w
dwAvailVirtual  dd ?                    ; XREF: sub_476BC0+7ED/r
                                        ; sub_476BC0+81F/r ...
_MEMORYSTATUS   ends

; ---------------------------------------------------------------------------

XINPUT_STATE    struc ; (sizeof=0x10, align=0x4, copyof_16)
                                        ; XREF: sub_47B560/r
                                        ; sub_4EED70/r ...
dwPacketNumber  dd ?                    ; XREF: sub_4EED70+ADE/w
                                        ; DialogFunc+46C/w
Gamepad         XINPUT_GAMEPAD ?        ; XREF: sub_4EED70+6B0/r
                                        ; sub_4EED70:loc_4EF431/r ...
XINPUT_STATE    ends

; ---------------------------------------------------------------------------

XINPUT_GAMEPAD  struc ; (sizeof=0xC, align=0x2, copyof_18)
                                        ; XREF: XINPUT_STATE/r
wButtons        dw ?                    ; XREF: sub_4EED70+D34/r
                                        ; DialogFunc+4F1/r
bLeftTrigger    db ?                    ; XREF: sub_4EED70+CCB/r
bRightTrigger   db ?                    ; XREF: sub_4EED70+D08/r
sThumbLX        dw ?                    ; XREF: sub_4EED70+B60/r
sThumbLY        dw ?                    ; XREF: sub_4EED70+BB7/r
sThumbRX        dw ?                    ; XREF: sub_4EED70+6B0/r
                                        ; sub_4EED70:loc_4EF431/r ...
sThumbRY        dw ?                    ; XREF: sub_4EED70:loc_4EF448/r
                                        ; sub_4EED70:loc_4EF45F/r ...
XINPUT_GAMEPAD  ends

; ---------------------------------------------------------------------------

IID             struc ; (sizeof=0x10, align=0x4, copyof_23)
                                        ; XREF: .rdata:stru_550AA4/r
                                        ; .rdata:stru_550AC4/r ...
Data1           dd ?
Data2           dw ?
Data3           dw ?
Data4           db 8 dup(?)
IID             ends

; ---------------------------------------------------------------------------

VARIANTARG      struc ; (sizeof=0x10, align=0x8, copyof_24)
                                        ; XREF: sub_4D5370/r
anonymous_0     tagVARIANT::$E93DC971A089CC95F6C875332324C1E7 ?
                                        ; XREF: sub_4D5370+64/r
                                        ; sub_4D5370+6C/r ...
VARIANTARG      ends

; ---------------------------------------------------------------------------

tagVARIANT::$E93DC971A089CC95F6C875332324C1E7 union ; (sizeof=0x10, align=0x8, copyof_27)
                                        ; XREF: sub_4D5370+64/r
                                        ; sub_4D5370+6C/r ...
anonymous_0     tagVARIANT::$E93DC971A089CC95F6C875332324C1E7::$65D68C826D16CA47CF95571D7BFCD657 ?
decVal          DECIMAL ?
tagVARIANT::$E93DC971A089CC95F6C875332324C1E7 ends

; ---------------------------------------------------------------------------

tagVARIANT::$E93DC971A089CC95F6C875332324C1E7::$65D68C826D16CA47CF95571D7BFCD657 struc ; (sizeof=0x10, align=0x8, copyof_28)
                                        ; XREF: tagVARIANT::$E93DC971A089CC95F6C875332324C1E7/r
vt              dw ?
wReserved1      dw ?
wReserved2      dw ?
wReserved3      dw ?
anonymous_0     tagVARIANT::$::$65D68C826D16CA47CF95571D7BFCD657::$E09503A454170B491AC1C4312CE36FE6 ?
tagVARIANT::$E93DC971A089CC95F6C875332324C1E7::$65D68C826D16CA47CF95571D7BFCD657 ends

; ---------------------------------------------------------------------------

tagVARIANT::$::$65D68C826D16CA47CF95571D7BFCD657::$E09503A454170B491AC1C4312CE36FE6 union ; (sizeof=0x8, align=0x8, copyof_30)
                                        ; XREF: tagVARIANT::$E93DC971A089CC95F6C875332324C1E7::$65D68C826D16CA47CF95571D7BFCD657/r
llVal           dq ?
lVal            dd ?
bVal            db ?
iVal            dw ?
fltVal          dd ?
dblVal          dq ?
boolVal         dw ?
scode           dd ?
cyVal           CY ?
date            dq ?
bstrVal         dd ?                    ; offset
punkVal         dd ?                    ; offset
pdispVal        dd ?                    ; offset
parray          dd ?                    ; offset
pbVal           dd ?                    ; offset
piVal           dd ?                    ; offset
plVal           dd ?                    ; offset
pllVal          dd ?                    ; offset
pfltVal         dd ?                    ; offset
pdblVal         dd ?                    ; offset
pboolVal        dd ?                    ; offset
pscode          dd ?                    ; offset
pcyVal          dd ?                    ; offset
pdate           dd ?                    ; offset
pbstrVal        dd ?                    ; offset
ppunkVal        dd ?                    ; offset
ppdispVal       dd ?                    ; offset
pparray         dd ?                    ; offset
pvarVal         dd ?                    ; offset
byref           dd ?                    ; offset
cVal            db ?
uiVal           dw ?
ulVal           dd ?
ullVal          dq ?
intVal          dd ?
uintVal         dd ?
pdecVal         dd ?                    ; offset
pcVal           dd ?                    ; offset
puiVal          dd ?                    ; offset
pulVal          dd ?                    ; offset
pullVal         dd ?                    ; offset
pintVal         dd ?                    ; offset
puintVal        dd ?                    ; offset
anonymous_0     tagVARIANT::$::$::$E09503A454170B491AC1C4312CE36FE6::$0FDBD249F1AECD6A49409B6B82281578 ?
tagVARIANT::$::$65D68C826D16CA47CF95571D7BFCD657::$E09503A454170B491AC1C4312CE36FE6 ends

; ---------------------------------------------------------------------------

CY              union ; (sizeof=0x8, align=0x8, copyof_37)
                                        ; XREF: tagVARIANT::$::$65D68C826D16CA47CF95571D7BFCD657::$E09503A454170B491AC1C4312CE36FE6/r
anonymous_0     tagCY::$3EA7BC8C29B528C7CA1203FC489E132F ?
int64           dq ?
CY              ends

; ---------------------------------------------------------------------------

tagCY::$3EA7BC8C29B528C7CA1203FC489E132F struc ; (sizeof=0x8, align=0x4, copyof_39)
                                        ; XREF: CY/r
Lo              dd ?
Hi              dd ?
tagCY::$3EA7BC8C29B528C7CA1203FC489E132F ends

; ---------------------------------------------------------------------------

tagVARIANT::$::$::$E09503A454170B491AC1C4312CE36FE6::$0FDBD249F1AECD6A49409B6B82281578 struc ; (sizeof=0x8, align=0x4, copyof_121)
                                        ; XREF: tagVARIANT::$::$65D68C826D16CA47CF95571D7BFCD657::$E09503A454170B491AC1C4312CE36FE6/r
pvRecord        dd ?                    ; offset
pRecInfo        dd ?                    ; offset
tagVARIANT::$::$::$E09503A454170B491AC1C4312CE36FE6::$0FDBD249F1AECD6A49409B6B82281578 ends

; ---------------------------------------------------------------------------

DECIMAL         struc ; (sizeof=0x10, align=0x8, copyof_115)
                                        ; XREF: tagVARIANT::$E93DC971A089CC95F6C875332324C1E7/r
wReserved       dw ?
anonymous_0     tagDEC::$64EC678C49E7BE49873AFBFB7A849D34 ?
Hi32            dd ?
anonymous_1     tagDEC::$D28E26DEC3EC762C06C2AA9D0F7AC301 ?
DECIMAL         ends

; ---------------------------------------------------------------------------

tagDEC::$64EC678C49E7BE49873AFBFB7A849D34 union ; (sizeof=0x2, align=0x2, copyof_117)
                                        ; XREF: DECIMAL/r
anonymous_0     tagDEC::$64EC678C49E7BE49873AFBFB7A849D34::$7F8459940C2B08BD5D82B0F27239141B ?
signscale       dw ?
tagDEC::$64EC678C49E7BE49873AFBFB7A849D34 ends

; ---------------------------------------------------------------------------

tagDEC::$64EC678C49E7BE49873AFBFB7A849D34::$7F8459940C2B08BD5D82B0F27239141B struc ; (sizeof=0x2, copyof_118)
                                        ; XREF: tagDEC::$64EC678C49E7BE49873AFBFB7A849D34/r
scale           db ?
sign            db ?
tagDEC::$64EC678C49E7BE49873AFBFB7A849D34::$7F8459940C2B08BD5D82B0F27239141B ends

; ---------------------------------------------------------------------------

tagDEC::$D28E26DEC3EC762C06C2AA9D0F7AC301 union ; (sizeof=0x8, align=0x8, copyof_119)
                                        ; XREF: DECIMAL/r
anonymous_0     tagDEC::$D28E26DEC3EC762C06C2AA9D0F7AC301::$674876891A86A76F12C10005982BCA56 ?
Lo64            dq ?
tagDEC::$D28E26DEC3EC762C06C2AA9D0F7AC301 ends

; ---------------------------------------------------------------------------

tagDEC::$D28E26DEC3EC762C06C2AA9D0F7AC301::$674876891A86A76F12C10005982BCA56 struc ; (sizeof=0x8, align=0x4, copyof_120)
                                        ; XREF: tagDEC::$D28E26DEC3EC762C06C2AA9D0F7AC301/r
Lo32            dd ?
Mid32           dd ?
tagDEC::$D28E26DEC3EC762C06C2AA9D0F7AC301::$674876891A86A76F12C10005982BCA56 ends

; ---------------------------------------------------------------------------

joyinfo_tag     struc ; (sizeof=0x10, copyof_125)
                                        ; XREF: sub_4EBEF0/r
                                        ; sub_4EBEF0/r ...
wXpos           dd ?                    ; XREF: sub_4EC010+15/r
                                        ; sub_4EC100+59/w ...
wYpos           dd ?                    ; XREF: sub_4EC010+20/r
                                        ; sub_4EC100+51/w ...
wZpos           dd ?                    ; XREF: sub_4EC100+49/w
                                        ; sub_4EC100+69/w
wButtons        dd ?                    ; XREF: sub_4EC100+41/w
                                        ; sub_4EC100+61/w ...
joyinfo_tag     ends

; ---------------------------------------------------------------------------

tagMSG          struc ; (sizeof=0x1C, align=0x4, copyof_126)
                                        ; XREF: sub_4EC620/r
hwnd            dd ?                    ; offset
message         dd ?
wParam          dd ?
lParam          dd ?
time            dd ?
pt              POINT ?
tagMSG          ends

; ---------------------------------------------------------------------------

POINT           struc ; (sizeof=0x8, align=0x4, copyof_133)
                                        ; XREF: tagMSG/r
x               dd ?
y               dd ?
POINT           ends

; ---------------------------------------------------------------------------

tagPOINT        struc ; (sizeof=0x8, align=0x4, copyof_134)
                                        ; XREF: sub_4EC790/r
x               dd ?                    ; XREF: sub_4EC790+24C/r
                                        ; sub_4EC790:loc_4ECA24/r
y               dd ?                    ; XREF: sub_4EC790+264/r
                                        ; sub_4EC790+298/r
tagPOINT        ends

; ---------------------------------------------------------------------------

_OSVERSIONINFOA struc ; (sizeof=0x94, align=0x4, copyof_135)
                                        ; XREF: sub_4ED060/r
dwOSVersionInfoSize dd ?                ; XREF: sub_4ED060+9C/w
dwMajorVersion  dd ?
dwMinorVersion  dd ?
dwBuildNumber   dd ?
dwPlatformId    dd ?                    ; XREF: sub_4ED060+AF/r
szCSDVersion    db 128 dup(?)
_OSVERSIONINFOA ends

; ---------------------------------------------------------------------------

WNDCLASSA       struc ; (sizeof=0x28, align=0x4, copyof_136)
                                        ; XREF: sub_4F3A30/r
style           dd ?                    ; XREF: sub_4F3A30+6E/w
                                        ; sub_4F3A30+84/w ...
lpfnWndProc     dd ?                    ; XREF: sub_4F3A30+8C/w ; offset
cbClsExtra      dd ?                    ; XREF: sub_4F3A30+94/w
cbWndExtra      dd ?                    ; XREF: sub_4F3A30+9C/w
hInstance       dd ?                    ; XREF: sub_4F3A30+78/w
                                        ; sub_4F3A30+A4/w ; offset
hIcon           dd ?                    ; XREF: sub_4F3A30+B5/w
                                        ; sub_4F3A30+BB/w ; offset
hCursor         dd ?                    ; XREF: sub_4F3A30+BF/w ; offset
hbrBackground   dd ?                    ; XREF: sub_4F3A30+CF/w
                                        ; sub_4F3A30+EE/w ; offset
lpszMenuName    dd ?                    ; XREF: sub_4F3A30+7E/w
                                        ; sub_4F3A30+11E/w ; offset
lpszClassName   dd ?                    ; XREF: sub_4F3A30+12E/w ; offset
WNDCLASSA       ends

; ---------------------------------------------------------------------------

tagRECT         struc ; (sizeof=0x10, align=0x4, copyof_148)
                                        ; XREF: .data:Rect/r
                                        ; sub_4FD480/r
left            dd ?                    ; XREF: sub_4F3A30+2A5/w
                                        ; sub_4F3A30+360/w ...
top             dd ?                    ; XREF: sub_4F3A30+298/w
                                        ; sub_4F3A30+310/w ...
right           dd ?                    ; XREF: sub_4F3A30+2B9/w
                                        ; sub_4F3A30+366/w ...
bottom          dd ?                    ; XREF: sub_4F3A30+2AF/w
                                        ; sub_4F3A30+31A/w ...
tagRECT         ends

; ---------------------------------------------------------------------------

tagMONITORINFO  struc ; (sizeof=0x28, align=0x4, copyof_149)
                                        ; XREF: sub_4F3A30/r
cbSize          dd ?                    ; XREF: sub_4F3A30+23D/w
rcMonitor       RECT ?
rcWork          RECT ?                  ; XREF: sub_4F3A30:loc_4F3CB9/r
                                        ; sub_4F3A30+292/r ...
dwFlags         dd ?
tagMONITORINFO  ends

; ---------------------------------------------------------------------------

RECT            struc ; (sizeof=0x10, align=0x4, copyof_150)
                                        ; XREF: tagMONITORINFO/r
                                        ; tagMONITORINFO/r
left            dd ?                    ; XREF: sub_4F3A30+292/r
                                        ; sub_4F3A30+329/r ...
top             dd ?                    ; XREF: sub_4F3A30:loc_4F3CB9/r
                                        ; sub_4F3A30+2CE/r ...
right           dd ?                    ; XREF: sub_4F3A30:loc_4F3D53/r
bottom          dd ?                    ; XREF: sub_4F3A30+2CA/r
RECT            ends

; ---------------------------------------------------------------------------

LARGE_INTEGER   union ; (sizeof=0x8, align=0x8, copyof_151)
                                        ; XREF: sub_4FFE30+1F/r
                                        ; sub_4FFE30+25/r ...
anonymous_0     _LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
u               _LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
QuadPart        dq ?
LARGE_INTEGER   ends

; ---------------------------------------------------------------------------

_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E struc ; (sizeof=0x8, align=0x4, copyof_153)
                                        ; XREF: LARGE_INTEGER/r
                                        ; LARGE_INTEGER/r ...
LowPart         dd ?
HighPart        dd ?
_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ends

; ---------------------------------------------------------------------------

_SYSTEM_INFO    struc ; (sizeof=0x24, align=0x4, copyof_154)
                                        ; XREF: sub_509E00/r
anonymous_0     _SYSTEM_INFO::$A707B71C060B6D10F73A71917EA8473F ?
dwPageSize      dd ?                    ; XREF: sub_509E00+37/r
lpMinimumApplicationAddress dd ?        ; offset
lpMaximumApplicationAddress dd ?        ; XREF: sub_509E00+104/o
                                        ; sub_509E00+10E/w ... ; offset
dwActiveProcessorMask dd ?
dwNumberOfProcessors dd ?
dwProcessorType dd ?
dwAllocationGranularity dd ?            ; XREF: sub_509E00+107/w
                                        ; sub_509E00+1C7/w
wProcessorLevel dw ?                    ; XREF: sub_509E00+F7/w
                                        ; sub_509E00+197/r ...
wProcessorRevision dw ?
_SYSTEM_INFO    ends

; ---------------------------------------------------------------------------

_SYSTEM_INFO::$A707B71C060B6D10F73A71917EA8473F union ; (sizeof=0x4, align=0x4, copyof_155)
                                        ; XREF: _SYSTEM_INFO/r
dwOemId         dd ?
anonymous_0     _SYSTEM_INFO::$A707B71C060B6D10F73A71917EA8473F::$AA04DEB0C6383F89F13D312A174572A9 ?
_SYSTEM_INFO::$A707B71C060B6D10F73A71917EA8473F ends

; ---------------------------------------------------------------------------

_SYSTEM_INFO::$A707B71C060B6D10F73A71917EA8473F::$AA04DEB0C6383F89F13D312A174572A9 struc ; (sizeof=0x4, align=0x2, copyof_156)
                                        ; XREF: _SYSTEM_INFO::$A707B71C060B6D10F73A71917EA8473F/r
wProcessorArchitecture dw ?
wReserved       dw ?
_SYSTEM_INFO::$A707B71C060B6D10F73A71917EA8473F::$AA04DEB0C6383F89F13D312A174572A9 ends

; ---------------------------------------------------------------------------

_RTL_CRITICAL_SECTION struc ; (sizeof=0x18, align=0x4, copyof_159)
                                        ; XREF: .data:stru_5A7508/r
                                        ; .data:CriticalSection/r ...
DebugInfo       dd ?                    ; offset
LockCount       dd ?
RecursionCount  dd ?
OwningThread    dd ?                    ; offset
LockSemaphore   dd ?                    ; offset
SpinCount       dd ?
_RTL_CRITICAL_SECTION ends

; ---------------------------------------------------------------------------

HINSTANCE__     struc ; (sizeof=0x4, align=0x4, copyof_141)
unused          dd ?
HINSTANCE__     ends

; ---------------------------------------------------------------------------

_EXCEPTION_POINTERS struc ; (sizeof=0x8, align=0x4, copyof_165)
                                        ; XREF: .rdata:ExceptionInfo/r
                                        ; ___scrt_fastfail/r ...
ExceptionRecord dd ?                    ; XREF: ___scrt_fastfail+E4/w
                                        ; ___acrt_call_reportfault+51/w ; offset
ContextRecord   dd ?                    ; XREF: ___scrt_fastfail+EF/w
                                        ; ___acrt_call_reportfault+5D/w ; offset
_EXCEPTION_POINTERS ends

; ---------------------------------------------------------------------------

_STARTUPINFOW   struc ; (sizeof=0x44, align=0x4, copyof_174)
                                        ; XREF: ___scrt_get_show_window_mode/r
                                        ; ?initialize_inherited_file_handles_nolock@@YAXXZ/r
cb              dd ?
lpReserved      dd ?                    ; offset
lpDesktop       dd ?                    ; offset
lpTitle         dd ?                    ; offset
dwX             dd ?
dwY             dd ?
dwXSize         dd ?
dwYSize         dd ?
dwXCountChars   dd ?
dwYCountChars   dd ?
dwFillAttribute dd ?
dwFlags         dd ?                    ; XREF: ___scrt_get_show_window_mode+20/r
wShowWindow     dw ?                    ; XREF: ___scrt_get_show_window_mode+26/r
cbReserved2     dw ?                    ; XREF: initialize_inherited_file_handles_nolock(void)+12/r
lpReserved2     dd ?                    ; XREF: initialize_inherited_file_handles_nolock(void)+1D/r ; offset
hStdInput       dd ?                    ; offset
hStdOutput      dd ?                    ; offset
hStdError       dd ?                    ; offset
_STARTUPINFOW   ends

; ---------------------------------------------------------------------------

_FILETIME       struc ; (sizeof=0x8, align=0x4, copyof_177)
                                        ; XREF: ___security_init_cookie/r
                                        ; ??$common_timespec_get@U_timespec64@@@@YAHQAU_timespec64@@H@Z/r
dwLowDateTime   dd ?                    ; XREF: ___security_init_cookie+6/w
                                        ; ___security_init_cookie+3D/r ...
dwHighDateTime  dd ?                    ; XREF: ___security_init_cookie+A/w
                                        ; ___security_init_cookie+3A/r ...
_FILETIME       ends

; ---------------------------------------------------------------------------

_WIN32_FIND_DATAW struc ; (sizeof=0x250, align=0x4, copyof_178)
                                        ; XREF: ??$common_find_next_wide@U_wfinddata64i32_t@@@@YAHHQAU_wfinddata64i32_t@@@Z/r
dwFileAttributes dd ?                   ; XREF: common_find_next_wide<_wfinddata64i32_t>(int,_wfinddata64i32_t * const):loc_53166D/r
                                        ; common_find_next_wide<_wfinddata64i32_t>(int,_wfinddata64i32_t * const)+A9/r
ftCreationTime  FILETIME ?              ; XREF: common_find_next_wide<_wfinddata64i32_t>(int,_wfinddata64i32_t * const)+B1/o
ftLastAccessTime FILETIME ?             ; XREF: common_find_next_wide<_wfinddata64i32_t>(int,_wfinddata64i32_t * const)+C0/o
ftLastWriteTime FILETIME ?              ; XREF: common_find_next_wide<_wfinddata64i32_t>(int,_wfinddata64i32_t * const)+D2/o
nFileSizeHigh   dd ?
nFileSizeLow    dd ?                    ; XREF: common_find_next_wide<_wfinddata64i32_t>(int,_wfinddata64i32_t * const)+E4/r
dwReserved0     dd ?
dwReserved1     dd ?
cFileName       dw 260 dup(?)           ; XREF: common_find_next_wide<_wfinddata64i32_t>(int,_wfinddata64i32_t * const)+ED/o
cAlternateFileName dw 14 dup(?)
_WIN32_FIND_DATAW ends

; ---------------------------------------------------------------------------

FILETIME        struc ; (sizeof=0x8, align=0x4, copyof_179)
                                        ; XREF: ??$common_find_first_wide@U_wfinddata64i32_t@@@@YAHQB_WQAU_wfinddata64i32_t@@@Z/r
                                        ; ??$common_find_first_wide@U_wfinddata64i32_t@@@@YAHQB_WQAU_wfinddata64i32_t@@@Z/r ...
dwLowDateTime   dd ?                    ; XREF: common_stat_handle_file_opened<_stat64i32>(wchar_t const * const,int,void * const,_stat64i32 &)+A1/r
                                        ; common_stat_handle_file_opened<_stat64i32>(wchar_t const * const,int,void * const,_stat64i32 &)+C4/r ...
dwHighDateTime  dd ?                    ; XREF: common_stat_handle_file_opened<_stat64i32>(wchar_t const * const,int,void * const,_stat64i32 &)+9A/r
                                        ; common_stat_handle_file_opened<_stat64i32>(wchar_t const * const,int,void * const,_stat64i32 &)+C1/r ...
FILETIME        ends

; ---------------------------------------------------------------------------

_SYSTEMTIME     struc ; (sizeof=0x10, align=0x2, copyof_180)
                                        ; XREF: ??$convert_file_time_to_time_t@_J@@YA_JABU_FILETIME@@@Z/r
                                        ; ??$convert_file_time_to_time_t@_J@@YA_JABU_FILETIME@@@Z/r ...
wYear           dw ?                    ; XREF: convert_file_time_to_time_t<__int64>(_FILETIME const &)+65/r
wMonth          dw ?                    ; XREF: convert_file_time_to_time_t<__int64>(_FILETIME const &)+60/r
                                        ; convert_large_integer_time_to_time_t<__int64>(_LARGE_INTEGER,__int64)+64/o
wDayOfWeek      dw ?
wDay            dw ?                    ; XREF: convert_file_time_to_time_t<__int64>(_FILETIME const &)+5B/r
                                        ; convert_large_integer_time_to_time_t<__int64>(_LARGE_INTEGER,__int64)+60/o
wHour           dw ?                    ; XREF: convert_file_time_to_time_t<__int64>(_FILETIME const &)+56/r
                                        ; convert_large_integer_time_to_time_t<__int64>(_LARGE_INTEGER,__int64)+5C/o
wMinute         dw ?                    ; XREF: convert_file_time_to_time_t<__int64>(_FILETIME const &)+51/r
                                        ; convert_large_integer_time_to_time_t<__int64>(_LARGE_INTEGER,__int64)+58/o
wSecond         dw ?                    ; XREF: convert_file_time_to_time_t<__int64>(_FILETIME const &)+4A/r
                                        ; convert_large_integer_time_to_time_t<__int64>(_LARGE_INTEGER,__int64)+54/o
wMilliseconds   dw ?
_SYSTEMTIME     ends

; ---------------------------------------------------------------------------

_TIME_ZONE_INFORMATION struc ; (sizeof=0xAC, align=0x4, copyof_181)
                                        ; XREF: .data:TimeZoneInformation/r
Bias            dd ?                    ; XREF: tzset_from_system_nolock(void)+79/r
StandardName    dw 32 dup(?)            ; XREF: tzset_from_system_nolock(void)+DB/o
StandardDate    SYSTEMTIME ?            ; XREF: _isindst_nolock(tm * const)+B2/r
                                        ; _isindst_nolock(tm * const)+BD/r ...
StandardBias    dd ?                    ; XREF: tzset_from_system_nolock(void)+80/r
DaylightName    dw 32 dup(?)            ; XREF: tzset_from_system_nolock(void)+108/o
DaylightDate    SYSTEMTIME ?            ; XREF: _isindst_nolock(tm * const)+52/r
                                        ; _isindst_nolock(tm * const)+5A/r ...
DaylightBias    dd ?                    ; XREF: tzset_from_system_nolock(void)+AD/r
_TIME_ZONE_INFORMATION ends

; ---------------------------------------------------------------------------

SYSTEMTIME      struc ; (sizeof=0x10, align=0x2, copyof_182)
                                        ; XREF: ?store_winword@@YA_NQAU__crt_locale_pointers@@HQBUtm@@QAPA_WQAIQBU__crt_lc_time_data@@@Z/r
                                        ; _TIME_ZONE_INFORMATION/r ...
wYear           dw ?                    ; XREF: store_winword(__crt_locale_pointers * const,int,tm const * const,wchar_t * * const,uint * const,__crt_lc_time_data const * const)+73/w
                                        ; _isindst_nolock(tm * const)+72/r ...
wMonth          dw ?                    ; XREF: store_winword(__crt_locale_pointers * const,int,tm const * const,wchar_t * * const,uint * const,__crt_lc_time_data const * const)+80/w
                                        ; _isindst_nolock(tm * const)+8C/r ...
wDayOfWeek      dw ?                    ; XREF: _isindst_nolock(tm * const)+7B/r
                                        ; _isindst_nolock(tm * const)+DE/r
wDay            dw ?                    ; XREF: store_winword(__crt_locale_pointers * const,int,tm const * const,wchar_t * * const,uint * const,__crt_lc_time_data const * const)+88/w
                                        ; _isindst_nolock(tm * const)+84/r ...
wHour           dw ?                    ; XREF: store_winword(__crt_locale_pointers * const,int,tm const * const,wchar_t * * const,uint * const,__crt_lc_time_data const * const)+90/w
                                        ; _isindst_nolock(tm * const)+6A/r ...
wMinute         dw ?                    ; XREF: store_winword(__crt_locale_pointers * const,int,tm const * const,wchar_t * * const,uint * const,__crt_lc_time_data const * const)+98/w
                                        ; _isindst_nolock(tm * const)+62/r ...
wSecond         dw ?                    ; XREF: store_winword(__crt_locale_pointers * const,int,tm const * const,wchar_t * * const,uint * const,__crt_lc_time_data const * const)+9F/w
                                        ; _isindst_nolock(tm * const)+5A/r ...
wMilliseconds   dw ?                    ; XREF: store_winword(__crt_locale_pointers * const,int,tm const * const,wchar_t * * const,uint * const,__crt_lc_time_data const * const)+A5/w
                                        ; _isindst_nolock(tm * const)+52/r ...
SYSTEMTIME      ends

; ---------------------------------------------------------------------------

_cpinfo         struc ; (sizeof=0x14, align=0x4, copyof_183)
                                        ; XREF: ?setSBUpLow@@YAXPAU__crt_multibyte_data@@@Z/r
                                        ; __setmbcp_nolock/r ...
MaxCharSize     dd ?                    ; XREF: ___acrt_locale_initialize_ctype+115/r
                                        ; __setmbcp_nolock+B3/r ...
DefaultChar     db 2 dup(?)
LeadByte        db 12 dup(?)            ; XREF: ___acrt_locale_initialize_ctype+195/r
                                        ; ___acrt_locale_initialize_ctype+19A/o ...
                db ? ; undefined
                db ? ; undefined
_cpinfo         ends

; ---------------------------------------------------------------------------

_Ctypevec       struc ; (sizeof=0x10, align=0x4, copyof_184)
                                        ; XREF: sub_475500/r
_Page           dd ?
_Table          dd ?                    ; offset
_Delfl          dd ?
_LocaleName     dd ?                    ; offset
_Ctypevec       ends

; ---------------------------------------------------------------------------

_Cvtvec         struc ; (sizeof=0x2C, align=0x4, copyof_185)
                                        ; XREF: sub_47F980/r
_Page           dd ?
_Mbcurmax       dd ?
_Isclocale      dd ?
_Isleadbyte     db 32 dup(?)
_Cvtvec         ends

; ---------------------------------------------------------------------------

_SLIST_HEADER   union ; (sizeof=0x8, align=0x8, copyof_186)
                                        ; XREF: .data:ListHead/r
Alignment       dq ?
anonymous_0     _SLIST_HEADER::$04C3B4B3818F1694974352AE64BF5082 ?
_SLIST_HEADER   ends

; ---------------------------------------------------------------------------

_SLIST_HEADER::$04C3B4B3818F1694974352AE64BF5082 struc ; (sizeof=0x8, align=0x4, copyof_187)
                                        ; XREF: _SLIST_HEADER/r
Next            SLIST_ENTRY ?
Depth           dw ?
CpuId           dw ?
_SLIST_HEADER::$04C3B4B3818F1694974352AE64BF5082 ends

; ---------------------------------------------------------------------------

SLIST_ENTRY     struc ; (sizeof=0x4, align=0x4, copyof_188)
                                        ; XREF: _SLIST_HEADER::$04C3B4B3818F1694974352AE64BF5082/r
Next            dd ?                    ; offset
SLIST_ENTRY     ends

; ---------------------------------------------------------------------------

_ThrowInfo      struc ; (sizeof=0x10, align=0x4, copyof_190)
                                        ; XREF: .rdata:__TI2?AVbad_alloc@std@@/r
                                        ; .rdata:__TI3?AVlength_error@std@@/r ...
attributes      dd ?
pmfnUnwind      dd ?                    ; offset
pForwardCompat  dd ?                    ; offset
pCatchableTypeArray dd ?                ; offset
_ThrowInfo      ends

; ---------------------------------------------------------------------------

__crt_locale_pointers struc ; (sizeof=0x8, align=0x4, copyof_200)
                                        ; XREF: sub_525AF8/r
                                        ; ??$parse_integer@KV?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YAKQAU__crt_locale_pointers@@V?$c_string_character_source@D@0@H_N@Z/r ...
locinfo         dd ?                    ; XREF: common_tox_l<&internal_islower_l(int,__crt_locale_pointers * const),&internal_map_upper(int,__crt_locale_pointers * const)>(int,ulong,__crt_locale_pointers * const)+33/r
                                        ; common_tox_l<&internal_islower_l(int,__crt_locale_pointers * const),&internal_map_upper(int,__crt_locale_pointers * const)>(int,ulong,__crt_locale_pointers * const)+73/r ... ; offset
mbcinfo         dd ?                    ; XREF: _setlocale+38/w
                                        ; ___acrt_locale_initialize_ctype+32/w ... ; offset
__crt_locale_pointers ends

; ---------------------------------------------------------------------------

FuncInfo        struc ; (sizeof=0x24, mappedto_201)
                                        ; XREF: .rdata:stru_59BDF0/r
                                        ; .rdata:stru_59BE24/r ...
magicNumber     dd ?                    ; base 16
maxState        dd ?                    ; base 10
pUnwindMap      dd ?                    ; offset
nTryBlocks      dd ?                    ; base 10
pTryBlockMap    dd ?                    ; offset
nIPMapEntries   dd ?                    ; base 10
pIPtoStateMap   dd ?                    ; offset
pESTypeList     dd ?                    ; offset
EHFlags         dd ?                    ; base 16
FuncInfo        ends

; ---------------------------------------------------------------------------

UnwindMapEntry  struc ; (sizeof=0x8, mappedto_202)
                                        ; XREF: .rdata:stru_59BE14/r
                                        ; .rdata:0059BE1C/r ...
toState         dd ?                    ; base 10
action          dd ?                    ; offset
UnwindMapEntry  ends

; ---------------------------------------------------------------------------

TryBlockMapEntry struc ; (sizeof=0x14, mappedto_203)
                                        ; XREF: .rdata:stru_59BEF4/r
                                        ; .rdata:0059BF08/r ...
tryLow          dd ?                    ; base 10
tryHigh         dd ?                    ; base 10
catchHigh       dd ?                    ; base 10
nCatches        dd ?                    ; base 10
pHandlerArray   dd ?                    ; offset
TryBlockMapEntry ends

; ---------------------------------------------------------------------------

HandlerType     struc ; (sizeof=0x10, mappedto_204)
                                        ; XREF: .rdata:stru_59BF1C/r
                                        ; .rdata:stru_59BF2C/r ...
adjectives      dd ?                    ; base 16
pType           dd ?                    ; offset
dispCatchObj    dd ?                    ; base 10
addressOfHandler dd ?                   ; offset
HandlerType     ends

; ---------------------------------------------------------------------------

tm              struc ; (sizeof=0x24, align=0x4, copyof_205)
                                        ; XREF: __ctime64/r
                                        ; ??$common_loctotime_t@_J@@YA_JHHHHHHH@Z/r
tm_sec          dd ?                    ; XREF: common_loctotime_t<__int64>(int,int,int,int,int,int,int)+18D/w
tm_min          dd ?                    ; XREF: common_loctotime_t<__int64>(int,int,int,int,int,int,int)+18A/w
tm_hour         dd ?                    ; XREF: common_loctotime_t<__int64>(int,int,int,int,int,int,int)+187/w
tm_mday         dd ?
tm_mon          dd ?                    ; XREF: common_loctotime_t<__int64>(int,int,int,int,int,int,int)+17B/w
tm_year         dd ?                    ; XREF: common_loctotime_t<__int64>(int,int,int,int,int,int,int)+184/w
tm_wday         dd ?
tm_yday         dd ?                    ; XREF: common_loctotime_t<__int64>(int,int,int,int,int,int,int)+181/w
tm_isdst        dd ?
tm              ends

; ---------------------------------------------------------------------------

_onexit_table_t struc ; (sizeof=0xC, align=0x4, copyof_207)
                                        ; XREF: .data:stru_5A77C8/r
                                        ; .data:stru_5A77D4/r ...
_first          dd ?                    ; XREF: __onexit+A/r ; offset
_last           dd ?                    ; offset
_end            dd ?                    ; offset
_onexit_table_t ends

; ---------------------------------------------------------------------------

fenv_t          struc ; (sizeof=0x8, align=0x4, copyof_209)
                                        ; XREF: ___acrt_fltout/r
                                        ; _fesetenv/r ...
_Fe_ctl         dd ?                    ; XREF: _fesetenv+7/w
                                        ; _fesetenv+30/r ...
_Fe_stat        dd ?                    ; XREF: _fesetenv+B/w
                                        ; _fesetenv+38/r ...
fenv_t          ends

; ---------------------------------------------------------------------------

_stat64i32      struc ; (sizeof=0x30, align=0x8, copyof_210)
                                        ; XREF: sub_5045E0/r
                                        ; sub_5046B0/r
st_dev          dd ?
st_ino          dw ?
st_mode         dw ?                    ; XREF: sub_5045E0:loc_50468D/r
st_nlink        dw ?
st_uid          dw ?
st_gid          dw ?
                db ? ; undefined
                db ? ; undefined
st_rdev         dd ?
st_size         dd ?                    ; XREF: sub_5045E0+BA/r
st_atime        dq ?
st_mtime        dq ?                    ; XREF: sub_5046B0:loc_50473C/r
st_ctime        dq ?
_stat64i32      ends

; ---------------------------------------------------------------------------

_MINIDUMP_EXCEPTION_INFORMATION struc ; (sizeof=0xC, align=0x4, copyof_215)
                                        ; XREF: TopLevelExceptionFilter/r
ThreadId        dd ?                    ; XREF: TopLevelExceptionFilter+4B8/w
ExceptionPointers dd ?                  ; XREF: TopLevelExceptionFilter+4BE/w ; offset
ClientPointers  dd ?                    ; XREF: TopLevelExceptionFilter+4C1/w
_MINIDUMP_EXCEPTION_INFORMATION ends

; ---------------------------------------------------------------------------

TypeDescriptor  struc ; (sizeof=0x8, mappedto_198, variable size)
                                        ; XREF: .data:std::string `RTTI Type Descriptor'/r
                                        ; .data:Exception `RTTI Type Descriptor'/r
pVFTable        dd ?                    ; offset
spare           dd ?                    ; offset
name            db 0 dup(?)             ; string(C)
TypeDescriptor  ends

; ---------------------------------------------------------------------------

_LARGE_INTEGER  union ; (sizeof=0x8, align=0x8, copyof_152)
                                        ; XREF: ??$common_stat_handle_file_opened@U_stat64i32@@@@YA_NQB_WHQAXAAU_stat64i32@@@Z/r
anonymous_0     _LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
u               _LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
QuadPart        dq ?
_LARGE_INTEGER  ends

; ---------------------------------------------------------------------------

EHRegistrationNode struc ; (sizeof=0xC, align=0x4, copyof_227)
pNext           dd ?                    ; offset
frameHandler    dd ?                    ; offset
state           dd ?
EHRegistrationNode ends

; ---------------------------------------------------------------------------

__m128i         union ; (sizeof=0x10, align=0x10, copyof_234)
                                        ; XREF: sub_450800/r
                                        ; sub_454D70/r ...
m128i_i8        db 16 dup(?)
m128i_i16       dw 8 dup(?)
m128i_i32       dd 4 dup(?)
m128i_i64       dq 2 dup(?)
m128i_u8        db 16 dup(?)
m128i_u16       dw 8 dup(?)
m128i_u32       dd 4 dup(?)
m128i_u64       dq 2 dup(?)
__m128i         ends

; ---------------------------------------------------------------------------

; enum __TI_flags, copyof_3, bitfield
TI_IsConst       = 1
TI_IsVolatile    = 2
TI_IsUnaligned   = 4
TI_IsPure        = 8
TI_IsWinRT       = 10h

; ---------------------------------------------------------------------------

; enum __CT_flags, copyof_4, bitfield
CT_IsSimpleType  = 1
CT_ByReferenceOnly  = 2
CT_HasVirtualBase  = 4
CT_IsWinRTHandle  = 8
CT_IsStdBadAlloc  = 10h                 ; XREF: .rdata:__CT??_R0?AVbad_alloc@std@@@8_51CF95/s

; ---------------------------------------------------------------------------

; enum _crt_argv_mode, copyof_206
_crt_argv_no_arguments  = 0
_crt_argv_unexpanded_arguments  = 1
_crt_argv_expanded_arguments  = 2

; ---------------------------------------------------------------------------

; enum _crt_exit_cleanup_mode, copyof_230
_crt_exit_full_cleanup  = 0
_crt_exit_quick_cleanup  = 1
_crt_exit_no_cleanup  = 2

; ---------------------------------------------------------------------------

; enum _crt_exit_return_mode, copyof_231
_crt_exit_terminate_process  = 0
_crt_exit_return_to_caller  = 1

