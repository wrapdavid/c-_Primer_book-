; Listing generated by Microsoft (R) Optimizing Compiler Version 19.23.28106.4 

include listing.inc

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

msvcjmc	SEGMENT
__0A074437_vcruntime_new@h DB 01H
__09340588_corecrt_math@h DB 01H
__24E9E95F_stdlib@h DB 01H
__86D65F0C_cstdlib DB 01H
__6A0B36D1_cmath DB 01H
__F66CEB67_corecrt_stdio_config@h DB 01H
__101834BA_corecrt_wstdio@h DB 01H
__AD6A91B7_stdio@h DB 01H
__FFC6471F_type_traits DB 01H
__B0C4CEA9_malloc@h DB 01H
__69245D52_vcruntime_exception@h DB 01H
__536DB091_exception DB 01H
__367CC694_corecrt_memcpy_s@h DB 01H
__35D7DDB3_corecrt_memory@h DB 01H
__DC9673E3_corecrt_wstring@h DB 01H
__A29A7DFB_string@h DB 01H
__5467428D_corecrt_wconio@h DB 01H
__4442441F_corecrt_wio@h DB 01H
__45F4AF76_corecrt_wtime@h DB 01H
__186FF47F_stat@h DB 01H
__534C724A_wchar@h DB 01H
__843B0F21_limits DB 01H
__86E03ACD_xutility DB 01H
__DB4EB944_xmemory DB 01H
__AF9D3FD8_xstring DB 01H
__DA238ACC_stdexcept DB 01H
__65AE1ACD_xcall_once@h DB 01H
__DAF308ED_system_error DB 01H
__36900320_vcruntime_typeinfo@h DB 01H
__F63FC9D4_typeinfo DB 01H
__389503AF_memory DB 01H
__14D054A0_xfacet DB 01H
__7242C389_ctype@h DB 01H
__E9B62A1C_xlocinfo DB 01H
__70A34BE9_xlocale DB 01H
__D0535D0F_xiosbase DB 01H
__EE242DFE_xlocnum DB 01H
__D17CECDD_ios DB 01H
__352845A9_Header@h DB 01H
__ACED9BD4_Main46@cpp DB 01H
__0063A417_istream DB 01H
__63B3912D_ostream DB 01H
__D8833270_streambuf DB 01H
__48D2DAA7_iosfwd DB 01H
__B1DBDA87_utility DB 01H
__46C44D95_xstddef DB 01H
__59613C47_xatomic@h DB 01H
msvcjmc	ENDS
PUBLIC	?__empty_global_delete@@YAXPEAX@Z		; __empty_global_delete
PUBLIC	?__empty_global_delete@@YAXPEAX_K@Z		; __empty_global_delete
PUBLIC	main
PUBLIC	__JustMyCode_Default
EXTRN	__imp_??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QEAAAEAV01@_K@Z:PROC
EXTRN	__imp_?get@?$basic_istream@DU?$char_traits@D@std@@@std@@QEAAHXZ:PROC
EXTRN	_RTC_CheckStackVars:PROC
EXTRN	_RTC_InitBase:PROC
EXTRN	_RTC_Shutdown:PROC
EXTRN	__CheckForDebuggerJustMyCode:PROC
EXTRN	__GSHandlerCheck:PROC
EXTRN	__security_check_cookie:PROC
EXTRN	__imp_?cin@std@@3V?$basic_istream@DU?$char_traits@D@std@@@1@A:BYTE
EXTRN	__imp_?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A:BYTE
EXTRN	__security_cookie:QWORD
;	COMDAT pdata
pdata	SEGMENT
$pdata$?__empty_global_delete@@YAXPEAX@Z DD imagerel $LN3
	DD	imagerel $LN3+64
	DD	imagerel $unwind$?__empty_global_delete@@YAXPEAX@Z
pdata	ENDS
;	COMDAT pdata
pdata	SEGMENT
$pdata$?__empty_global_delete@@YAXPEAX_K@Z DD imagerel $LN3
	DD	imagerel $LN3+69
	DD	imagerel $unwind$?__empty_global_delete@@YAXPEAX_K@Z
pdata	ENDS
;	COMDAT pdata
pdata	SEGMENT
$pdata$main DD	imagerel $LN3
	DD	imagerel $LN3+168
	DD	imagerel $unwind$main
pdata	ENDS
;	COMDAT rtc$TMZ
rtc$TMZ	SEGMENT
_RTC_Shutdown.rtc$TMZ DQ FLAT:_RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
_RTC_InitBase.rtc$IMZ DQ FLAT:_RTC_InitBase
rtc$IMZ	ENDS
;	COMDAT xdata
xdata	SEGMENT
$unwind$main DD	025052f19H
	DD	010a230fH
	DD	07003002dH
	DD	05002H
	DD	imagerel __GSHandlerCheck
	DD	0158H
xdata	ENDS
;	COMDAT CONST
CONST	SEGMENT
main$rtcName$0 DB 069H
	DB	00H
	ORG $+2
main$rtcName$1 DB 070H
	DB	074H
	DB	072H
	DB	031H
	DB	00H
	ORG $+3
main$rtcName$2 DB 070H
	DB	074H
	DB	072H
	DB	032H
	DB	00H
	ORG $+7
main$rtcFrameData DD 03H
	DD	00H
	DQ	FLAT:main$rtcVarDesc
	ORG $+8
main$rtcVarDesc DD 068H
	DD	08H
	DQ	FLAT:main$rtcName$2
	DD	048H
	DD	08H
	DQ	FLAT:main$rtcName$1
	DD	024H
	DD	04H
	DQ	FLAT:main$rtcName$0
