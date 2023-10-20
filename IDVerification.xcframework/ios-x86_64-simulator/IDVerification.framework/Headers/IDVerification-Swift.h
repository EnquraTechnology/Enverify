#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.8 (swiftlang-5.8.0.124.2 clang-1403.0.22.11.100)
#ifndef IDVERIFICATION_SWIFT_H
#define IDVERIFICATION_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="IDVerification",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)


SWIFT_CLASS("_TtC14IDVerification12CustomerCard")
@interface CustomerCard : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) CustomerCard * _Nonnull shared;)
+ (CustomerCard * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(CustomerCard * _Nonnull)value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSString;
@class UIImage;

SWIFT_CLASS("_TtC14IDVerification12CustomerChip")
@interface CustomerChip : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) CustomerChip * _Nonnull shared;)
+ (CustomerChip * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(CustomerChip * _Nonnull)value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (NSString * _Nonnull)getID SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getIdentityNo SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getIdentityType SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getDocumentNo SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getName SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getSurname SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getGender SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getBirthday SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getNationality SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getExpiryDate SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nonnull)getFace SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)isChipAuthSucceeded SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)isPassiveAuthSucceeded SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)isActiveAuthSucceed SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)isDataValidated SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getPublicKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getChallenge SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getResponse SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getAuthError SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getNameOfHolder SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getSurnameOfHolder SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getPlaceOfBirth SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getFullDateOfBirth SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC14IDVerification12CustomerFace")
@interface CustomerFace : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) CustomerFace * _Nonnull shared;)
+ (CustomerFace * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(CustomerFace * _Nonnull)value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (NSInteger)getChipConfidence SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getIdConfidence SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getEyeConfidence SWIFT_WARN_UNUSED_RESULT;
- (float)getChipDistance SWIFT_WARN_UNUSED_RESULT;
- (float)getIdDistance SWIFT_WARN_UNUSED_RESULT;
- (float)getEyeDistance SWIFT_WARN_UNUSED_RESULT;
- (float)getSmilingConfidence SWIFT_WARN_UNUSED_RESULT;
- (float)getRightEyeCloseConfidence SWIFT_WARN_UNUSED_RESULT;
- (float)getLeftEyeCloseConfidence SWIFT_WARN_UNUSED_RESULT;
- (float)getRightEyeOpenConfidence SWIFT_WARN_UNUSED_RESULT;
- (float)getLeftEyeOpenConfidence SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getId SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nonnull)getFace SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nonnull)getEyeFace SWIFT_WARN_UNUSED_RESULT;
- (float)getSelfiAntispoofing SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isHashSuccess SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC14IDVerification19CustomerIdentityDoc")
@interface CustomerIdentityDoc : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) CustomerIdentityDoc * _Nonnull shared;)
+ (CustomerIdentityDoc * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(CustomerIdentityDoc * _Nonnull)value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (NSString * _Nonnull)getIdType SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getIdIssuer SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getIdentityNo SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getIdentityType SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getDocumentNo SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getName SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getSurname SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getGender SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getBirthday SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getNationality SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getExpiryDate SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nonnull)getFace SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nonnull)getFrontpage SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nonnull)getBackpage SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nonnull)getHolopage SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getCountry SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getOptionalData1 SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getOptionalData2 SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getBarcodeValue SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getCheckDigitDocNo SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getCheckDigitBirthDay SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getCheckDigitExpiryDate SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getCheckDigitID SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getFrontBirthDay SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getFrontDocumentNo SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getFrontExpiryDate SWIFT_WARN_UNUSED_RESULT;
- (void)setFaceWithFaceImage:(UIImage * _Nonnull)faceImage;
@end



@class UIViewController;
@class UINavigationController;
@class UIButton;
@class UIView;
@class AVAsset;

