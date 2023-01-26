// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef ENVERIFY_SWIFT_H
#define ENVERIFY_SWIFT_H
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
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
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
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="EnVerify",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


@class NSString;

SWIFT_CLASS("_TtC8EnVerify10EnVSession")
@interface EnVSession : NSObject
+ (void)checkFrontCameraOpen;
+ (BOOL)isFrontCameraOpen SWIFT_WARN_UNUSED_RESULT;
+ (void)setDebugMode:(BOOL)mode;
+ (void)setUserId:(NSString * _Nonnull)value;
+ (void)setUserName:(NSString * _Nonnull)value;
+ (void)setUserSurname:(NSString * _Nonnull)value;
+ (NSString * _Nonnull)getUserId SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getUserName SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getUserSurname SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getRoomId SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getId SWIFT_WARN_UNUSED_RESULT;
+ (CGSize)getVideoSize SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class AVAsset;
@class EnverifyScreenRecordingData;
@class NSTimer;
@class UIImage;
@class AVPlayer;
@class EnVerifyCallAddressRegistrationModel;
@class EnVerifyCallIDRegistrationModel;
@class UIViewController;
@class UINavigationController;
@class UIButton;
@class NSDate;
@class EnverifyVerifyAvailableAppointmentResult;
@class EnverifyVerifyAppointmentSaveMobileModel;
@class EnverifyVerifySaveMobileAppointmentResult;
@class EnverifyVerifyCancelAppointmentResult;
@class EnverifyVerifyAppointmentResult;
@class EnverifyVerifyCallTypeResult;