CONST	ENDS
;	COMDAT xdata
xdata	SEGMENT
$unwind$?__empty_global_delete@@YAXPEAX_K@Z DD 025052f01H
	DD	01132318H
	DD	0700c001dH
	DD	0500bH
xdata	ENDS
;	COMDAT xdata
xdata	SEGMENT
$unwind$?__empty_global_delete@@YAXPEAX@Z DD 025052a01H
	DD	010e2313H
	DD	07007001dH
	DD	05006H
xdata	ENDS
; Function compile flags: /Odt
;	COMDAT __JustMyCode_Default
_TEXT	SEGMENT
__JustMyCode_Default PROC				; COMDAT
	ret	0
__JustMyCode_Default ENDP
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT main
_TEXT	SEGMENT
i$ = 4
ptr1$ = 40
ptr2$ = 72
ptr3$ = 104
__$ArrayPad$ = 312
main	PROC						; COMDAT
; File C:\Users\R2\Desktop\yoda\learning_myself\c_c++\Visual_c++\c++_Primer_book\src\Main46.cpp
; Line 4
$LN3:
	push	rbp
	push	rdi
	sub	rsp, 360				; 00000168H
	lea	rbp, QWORD PTR [rsp+32]
	mov	rdi, rsp
	mov	ecx, 90					; 0000005aH
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	rax, QWORD PTR __security_cookie
	xor	rax, rbp
	mov	QWORD PTR __$ArrayPad$[rbp], rax
; File C:\Users\R2\Desktop\yoda\learning_myself\c_c++\Visual_c++\c++_Primer_book\src\Header.h
	lea	rcx, OFFSET FLAT:__352845A9_Header@h
	call	__CheckForDebuggerJustMyCode
; File C:\Users\R2\Desktop\yoda\learning_myself\c_c++\Visual_c++\c++_Primer_book\src\Main46.cpp
; Line 5
	mov	DWORD PTR i$[rbp], 1
; Line 6
	lea	rax, QWORD PTR i$[rbp]
	mov	QWORD PTR ptr1$[rbp], rax
; Line 7
	lea	rax, QWORD PTR ptr1$[rbp]
	mov	QWORD PTR ptr2$[rbp], rax
; Line 8
	lea	rax, QWORD PTR ptr2$[rbp]
	mov	QWORD PTR ptr3$[rbp], rax
; Line 10
	mov	edx, 8
	mov	rcx, QWORD PTR __imp_?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A
	call	QWORD PTR __imp_??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QEAAAEAV01@_K@Z
; Line 11
	mov	rcx, QWORD PTR __imp_?cin@std@@3V?$basic_istream@DU?$char_traits@D@std@@@1@A
	call	QWORD PTR __imp_?get@?$basic_istream@DU?$char_traits@D@std@@@std@@QEAAHXZ
; File C:\Users\R2\Desktop\yoda\learning_myself\c_c++\Visual_c++\c++_Primer_book\src\Header.h
; Line 2
	xor	eax, eax
	mov	edi, eax
	lea	rcx, QWORD PTR [rbp-32]
	lea	rdx, OFFSET FLAT:main$rtcFrameData
	call	_RTC_CheckStackVars
	mov	eax, edi
	mov	rcx, QWORD PTR __$ArrayPad$[rbp]
	xor	rcx, rbp
	call	__security_check_cookie
	lea	rsp, QWORD PTR [rbp+328]
	pop	rdi
	pop	rbp
	ret	0
main	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?__empty_global_delete@@YAXPEAX_K@Z
_TEXT	SEGMENT
__formal$ = 224
__formal$ = 232
?__empty_global_delete@@YAXPEAX_K@Z PROC		; __empty_global_delete, COMDAT
; File C:\Users\R2\Desktop\yoda\learning_myself\c_c++\Visual_c++\c++_Primer_book\src\Main46.cpp
; Line 15
$LN3:
	mov	QWORD PTR [rsp+16], rdx
	mov	QWORD PTR [rsp+8], rcx
	push	rbp
	push	rdi
	sub	rsp, 232				; 000000e8H
	lea	rbp, QWORD PTR [rsp+32]
	mov	rdi, rsp
	mov	ecx, 58					; 0000003aH
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	rcx, QWORD PTR [rsp+264]
	lea	rcx, OFFSET FLAT:__ACED9BD4_Main46@cpp
	call	__CheckForDebuggerJustMyCode
	lea	rsp, QWORD PTR [rbp+200]
	pop	rdi
	pop	rbp
	ret	0
?__empty_global_delete@@YAXPEAX_K@Z ENDP		; __empty_global_delete
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?__empty_global_delete@@YAXPEAX@Z
_TEXT	SEGMENT
__formal$ = 224
?__empty_global_delete@@YAXPEAX@Z PROC			; __empty_global_delete, COMDAT
; File C:\Users\R2\Desktop\yoda\learning_myself\c_c++\Visual_c++\c++_Primer_book\src\Main46.cpp
; Line 15
$LN3:
	mov	QWORD PTR [rsp+8], rcx
	push	rbp
	push	rdi
	sub	rsp, 232				; 000000e8H
	lea	rbp, QWORD PTR [rsp+32]
	mov	rdi, rsp
	mov	ecx, 58					; 0000003aH
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	rcx, QWORD PTR [rsp+264]
	lea	rcx, OFFSET FLAT:__ACED9BD4_Main46@cpp
	call	__CheckForDebuggerJustMyCode
	lea	rsp, QWORD PTR [rbp+200]
	pop	rdi
	pop	rbp
	ret	0
?__empty_global_delete@@YAXPEAX@Z ENDP			; __empty_global_delete
_TEXT	ENDS
END