SWIFT_CLASS("_TtC14IDVerification8IDVerify")
@interface IDVerify : NSObject
+ (BOOL)idVerifyStart:(id _Nonnull)sender SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)idVerifyOCRStart:(id _Nonnull)sender SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)idVerifyNFCStart:(id _Nonnull)sender SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)checkPermissions SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)videoCallStart:(id _Nonnull)sender SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)selfServiceStart:(id _Nonnull)sender SWIFT_WARN_UNUSED_RESULT;
+ (void)idFakeCheckStart;
+ (void)idFrontStart;
+ (void)idBackStart;
+ (void)idViewStartWithVc:(UIViewController * _Nonnull)vc;
+ (void)idDocStore;
+ (NSInteger)nfcStart SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=13.0);
+ (void)nfcViewStartWithVc:(UIViewController * _Nonnull)vc;
+ (void)nfcStore;
+ (void)nfcLoadWithData:(NSDictionary<NSString *, NSString *> * _Nonnull)data;
+ (void)faceDetectStart;
+ (void)livenessDetectStart;
+ (void)idTypeCheckSet;
+ (void)idTypeBackCheckSet;
+ (void)faceDetectSet;
+ (void)faceBackDetectSet;
+ (void)nfcVerifySet SWIFT_AVAILABILITY(ios,introduced=13.0);
+ (void)chatSet;
+ (void)smileDetectStart;
+ (void)eyeCloseStart;
+ (void)eyeCloseIntervalStart;
+ (void)eyeOpenIntervalStart;
+ (void)faceUpStart;
+ (void)faceLeftStart;
+ (void)faceRightStart;
+ (void)faceCompleteStart;
+ (void)faceViewStartWithVc:(UIViewController * _Nonnull)vc;
+ (void)faceStore;
+ (void)noConnectionAction;
+ (void)onRetryFace;
+ (void)pauseForNFC SWIFT_AVAILABILITY(ios,introduced=13.0);
+ (void)pauseForFace;
+ (void)videoCallRestart;
+ (void)selfServiceRestart;
+ (void)onConfirmFace;
+ (void)onRetryNFC;
+ (void)onConfirmNFC;
+ (void)onConfirmDocWithoutPop;
+ (void)onConfirmNFCWithoutPop;
+ (void)onConfirmFaceWithoutPop;
+ (void)idTypeCheckBackStart;
+ (void)idTypeCheckFrontStart;
+ (void)onRetryDoc;
+ (void)onConfirmDoc;
+ (BOOL)idvSettingsWithDomainName:(NSString * _Nullable)domainName certificateNames:(NSArray<NSString *> * _Nonnull)certificateNames aiUsername:(NSString * _Nullable)aiUsername aiPassword:(NSString * _Nullable)aiPassword signalingServer:(NSString * _Nullable)signalingServer stunServer:(NSString * _Nullable)stunServer turnServer:(NSString * _Nullable)turnServer turnUsername:(NSString * _Nullable)turnUsername turnPassword:(NSString * _Nullable)turnPassword SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)setMessageWithMessage:(NSString * _Nonnull)message index:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
+ (void)stopSSStartVC:(id _Nonnull)sender;
+ (void)setNavigationControllerWithNavigator:(UINavigationController * _Nonnull)navigator;
+ (UINavigationController * _Nullable)getNavigationController SWIFT_WARN_UNUSED_RESULT;
+ (void)setOrientationLockWithOrientation:(UIInterfaceOrientationMask)orientation;
+ (BOOL)setNFCBACDataWithDocNo:(NSString * _Nonnull)docNo birthday:(NSString * _Nonnull)birthday expiryDate:(NSString * _Nonnull)expiryDate SWIFT_WARN_UNUSED_RESULT;
+ (void)handleFail;
+ (void)handleCallFail;
+ (void)idVerifyRestart;
+ (void)startVideoChat;
+ (void)setSpeakerWithSoundStateOn:(BOOL)soundStateOn;
+ (void)setSSStartButtonsWithButtonState:(BOOL)buttonState;
+ (void)setVCStartButtonsWithButtonState:(BOOL)buttonState;
+ (void)setICERelayWithIceRelayState:(BOOL)iceRelayState;
+ (void)setICEHostWithIceHostState:(BOOL)iceHostState;
+ (void)setMediaServerWithMediaServerState:(BOOL)mediaServerState;
+ (BOOL)isMediaServerSet SWIFT_WARN_UNUSED_RESULT;
+ (void)setAgentFullScreenWithAgentFullScreenState:(BOOL)agentFullScreenState;
+ (void)setHashCheckWithHashCheck:(BOOL)hashCheck;
+ (void)onStartSelfService;
+ (void)onExitSelfService;
+ (void)onRetrySelfService;
+ (void)onStartCall;
+ (void)onExitCall;
+ (void)onExitCallWithoutPop;
+ (void)onHangupCall;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIButton * _Nonnull iconStartButton;)
+ (UIButton * _Nonnull)iconStartButton SWIFT_WARN_UNUSED_RESULT;
+ (void)setIconStartButton:(UIButton * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIButton * _Nonnull iconExitButton;)
+ (UIButton * _Nonnull)iconExitButton SWIFT_WARN_UNUSED_RESULT;
+ (void)setIconExitButton:(UIButton * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIButton * _Nonnull iconRetryButton;)
+ (UIButton * _Nonnull)iconRetryButton SWIFT_WARN_UNUSED_RESULT;
+ (void)setIconRetryButton:(UIButton * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIButton * _Nonnull iconExitRetryButton;)
+ (UIButton * _Nonnull)iconExitRetryButton SWIFT_WARN_UNUSED_RESULT;
+ (void)setIconExitRetryButton:(UIButton * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIButton * _Nonnull iconHangupRetryButton;)
+ (UIButton * _Nonnull)iconHangupRetryButton SWIFT_WARN_UNUSED_RESULT;
+ (void)setIconHangupRetryButton:(UIButton * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIButton * _Nonnull iconHangupChatButton;)
+ (UIButton * _Nonnull)iconHangupChatButton SWIFT_WARN_UNUSED_RESULT;
+ (void)setIconHangupChatButton:(UIButton * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIButton * _Nonnull iconCallButton;)
+ (UIButton * _Nonnull)iconCallButton SWIFT_WARN_UNUSED_RESULT;
+ (void)setIconCallButton:(UIButton * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIButton * _Nonnull iconHangupButton;)
+ (UIButton * _Nonnull)iconHangupButton SWIFT_WARN_UNUSED_RESULT;
+ (void)setIconHangupButton:(UIButton * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIButton * _Nonnull iconRotateButton;)
+ (UIButton * _Nonnull)iconRotateButton SWIFT_WARN_UNUSED_RESULT;
+ (void)setIconRotateButton:(UIButton * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIButton * _Nonnull iconChatRotateButton;)
+ (UIButton * _Nonnull)iconChatRotateButton SWIFT_WARN_UNUSED_RESULT;
+ (void)setIconChatRotateButton:(UIButton * _Nonnull)value;
+ (void)setLivenessCalibrationWithValue:(NSInteger)value;
+ (void)setSmilingCalibrationWithValue:(float)value;
+ (void)setEyeCloseCalibrationWithValue:(float)value;
+ (void)setEyeCloseToleranceWithValue:(NSInteger)value;
+ (void)setCallWaitTimeoutWithValue:(NSInteger)value;
+ (void)setIceCheckingTimeoutWithValue:(NSInteger)value;
+ (void)setFaceAngleCalibrationWithValue:(NSInteger)value;
+ (void)setEyeCloseMaxTimeWithValue:(NSInteger)value;
+ (void)setOCRModeWithValue:(NSInteger)value;
+ (void)setOCRCheckSizeWithValue:(NSInteger)value;
+ (NSString * _Nonnull)getNFCErrorCode SWIFT_WARN_UNUSED_RESULT;
+ (void)createCallRecord;
+ (void)updateCallFinished;
+ (void)setViewerWidthRatioWithLocal:(float)local remote:(float)remote;
+ (void)setViewerLocationRatioWithX:(float)x y:(float)y;
+ (UIView * _Nonnull)getLocalView SWIFT_WARN_UNUSED_RESULT;
+ (UIView * _Nonnull)getRemoteView SWIFT_WARN_UNUSED_RESULT;
+ (void)startSpeechWithSpeechFile:(NSString * _Nonnull)speechFile;
+ (void)startAVRecording SWIFT_AVAILABILITY(ios,introduced=11.0);
+ (void)stopAVRecording SWIFT_AVAILABILITY(ios,introduced=11.0);
+ (void)setVideoBitrateWithRate:(NSInteger)rate;
+ (NSString * _Nullable)getScreenRecordFilePath SWIFT_WARN_UNUSED_RESULT;
+ (void)appendVideoFilesWithArrayVideos:(NSArray<AVAsset *> * _Nonnull)arrayVideos;
+ (void)idCardDetectSet;
+ (void)onRetryCardDetect;
+ (void)toggleFlashWithState:(BOOL)state;
+ (void)startCardFrontDetect;
+ (void)startCardHoloDetect;
+ (void)startCardBackDetect;
+ (void)startLuminosityAnalyzerWithCompletion:(void (^ _Nonnull)(NSString * _Nonnull))completion;
+ (void)uploadFaceData;
+ (void)setBarcodeReaderWithReadBarcode:(BOOL)readBarcode;
+ (void)setOCRFrontReaderWithOcrFrontRead:(BOOL)ocrFrontRead;
+ (void)setTCIDTypeInternational;
+ (void)setTCIDTypeNational;
+ (void)setFrameRateFrontCameraWithFrameRate:(double)frameRate;
+ (void)setFrameRateBackCameraWithFrameRate:(double)frameRate;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_PROTOCOL("_TtP14IDVerification16IDVerifyDelegate_")
@protocol IDVerifyDelegate
- (void)idVerifyReady;
- (void)idSelfVerifyReady;
- (void)callWait;
- (void)callStart;
- (void)idTypeCheck;
- (void)idTypeBackCheck;
- (void)idTypeCheckCompleted;
- (void)idFakeCheck;
- (void)idFakeCheckCompleted;
- (void)idFront;
- (void)idFrontCompleted;
- (void)idBack;
- (void)idBackCompleted;
- (void)idDocCompleted;
- (void)nfcVerify;
- (void)nfcVerifyCompleted;
- (void)nfcCompleted;
- (void)faceDetect;
- (void)faceDetectCompleted;
- (void)smileDetect;
- (void)smileDetectCompleted;
- (void)eyeClose;
- (void)eyeCloseDetected;
- (void)faceCompleted;
- (void)hangupLocal;
- (void)hangupRemote;
- (void)forceHangup;
- (void)idFakeDetected;
- (void)idDocStoreCompleted;
- (void)nfcStoreCompleted;
- (void)faceStoreCompleted;
- (void)idVerifyExited;
- (void)failure;
- (void)timeoutFailure;
- (void)idTextRecognitionTimeout;
- (void)idCheckFailure;
- (void)connectionFailureWithFailureMsg:(NSString * _Nonnull)failureMsg;
- (void)nfcFailure;
- (void)faceLivenessCheckFailure;
- (void)idRetry;
- (void)nfcRetry;
- (void)faceRetry;
- (void)hostConnected;
- (void)resolutionChanged;
- (void)callConnectionFailure;
- (void)agentRequestWithEventData:(NSString * _Nonnull)eventData;
- (void)faceUp;
- (void)faceUpDetected;
- (void)faceLeft;
- (void)faceLeftDetected;
- (void)faceRight;
- (void)faceRightDetected;
- (void)eyeCloseInterval;
- (void)eyeCloseIntervalDetected;
- (void)eyeOpenInterval;
- (void)eyeOpenIntervalDetected;
- (void)screenRecorderOnStart;
- (void)screenRecorderOnComplete;
- (void)screenRecorderOnErrorWithEventData:(NSString * _Nonnull)eventData;
- (void)screenRecorderOnAppend;
- (void)cardFrontDetectStarted;
- (void)cardFrontDetected;
- (void)cardBackDetectStarted;
- (void)cardBackDetected;
- (void)cardHoloDetectStarted;
- (void)cardHoloDetected;
- (void)certificationFailureWithFailureMsg:(NSString * _Nonnull)failureMsg;
@end