SWIFT_CLASS("_TtC8EnVerify8EnVerify")
@interface EnVerify : NSObject <UIApplicationDelegate>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSArray<AVAsset *> * _Nonnull screenRecordAssets;)
+ (NSArray<AVAsset *> * _Nonnull)screenRecordAssets SWIFT_WARN_UNUSED_RESULT;
+ (void)setScreenRecordAssets:(NSArray<AVAsset *> * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull screenRecordingParts;)
+ (NSString * _Nonnull)screenRecordingParts SWIFT_WARN_UNUSED_RESULT;
+ (void)setScreenRecordingParts:(NSString * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) EnverifyScreenRecordingData * _Nonnull screenRecordingData;)
+ (EnverifyScreenRecordingData * _Nonnull)screenRecordingData SWIFT_WARN_UNUSED_RESULT;
+ (void)setScreenRecordingData:(EnverifyScreenRecordingData * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) NSTimer * _Nullable timerLiveLog;)
+ (NSTimer * _Nullable)timerLiveLog SWIFT_WARN_UNUSED_RESULT;
+ (void)setTimerLiveLog:(NSTimer * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable enverify_accessToken;)
+ (NSString * _Nullable)enverify_accessToken SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnverify_accessToken:(NSString * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull callType;)
+ (NSString * _Nonnull)callType SWIFT_WARN_UNUSED_RESULT;
+ (void)setCallType:(NSString * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL handicapped;)
+ (BOOL)handicapped SWIFT_WARN_UNUSED_RESULT;
+ (void)setHandicapped:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable identityType;)
+ (NSString * _Nullable)identityType SWIFT_WARN_UNUSED_RESULT;
+ (void)setIdentityType:(NSString * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable identityNo;)
+ (NSString * _Nullable)identityNo SWIFT_WARN_UNUSED_RESULT;
+ (void)setIdentityNo:(NSString * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL canAutoClose;)
+ (BOOL)canAutoClose SWIFT_WARN_UNUSED_RESULT;
+ (void)setCanAutoClose:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL _continue;)
+ (BOOL)_continue SWIFT_WARN_UNUSED_RESULT;
+ (void)set_continue:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIImage * _Nullable agentDummyImage;)
+ (UIImage * _Nullable)agentDummyImage SWIFT_WARN_UNUSED_RESULT;
+ (void)setAgentDummyImage:(UIImage * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) AVPlayer * _Nullable agentDummyVideoPlayer;)
+ (AVPlayer * _Nullable)agentDummyVideoPlayer SWIFT_WARN_UNUSED_RESULT;
+ (void)setAgentDummyVideoPlayer:(AVPlayer * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL isAgentDummyShown;)
+ (BOOL)isAgentDummyShown SWIFT_WARN_UNUSED_RESULT;
+ (void)setIsAgentDummyShown:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL isCallAnswered;)
+ (BOOL)isCallAnswered SWIFT_WARN_UNUSED_RESULT;
+ (void)setIsCallAnswered:(BOOL)value;
+ (void)integrationAddWithType:(NSString * _Nonnull)type reference:(NSString * _Nonnull)reference callType:(NSString * _Nullable)callType phone:(NSString * _Nullable)phone email:(NSString * _Nullable)email data:(NSString * _Nonnull)data addressRegistration:(EnVerifyCallAddressRegistrationModel * _Nullable)addressRegistration iDRegistration:(EnVerifyCallIDRegistrationModel * _Nullable)iDRegistration;
+ (void)getAuthToken:(NSString * _Nullable)userNameForToken :(NSString * _Nonnull)backOfficeBasePath completion:(void (^ _Nonnull)(BOOL))completion;
+ (void)logInfoAddWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message;
/// self serviste işlemlerin başarılı şekilde bittiğini anlattması için session/close’u çağırıyorsanız finished=true
/// bir de arama daha karşılanmamış ise mobilden kapatıldığında bu servisi false çağrılıyor
/// Self servis ile başarılı bir sonlandırma var ise Finished alanı true gönderilmelidir. Self servisi bitirmek için gönderilmiyorsa false gönderilmelidir.
+ (void)callSessionCloseWithFinished:(BOOL)finished;
+ (BOOL)idVerifyStart:(id _Nonnull)sender SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)videoCallStart:(id _Nonnull)sender SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)selfServiceStart:(id _Nonnull)sender SWIFT_WARN_UNUSED_RESULT;
+ (void)invalidateTimerRoomId;
+ (void)idFakeCheckStart;
+ (void)idFrontStart;
+ (void)idBackStart;
+ (void)idViewStartWithVc:(UIViewController * _Nonnull)vc;
+ (void)idDocStore;
+ (NSInteger)nfcStart SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=13.0);
+ (NSInteger)nfcStartWith:(NSString * _Nonnull)documentNo birthday:(NSString * _Nonnull)birthday expiryDate:(NSString * _Nonnull)expiryDate SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=13.0);
+ (void)nfcViewStartWithVc:(UIViewController * _Nonnull)vc;
+ (void)nfcStore;
+ (void)faceDetectStart;
+ (void)idTypeCheckSet;
+ (void)onStartSelfService;
+ (void)idTypeBackCheckSet;
+ (void)faceDetectSet;
+ (void)nfcVerifySet SWIFT_AVAILABILITY(ios,introduced=13.0);
+ (void)chatSet;
+ (void)smileDetectStart;
+ (void)eyeCloseStart;
+ (void)eyeCloseIntervalStart;
+ (void)faceUpStart;
+ (void)faceLeftStart;
+ (void)faceRightStart;
+ (void)faceCompleteStart;
+ (void)eyeOpenIntervalStart;
+ (void)faceViewStartWithVc:(UIViewController * _Nonnull)vc;
+ (void)faceStore;
+ (void)noConnectionAction;
+ (void)handleCallFail;
+ (void)onRetryFace;
+ (void)pauseForNFC SWIFT_AVAILABILITY(ios,introduced=13.0);
+ (void)pauseForFace;
+ (void)videoCallRestart;
+ (void)selfServiceRestart;
+ (void)onConfirmFace;
+ (void)onRetryNFC;
+ (void)onConfirmNFC;
+ (void)agentRequestCompleted;
+ (void)idTypeCheckBackStart;
+ (void)idTypeCheckFrontStart;
+ (void)onRetryDoc;
+ (void)onConfirmDoc;
+ (void)startLivenessDetect;
+ (void)setSSStartButtonsWithButtonState:(BOOL)buttonState;
+ (BOOL)idvSettingsWithDomainName:(NSString * _Nullable)domainName certificateName:(NSString * _Nullable)certificateName aiUsername:(NSString * _Nullable)aiUsername aiPassword:(NSString * _Nullable)aiPassword signalingServer:(NSString * _Nullable)signalingServer stunServer:(NSString * _Nullable)stunServer turnServer:(NSString * _Nullable)turnServer turnUsername:(NSString * _Nullable)turnUsername turnPassword:(NSString * _Nullable)turnPassword backOfficeBasePath:(NSString * _Nullable)backOfficeBasePath referenceId:(NSString * _Nullable)referenceId userNameForToken:(NSString * _Nullable)userNameForToken SWIFT_WARN_UNUSED_RESULT;
+ (void)stopSSStartVC:(id _Nonnull)sender;
+ (void)setNavigationControllerWithNavigator:(UINavigationController * _Nonnull)navigator;
+ (UINavigationController * _Nullable)getNavigationController SWIFT_WARN_UNUSED_RESULT;
+ (void)setOrientationLockWithOrientation:(UIInterfaceOrientationMask)orientation;
+ (BOOL)setNFCBACDataWithDocNo:(NSString * _Nonnull)docNo birthday:(NSString * _Nonnull)birthday expiryDate:(NSString * _Nonnull)expiryDate SWIFT_WARN_UNUSED_RESULT;
+ (void)handleFail;
+ (void)idVerifyRestart;
+ (void)startVideoChat;
+ (void)onExitCall;
+ (void)onExitCallWithoutPop;
+ (void)onExitSelfService;
+ (void)onHangupCall;
+ (void)onStartCall;
+ (void)startAVRecording SWIFT_AVAILABILITY(ios,introduced=11.0);
+ (void)stopAVRecording SWIFT_AVAILABILITY(ios,introduced=11.0);
+ (void)setMessageWithMessage:(NSString * _Nonnull)message index:(NSInteger)index;
+ (BOOL)checkPermissions SWIFT_WARN_UNUSED_RESULT;
+ (void)requestVideoAudioPermissions;
+ (void)setAgentFullScreenWithAgentFullScreenState:(BOOL)agentFullScreenState;
+ (void)setSpeakerWithSoundOn:(BOOL)soundOn;
+ (void)setMediaServerWithMediaServerState:(BOOL)mediaServerState;
+ (void)setMSPrivateKeyWithValue:(NSString * _Nonnull)value;
+ (void)setTimerForAlivenessWithTimerCountInSeconds:(NSInteger)timerCountInSeconds;
+ (void)setLivenessCalibrationWithValue:(NSInteger)value;
+ (void)setEyeCloseMaxTimeWithValue:(NSInteger)value;
+ (void)setFaceAngleCalibrationWithValue:(NSInteger)value;
+ (void)setOCRModeWithValue:(NSInteger)value;
+ (void)setOCRCheckSizeWithValue:(NSInteger)value;
+ (void)setCallWaitTimeoutWithValue:(NSInteger)value;
+ (void)setIceCheckingTimeoutWithValue:(NSInteger)value;
+ (void)setICERelayWithIceRelayState:(BOOL)iceRelayState;
+ (void)setSSLPinningWithRequired:(BOOL)required;
+ (void)setEyeCloseCalibrationWithValue:(float)value;
+ (void)setSmilingCalibrationWithValue:(float)value;
+ (void)setICEHostWithIceHostState:(BOOL)iceHostState;
+ (void)setEyeCloseToleranceWithValue:(NSInteger)value;
+ (void)setHashCheckWithHashCheck:(BOOL)hashCheck;
+ (void)setViewerWidthRatioWithLocal:(float)local remote:(float)remote;
+ (void)setViewerLocationRatioWithX:(float)x y:(float)y;
+ (void)setScreenRecordAudioEnabledWithState:(BOOL)state;
+ (void)setVideoBitrateWithRate:(NSInteger)rate;
+ (NSString * _Nullable)getScreenRecordFilePath SWIFT_WARN_UNUSED_RESULT;
+ (void)setShowLogsWithValue:(BOOL)value;
+ (void)setCertificateBase64WithStr:(NSString * _Nonnull)str;
+ (void)setShowMobileSpeedWithState:(BOOL)state;
+ (void)saveRecordAssetWithFilePath:(NSString * _Nonnull)filePath;
+ (void)startCardFrontDetect;
+ (void)startCardHoloDetect;
+ (void)startCardBackDetect;
+ (void)idCardDetectSet;
+ (void)sendVideoToBackOfficeWithPath:(NSString * _Nonnull)path;
+ (void)iconStartButton:(UIButton * _Nonnull)button;
+ (void)iconExitButton:(UIButton * _Nonnull)button;
+ (void)iconRetryButton:(UIButton * _Nonnull)button;
+ (void)iconExitRetryButton:(UIButton * _Nonnull)button;
+ (void)iconHangupRetryButton:(UIButton * _Nonnull)button;
+ (void)iconHangupChatButton:(UIButton * _Nonnull)button;
+ (void)iconCallButton:(UIButton * _Nonnull)button;
+ (void)iconHangupButton:(UIButton * _Nonnull)button;
+ (void)iconRotateButton:(UIButton * _Nonnull)button;
+ (void)iconChatRotateButton:(UIButton * _Nonnull)button;
+ (void)rotateButtonAct;
+ (void)getAvailableAppointmentWithStartDate:(NSDate * _Nonnull)startDate endDate:(NSDate * _Nonnull)endDate callType:(NSString * _Nullable)callType completion:(void (^ _Nonnull)(NSArray<EnverifyVerifyAvailableAppointmentResult *> * _Nullable, NSError * _Nullable))completion;
+ (void)saveAppointmentWithData:(EnverifyVerifyAppointmentSaveMobileModel * _Nonnull)data completion:(void (^ _Nonnull)(EnverifyVerifySaveMobileAppointmentResult * _Nullable, NSError * _Nullable))completion;
+ (void)cancelAppointmentWithIdentityType:(NSString * _Nullable)identityType identityNo:(NSString * _Nullable)identityNo callType:(NSString * _Nullable)callType completion:(void (^ _Nonnull)(EnverifyVerifyCancelAppointmentResult * _Nullable, NSError * _Nullable))completion;
+ (void)setAgentRequest;
+ (void)getAppointmentWithIdentityNo:(NSString * _Nullable)identityNo identityType:(NSString * _Nullable)identityType completion:(void (^ _Nonnull)(NSArray<EnverifyVerifyAppointmentResult *> * _Nullable, NSError * _Nullable))completion;
+ (void)getCallTypesWithCompletion:(void (^ _Nonnull)(NSArray<EnverifyVerifyCallTypeResult *> * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC8EnVerify36EnVerifyCallAddressRegistrationModel")
@interface EnVerifyCallAddressRegistrationModel : NSObject
@property (nonatomic, copy) NSString * _Nullable addressType;
@property (nonatomic, copy) NSString * _Nullable district;
@property (nonatomic, copy) NSString * _Nullable districtCode;
@property (nonatomic, copy) NSString * _Nullable street;
@property (nonatomic, copy) NSString * _Nullable streetCode;
@property (nonatomic, copy) NSString * _Nullable villageCode;
@property (nonatomic, copy) NSString * _Nullable addressDetail;
@property (nonatomic, copy) NSString * _Nullable townCode;
@property (nonatomic, copy) NSString * _Nullable town;
@property (nonatomic, copy) NSString * _Nullable city;
@property (nonatomic, copy) NSString * _Nullable cityCode;
@property (nonatomic, copy) NSString * _Nullable country;
@property (nonatomic, copy) NSString * _Nullable countryCode;
- (nonnull instancetype)initWithAddressType:(NSString * _Nullable)addressType district:(NSString * _Nullable)district districtCode:(NSString * _Nullable)districtCode street:(NSString * _Nullable)street streetCode:(NSString * _Nullable)streetCode villageCode:(NSString * _Nullable)villageCode addressDetail:(NSString * _Nullable)addressDetail townCode:(NSString * _Nullable)townCode town:(NSString * _Nullable)town city:(NSString * _Nullable)city cityCode:(NSString * _Nullable)cityCode country:(NSString * _Nullable)country countryCode:(NSString * _Nullable)countryCode OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8EnVerify31EnVerifyCallIDRegistrationModel")
@interface EnVerifyCallIDRegistrationModel : NSObject
@property (nonatomic, copy) NSString * _Nullable fatherName;
@property (nonatomic, copy) NSString * _Nullable motherName;
@property (nonatomic, copy) NSString * _Nullable birthPlace;
@property (nonatomic, copy) NSString * _Nullable registrationPlaceFamilyRow;
@property (nonatomic, copy) NSString * _Nullable registrationPlacePersonalRow;
@property (nonatomic, copy) NSString * _Nullable identificationCardSerial;
@property (nonatomic, copy) NSString * _Nullable identificationCardRecord;
@property (nonatomic, copy) NSString * _Nullable identityType;
@property (nonatomic, copy) NSString * _Nullable identityNo;
@property (nonatomic, copy) NSString * _Nullable documentNo;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable surname;
@property (nonatomic, copy) NSString * _Nullable gender;
@property (nonatomic, copy) NSString * _Nullable birthDate;
@property (nonatomic, copy) NSString * _Nullable nationality;
@property (nonatomic, copy) NSString * _Nullable issuedBy;
@property (nonatomic, copy) NSString * _Nullable issuedDate;
@property (nonatomic, copy) NSString * _Nullable expireDate;
- (nonnull instancetype)initWithFatherName:(NSString * _Nullable)fatherName motherName:(NSString * _Nullable)motherName birthPlace:(NSString * _Nullable)birthPlace registrationPlaceFamilyRow:(NSString * _Nullable)registrationPlaceFamilyRow registrationPlacePersonalRow:(NSString * _Nullable)registrationPlacePersonalRow identificationCardSerial:(NSString * _Nullable)identificationCardSerial identificationCardRecord:(NSString * _Nullable)identificationCardRecord identityType:(NSString * _Nullable)identityType identityNo:(NSString * _Nullable)identityNo documentNo:(NSString * _Nullable)documentNo name:(NSString * _Nullable)name surname:(NSString * _Nullable)surname gender:(NSString * _Nullable)gender birthDate:(NSString * _Nullable)birthDate nationality:(NSString * _Nullable)nationality issuedBy:(NSString * _Nullable)issuedBy issuedDate:(NSString * _Nullable)issuedDate expireDate:(NSString * _Nullable)expireDate OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, EnVerifyCallSessionStatusTypeEnum, open) {
  EnVerifyCallSessionStatusTypeEnum_none = 0,
  EnVerifyCallSessionStatusTypeEnumReady = 1,
  EnVerifyCallSessionStatusTypeEnumStarted = 2,
  EnVerifyCallSessionStatusTypeEnumFinished = 3,
  EnVerifyCallSessionStatusTypeEnumClosed = 4,
  EnVerifyCallSessionStatusTypeEnumCancelled = 5,
  EnVerifyCallSessionStatusTypeEnumFailure = 6,
};


SWIFT_CLASS("_TtC8EnVerify20EnVerifyCustomerCard")
@interface EnVerifyCustomerCard : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) EnVerifyCustomerCard * _Nonnull shared;)
+ (EnVerifyCustomerCard * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(EnVerifyCustomerCard * _Nonnull)value;
- (void)setHoloDetectionTypeWithHoloDetectionType:(NSString * _Nonnull)holoDetectionType;
- (void)setDetectionThresholdWithThreshold:(float)threshold;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8EnVerify20EnVerifyCustomerChip")
@interface EnVerifyCustomerChip : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) EnVerifyCustomerChip * _Nonnull shared;)
+ (EnVerifyCustomerChip * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(EnVerifyCustomerChip * _Nonnull)value;
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
- (NSString * _Nonnull)getNameOfHolder SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getSurnameOfHolder SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getPlaceOfBirth SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getFullDateOfBirth SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)isChipAuthSucceeded SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)isActiveAuthSucceed SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)isPassiveAuthSucceeded SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)isDataValidated SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8EnVerify20EnVerifyCustomerFace")
@interface EnVerifyCustomerFace : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) EnVerifyCustomerFace * _Nonnull shared;)
+ (EnVerifyCustomerFace * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(EnVerifyCustomerFace * _Nonnull)value;
- (NSInteger)getChipConfidence SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getIdConfidence SWIFT_WARN_UNUSED_RESULT;
- (float)getChipDistance SWIFT_WARN_UNUSED_RESULT;
- (float)getIdDistance SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getId SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nonnull)getFace SWIFT_WARN_UNUSED_RESULT;
- (float)getSelfieAntispoofing SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isHashSuccess SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nonnull)getEyeFace SWIFT_WARN_UNUSED_RESULT;
- (float)getEyeDistance SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getEyeConfidence SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8EnVerify27EnVerifyCustomerIdentityDoc")
@interface EnVerifyCustomerIdentityDoc : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) EnVerifyCustomerIdentityDoc * _Nonnull shared;)
+ (EnVerifyCustomerIdentityDoc * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(EnVerifyCustomerIdentityDoc * _Nonnull)value;
- (NSString * _Nonnull)getOptionalData1 SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getOptionalData2 SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getCountry SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getIdIssuer SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getIdType SWIFT_WARN_UNUSED_RESULT;
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
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class EnverifyVerifyCallResult;

SWIFT_PROTOCOL("_TtP8EnVerify16EnVerifyDelegate_")
@protocol EnVerifyDelegate
- (void)agentRequestWithEventData:(NSString * _Nonnull)eventData;
- (void)idVerifyReady;
- (void)idSelfVerifyReady;
- (void)callWait;
- (void)callStart;
- (void)idTypeCheck;
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
- (void)faceDetect;
- (void)faceDetectCompleted;
- (void)smileDetect;
- (void)smileDetectCompleted;
- (void)eyeClose;
- (void)eyeCloseDetected;
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
- (void)hangupLocal;
- (void)hangupRemote;
- (void)failure;
- (void)tokenError;
- (void)noConnectionError;
- (void)idFakeDetected;
- (void)idDocStoreCompleted;
- (void)nfcStoreCompleted;
- (void)faceStoreCompleted;
- (void)idTypeBackCheck;
- (void)nfcCompleted;
- (void)faceCompleted;
- (void)idVerifyExited;
- (void)timeoutFailure;
- (void)idCheckFailure;
- (void)tokenFailure;
- (void)connectionFailure;
- (void)nfcFailure;
- (void)nfcBACDATAFailure;
- (void)faceLivenessCheckFailure;
- (void)idRetry;
- (void)nfcRetry;
- (void)faceRetry;
- (void)hostConnected;
- (void)resolutionChanged;
- (void)callConnectionFailure;
- (void)integrationAddCompleted;
- (void)integrationAddFailure;
- (void)resultGetCompleted:(EnverifyVerifyCallResult * _Nullable)value;
- (void)resultGetFailure;
- (void)sessionStartFailure;
- (void)sessionStartCompletedWithSessionUid:(NSString * _Nonnull)sessionUid;
- (void)getAuthTokenFailure;
- (void)getAuthTokenCompleted;
- (void)roomIDSendFailure;
- (void)roomIDSendCompleted;
- (void)idDocStoreFailure;
- (void)addChipStoreFailure;
- (void)addChipStoreCompleted;
- (void)addFaceCompleted;
- (void)addFaceFailure;
- (void)requestVideoAudioPermissionsResult:(BOOL)granted;
- (void)forceHangup;
- (void)idTextRecognitionTimeout;
- (void)callSessionCloseResultWithStatus:(enum EnVerifyCallSessionStatusTypeEnum)status;
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
- (void)videoUploadSuccess;
- (void)videoUploadFailure;
- (void)maximumCallTimeExpired;
@end


SWIFT_CLASS("_TtC8EnVerify34EnVerifySuccessCustomerIdentityDoc")
@interface EnVerifySuccessCustomerIdentityDoc : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8EnVerify27EnverifyScreenRecordingData")
@interface EnverifyScreenRecordingData : NSObject
@property (nonatomic, copy) NSString * _Nullable screenRecordParts;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8EnVerify31EnverifyVerifyAppointmentResult")
@interface EnverifyVerifyAppointmentResult : NSObject
@property (nonatomic, copy) NSString * _Nullable callType;
@property (nonatomic, copy) NSString * _Nullable identityType;
@property (nonatomic, copy) NSString * _Nullable identityNo;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable surname;
@property (nonatomic, copy) NSString * _Nullable phone;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSDate * _Nullable startDate;
@property (nonatomic, copy) NSDate * _Nullable endDate;
- (nonnull instancetype)initWithCallType:(NSString * _Nullable)callType identityType:(NSString * _Nullable)identityType identityNo:(NSString * _Nullable)identityNo name:(NSString * _Nullable)name surname:(NSString * _Nullable)surname phone:(NSString * _Nullable)phone email:(NSString * _Nullable)email startDate:(NSDate * _Nullable)startDate endDate:(NSDate * _Nullable)endDate OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8EnVerify40EnverifyVerifyAppointmentSaveMobileModel")
@interface EnverifyVerifyAppointmentSaveMobileModel : NSObject
@property (nonatomic, copy) NSString * _Nullable callType;
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic, copy) NSString * _Nullable startTime;
@property (nonatomic, copy) NSString * _Nullable identityType;
@property (nonatomic, copy) NSString * _Nullable identityNo;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable surname;
@property (nonatomic, copy) NSString * _Nullable phone;
@property (nonatomic, copy) NSString * _Nullable email;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8EnVerify40EnverifyVerifyAvailableAppointmentResult")
@interface EnverifyVerifyAvailableAppointmentResult : NSObject
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic, copy) NSString * _Nullable startTime;
@property (nonatomic, copy) NSString * _Nullable endTime;
- (nonnull instancetype)initWithDate:(NSDate * _Nullable)date startTime:(NSString * _Nullable)startTime endTime:(NSString * _Nullable)endTime OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSUUID;