SWIFT_PROTOCOL("_TtP14IDVerification19IDVerifyNFCDelegate_")
@protocol IDVerifyNFCDelegate
- (void)idSelfVerifyReady;
- (void)nfcVerify;
- (void)nfcVerifyCompleted;
- (void)nfcCompleted;
- (void)nfcRetry;
- (void)nfcFailure;
- (void)certificationFailureWithFailureMsg:(NSString * _Nonnull)failureMsg;
@end


SWIFT_PROTOCOL("_TtP14IDVerification19IDVerifyOCRDelegate_")
@protocol IDVerifyOCRDelegate
- (void)idSelfVerifyReady;
- (void)idFront;
- (void)idFrontCompleted;
- (void)idBack;
- (void)idBackCompleted;
- (void)idDocCompleted;
- (void)idDocStoreCompleted;
- (void)idVerifyExited;
- (void)failure;
- (void)timeoutFailure;
- (void)idTextRecognitionTimeout;
- (void)idCheckFailure;
- (void)idRetry;
- (void)cardFrontDetectStarted;
- (void)cardFrontDetected;
- (void)cardBackDetectStarted;
- (void)cardBackDetected;
- (void)cardHoloDetectStarted;
- (void)cardHoloDetected;
- (void)certificationFailureWithFailureMsg:(NSString * _Nonnull)failureMsg;
@end