SWIFT_CLASS("_TtC8EnVerify24EnverifyVerifyCallResult")
@interface EnverifyVerifyCallResult : NSObject
@property (nonatomic, copy) NSDate * _Nullable dateTime;
@property (nonatomic, copy) NSString * _Nullable userRole;
@property (nonatomic, copy) NSString * _Nullable result;
@property (nonatomic, copy) NSString * _Nullable reference;
@property (nonatomic, copy) NSString * _Nullable _description;
@property (nonatomic, copy) NSUUID * _Nullable userUId;
- (nonnull instancetype)initWithDateTime:(NSDate * _Nullable)dateTime userRole:(NSString * _Nullable)userRole result:(NSString * _Nullable)result reference:(NSString * _Nullable)reference _description:(NSString * _Nullable)_description userUId:(NSUUID * _Nullable)userUId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8EnVerify28EnverifyVerifyCallTypeResult")
@interface EnverifyVerifyCallTypeResult : NSObject
@property (nonatomic, copy) NSString * _Nullable code;
@property (nonatomic, copy) NSString * _Nullable name;
- (nonnull instancetype)initWithCode:(NSString * _Nullable)code name:(NSString * _Nullable)name OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class EnverifyVerifyResultInfo;

SWIFT_CLASS("_TtC8EnVerify37EnverifyVerifyCancelAppointmentResult")
@interface EnverifyVerifyCancelAppointmentResult : NSObject
@property (nonatomic) BOOL isSuccessful;
@property (nonatomic, strong) EnverifyVerifyResultInfo * _Nullable result;
@property (nonatomic, strong) EnverifyVerifyResultInfo * _Nullable warning;
@property (nonatomic, copy) NSUUID * _Nullable referenceId;
- (nonnull instancetype)initWithIsSuccessful:(BOOL)isSuccessful result:(EnverifyVerifyResultInfo * _Nullable)result warning:(EnverifyVerifyResultInfo * _Nullable)warning referenceId:(NSUUID * _Nullable)referenceId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8EnVerify24EnverifyVerifyResultInfo")
@interface EnverifyVerifyResultInfo : NSObject
@property (nonatomic, copy) NSString * _Nullable code;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable message;
@property (nonatomic, copy) NSString * _Nullable logMessage;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nullable values;
@property (nonatomic, copy) NSString * _Nullable info;
- (nonnull instancetype)initWithCode:(NSString * _Nullable)code title:(NSString * _Nullable)title message:(NSString * _Nullable)message logMessage:(NSString * _Nullable)logMessage values:(NSDictionary<NSString *, NSString *> * _Nullable)values info:(NSString * _Nullable)info OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8EnVerify41EnverifyVerifySaveMobileAppointmentResult")
@interface EnverifyVerifySaveMobileAppointmentResult : NSObject
@property (nonatomic) BOOL isSuccessful;
@property (nonatomic, strong) EnverifyVerifyResultInfo * _Nullable result;
@property (nonatomic, strong) EnverifyVerifyResultInfo * _Nullable warning;
@property (nonatomic, copy) NSUUID * _Nullable referenceId;
- (nonnull instancetype)initWithIsSuccessful:(BOOL)isSuccessful result:(EnverifyVerifyResultInfo * _Nullable)result warning:(EnverifyVerifyResultInfo * _Nullable)warning referenceId:(NSUUID * _Nullable)referenceId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