typedef SWIFT_ENUM(NSInteger, IDVerifyState, open) {
  IDVerifyStateID_VERIFY_START = 0,
  IDVerifyStateID_VERIFY_EXIT = 1,
  IDVerifyStateID_VERIFY_READY = 2,
  IDVerifyStateID_SELF_VERIFY = 3,
  IDVerifyStateCALL_WAIT = 4,
  IDVerifyStateCALL_START = 5,
  IDVerifyStateID_TYPE_CHECK = 6,
  IDVerifyStateID_TYPE_BACK_CHECK = 7,
  IDVerifyStateID_TYPE_CHECK_COMPLETED = 8,
  IDVerifyStateID_FAKE_CHECK = 9,
  IDVerifyStateID_FAKE_CHECK_COMPLETED = 10,
  IDVerifyStateID_FRONT = 11,
  IDVerifyStateID_FRONT_COMPLETED = 12,
  IDVerifyStateID_BACK = 13,
  IDVerifyStateID_BACK_COMPLETED = 14,
  IDVerifyStateID_VIEW = 15,
  IDVerifyStateID_VIEW_COMPLETED = 16,
  IDVerifyStateID_DOC_COMPLETED = 17,
  IDVerifyStateNFC_VERIFY = 18,
  IDVerifyStateNFC_VERIFY_COMPLETED = 19,
  IDVerifyStateNFC_VIEW = 20,
  IDVerifyStateNFC_VIEW_COMPLETED = 21,
  IDVerifyStateFACE_DETECT = 22,
  IDVerifyStateFACE_DETECT_COMPLETED = 23,
  IDVerifyStateSMILE_DETECT = 24,
  IDVerifyStateSMILE_DETECT_COMPLETED = 25,
  IDVerifyStateEYE_CLOSE = 26,
  IDVerifyStateEYE_CLOSE_COMPLETED = 27,
  IDVerifyStateFACE_VIEW = 28,
  IDVerifyStateFACE_VIEW_COMPLETED = 29,
  IDVerifyStateFACE_COMPLETED = 30,
  IDVerifyStateRETRY_ID_VERIFICATION = 31,
  IDVerifyStateRETRY_FACE_VERIFICATION = 32,
  IDVerifyStateRETRY_NFC_VERIFICATION = 33,
  IDVerifyStateCALL_CHAT = 34,
  IDVerifyStateHANGUP_LOCAL = 35,
  IDVerifyStateHANGUP_REMOTE = 36,
  IDVerifyStateFORCE_HANGUP = 37,
  IDVerifyStateFAILURE = 38,
  IDVerifyStateID_FAKE_DETECTED = 39,
  IDVerifyStateFACE_UP = 40,
  IDVerifyStateFACE_UP_COMPLETED = 41,
  IDVerifyStateFACE_LEFT = 42,
  IDVerifyStateFACE_LEFT_COMPLETED = 43,
  IDVerifyStateFACE_RIGHT = 44,
  IDVerifyStateFACE_RIGHT_COMPLETED = 45,
  IDVerifyStateEYE_CLOSE_INTERVAL = 46,
  IDVerifyStateEYE_CLOSE_INTERVAL_COMPLETED = 47,
  IDVerifyStateEYE_OPEN_INTERVAL = 48,
  IDVerifyStateEYE_OPEN_INTERVAL_COMPLETED = 49,
  IDVerifyStateCARD_FRONT_DETECT = 50,
  IDVerifyStateCARD_FRONT_DETECT_COMPLETED = 51,
  IDVerifyStateCARD_HOLO_DETECT = 52,
  IDVerifyStateCARD_HOLO_DETECT_COMPLETED = 53,
  IDVerifyStateCARD_BACK_DETECT = 54,
  IDVerifyStateCARD_BACK_DETECT_COMPLETED = 55,
  IDVerifyStateCARD_FAKE_HOLO_CHECK = 56,
  IDVerifyStateCARD_FAKE_HOLO_CHECK_COMPLETED = 57,
  IDVerifyStateIDCARD_FRONT_DETECT = 58,
  IDVerifyStateIDCARD_FRONT_COMPLETED = 59,
  IDVerifyStateIDCARD_FACE_DETECT = 60,
  IDVerifyStateIDCARD_FACE_COMPLETED = 61,
  IDVerifyStateBARCODE_READ = 62,
};


SWIFT_CLASS("_TtC14IDVerification9NFCReader") SWIFT_AVAILABILITY(ios,introduced=13)
@interface NFCReader : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end








SWIFT_CLASS("_TtC14IDVerification8VSession")
@interface VSession : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) VSession * _Nonnull shared;)
+ (VSession * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(VSession * _Nonnull)value;
@property (nonatomic, copy) NSString * _Nonnull userId;
@property (nonatomic, copy) NSString * _Nonnull userName;
@property (nonatomic, copy) NSString * _Nonnull userSurname;
- (NSString * _Nonnull)getRoomId SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getDebugField SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)setStateWithState:(enum IDVerifyState)state;
- (CGSize)getVideoSize SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isFrontCameraOpen SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isVideoCall SWIFT_WARN_UNUSED_RESULT;
- (void)setDebugModeWithMode:(BOOL)mode;
- (BOOL)isDebugMode SWIFT_WARN_UNUSED_RESULT;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
