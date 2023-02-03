#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.7 (swiftlang-5.7.0.127.4 clang-1400.0.29.50)
#ifndef WISDK_SWIFT_H
#define WISDK_SWIFT_H
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

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
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
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import GoogleInteractiveMediaAds;
@import ObjectiveC;
@import UIKit;
@import WebKit;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="WISDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class UIEvent;
@class NSCoder;

SWIFT_CLASS("_TtC5WISDK15PassthroughView")
@interface PassthroughView : UIView
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@class NSString;
enum AdEventType : NSInteger;

SWIFT_CLASS("_TtC5WISDK9WIAdEvent")
@interface WIAdEvent : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)getEventDataWithKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getCampaignId SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getDuration SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isLinear SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getErrorCode SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getErrorMessage SWIFT_WARN_UNUSED_RESULT;
- (enum AdEventType)getEventType SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, AdEventType, open) {
  AdEventTypeREQUEST = 0,
  AdEventTypeSTART = 1,
  AdEventTypeIMPRESSION = 2,
  AdEventTypeCLICK = 3,
  AdEventTypeCOMPLETE = 4,
  AdEventTypeSKIPPED = 5,
  AdEventTypeUSER_AD_BLOCK = 6,
  AdEventTypeVOLUME_MUTED = 7,
  AdEventTypeVOLUME_ON = 8,
  AdEventTypeERROR = 9,
  AdEventTypeUNKNOW = 10,
};


SWIFT_PROTOCOL("_TtP5WISDK27WIAdsInStreamLoaderDelegate_")
@protocol WIAdsInStreamLoaderDelegate
- (void)wiManagerRequestPlayContent;
- (void)wiManagerRequestPauseContent;
- (void)wiManagerRequestFailure;
- (void)onEventWithEvent:(WIAdEvent * _Nonnull)event;
@end

enum WIEnvironment : NSInteger;
enum WILevelLog : NSInteger;
@class WIAdsRequestData;
@class AVPlayer;
@class UIViewController;
@class IMAAdsLoader;
@class IMAAdsLoadedData;
@class IMAAdLoadingErrorData;
@class IMAAdsManager;
@class IMAAdEvent;
@class IMAAdError;

SWIFT_CLASS("_TtC5WISDK20WIAdsInStreamManager")
@interface WIAdsInStreamManager : NSObject <IMAAdsLoaderDelegate, IMAAdsManagerDelegate>
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)initInstreamWithAccountId:(NSInteger)accountId env:(enum WIEnvironment)env timeoutInSecond:(int64_t)timeoutInSecond logLevel:(enum WILevelLog)logLevel SWIFT_METHOD_FAMILY(none);
- (void)requestAdsWithRequestData:(WIAdsRequestData * _Nonnull)requestData player:(AVPlayer * _Nonnull)player adContainer:(UIView * _Nonnull)adContainer viewController:(UIViewController * _Nonnull)viewController;
- (void)adsLoader:(IMAAdsLoader * _Nonnull)loader adsLoadedWithData:(IMAAdsLoadedData * _Nonnull)adsLoadedData;
- (void)adsLoader:(IMAAdsLoader * _Nonnull)loader failedWithErrorData:(IMAAdLoadingErrorData * _Nonnull)adErrorData;
- (void)adsManager:(IMAAdsManager * _Nonnull)adsManager didReceiveAdEvent:(IMAAdEvent * _Nonnull)event;
- (void)adsManagerDidRequestContentPause:(IMAAdsManager * _Nonnull)adsManager;
- (void)adsManagerDidRequestContentResume:(IMAAdsManager * _Nonnull)adsManager;
- (void)adsManager:(IMAAdsManager * _Nonnull)adsManager didReceiveAdError:(IMAAdError * _Nonnull)error;
@end


SWIFT_CLASS("_TtC5WISDK16WIAdsRequestData")
@interface WIAdsRequestData : NSObject
- (nonnull instancetype)initWithChannelId:(NSString * _Nullable)channelId streamId:(NSString * _Nullable)streamId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class WIStreamSource;

SWIFT_CLASS("_TtC5WISDK12WIConfigData")
@interface WIConfigData : NSObject
@property (nonatomic, copy) NSArray<WIStreamSource *> * _Nullable sources;
@property (nonatomic, readonly) BOOL isVod;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, WIEnvironment, open) {
  WIEnvironmentSANDBOX = 0,
  WIEnvironmentPRODUCTION = 1,
};


SWIFT_CLASS("_TtC5WISDK10WIGameData")
@interface WIGameData : NSObject
- (nonnull instancetype)initWithAccountId:(NSString * _Nullable)accountId channelId:(NSString * _Nullable)channelId streamId:(NSString * _Nullable)streamId token:(NSString * _Nullable)token env:(enum WIEnvironment)env OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP5WISDK14WIGameDelegate_")
@protocol WIGameDelegate
- (void)onDismiss;
- (void)onError;
- (void)onTimeout;
@end


SWIFT_CLASS("_TtC5WISDK13WIGameManager")
@interface WIGameManager : NSObject
- (void)addGameViewWithContainer:(UIView * _Null_unspecified)container data:(WIGameData * _Null_unspecified)data gameDelegate:(id <WIGameDelegate> _Nonnull)gameDelegate;
- (void)removeGameView;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5WISDK15WIGameWebAction")
@interface WIGameWebAction : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, WILevelLog, open) {
  WILevelLogNODE = 0,
  WILevelLogBODY = 1,
};

enum ContentType : NSInteger;
@class Platform;
enum OverlayType : NSInteger;

SWIFT_CLASS("_TtC5WISDK13WIOverlayData")
@interface WIOverlayData : NSObject
- (nonnull instancetype)initWithChannelId:(NSString * _Nullable)channelId streamId:(NSString * _Nullable)streamId contentType:(enum ContentType)contentType env:(enum WIEnvironment)env OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithChannelId:(NSString * _Nullable)channelId streamId:(NSString * _Nullable)streamId contentType:(enum ContentType)contentType platform:(Platform * _Nullable)platform env:(enum WIEnvironment)env OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithChannelId:(NSString * _Nullable)channelId streamId:(NSString * _Nullable)streamId thirdPartyToken:(NSString * _Nullable)thirdPartyToken contentType:(enum ContentType)contentType accountId:(NSInteger)accountId platform:(Platform * _Nullable)platform env:(enum WIEnvironment)env OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithChannelId:(NSString * _Nullable)channelId streamId:(NSString * _Nullable)streamId thirdPartyToken:(NSString * _Nullable)thirdPartyToken contentType:(enum ContentType)contentType accountId:(NSInteger)accountId platform:(Platform * _Nullable)platform env:(enum WIEnvironment)env timeoutSecond:(NSInteger)timeoutSecond OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithType:(enum OverlayType)type accountId:(NSInteger)accountId thirdPartyToken:(NSString * _Nullable)thirdPartyToken env:(enum WIEnvironment)env OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, ContentType, open) {
  ContentTypeVOD = 0,
  ContentTypeLIVESTREAM = 1,
};

typedef SWIFT_ENUM(NSInteger, OverlayType, open) {
  OverlayTypePROFILE = 0,
  OverlayTypeOVERLAY = 1,
};


SWIFT_CLASS("_TtC5WISDK16WIOverlayManager")
@interface WIOverlayManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onConfigReady)(WIConfigData * _Nonnull);)
+ (void (^ _Nullable)(WIConfigData * _Nonnull))onConfigReady SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnConfigReady:(void (^ _Nullable)(WIConfigData * _Nonnull))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onOverlayTimeout)(void);)
+ (void (^ _Nullable)(void))onOverlayTimeout SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnOverlayTimeout:(void (^ _Nullable)(void))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onOverlayError)(void);)
+ (void (^ _Nullable)(void))onOverlayError SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnOverlayError:(void (^ _Nullable)(void))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onOverlayStart)(void);)
+ (void (^ _Nullable)(void))onOverlayStart SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnOverlayStart:(void (^ _Nullable)(void))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onOverlayCompleted)(void);)
+ (void (^ _Nullable)(void))onOverlayCompleted SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnOverlayCompleted:(void (^ _Nullable)(void))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onTokenExpire)(void);)
+ (void (^ _Nullable)(void))onTokenExpire SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnTokenExpire:(void (^ _Nullable)(void))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onUserLogin)(void);)
+ (void (^ _Nullable)(void))onUserLogin SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnUserLogin:(void (^ _Nullable)(void))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onDisplayOverlay)(BOOL);)
+ (void (^ _Nullable)(BOOL))onDisplayOverlay SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnDisplayOverlay:(void (^ _Nullable)(BOOL))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onProfileClose)(void);)
+ (void (^ _Nullable)(void))onProfileClose SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnProfileClose:(void (^ _Nullable)(void))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onVideoDetail)(NSString * _Nonnull, BOOL);)
+ (void (^ _Nullable)(NSString * _Nonnull, BOOL))onVideoDetail SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnVideoDetail:(void (^ _Nullable)(NSString * _Nonnull, BOOL))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onCategoryDetail)(NSString * _Nonnull);)
+ (void (^ _Nullable)(NSString * _Nonnull))onCategoryDetail SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnCategoryDetail:(void (^ _Nullable)(NSString * _Nonnull))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onAdsRequestStart)(NSString * _Nonnull);)
+ (void (^ _Nullable)(NSString * _Nonnull))onAdsRequestStart SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnAdsRequestStart:(void (^ _Nullable)(NSString * _Nonnull))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onAdsRequestSuccess)(NSString * _Nonnull);)
+ (void (^ _Nullable)(NSString * _Nonnull))onAdsRequestSuccess SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnAdsRequestSuccess:(void (^ _Nullable)(NSString * _Nonnull))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onAdsRequestError)(NSString * _Nonnull, NSString * _Nonnull);)
+ (void (^ _Nullable)(NSString * _Nonnull, NSString * _Nonnull))onAdsRequestError SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnAdsRequestError:(void (^ _Nullable)(NSString * _Nonnull, NSString * _Nonnull))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable onAdsEvent)(WIAdEvent * _Nonnull);)
+ (void (^ _Nullable)(WIAdEvent * _Nonnull))onAdsEvent SWIFT_WARN_UNUSED_RESULT;
+ (void)setOnAdsEvent:(void (^ _Nullable)(WIAdEvent * _Nonnull))value;
+ (void)monitorAVPlayerWithPlayer:(AVPlayer * _Nullable)player;
+ (void)unmonitorAVPlayer;
+ (void)addOverlaysToPlayerViewWithContainer:(UIView * _Null_unspecified)container overlayData:(WIOverlayData * _Null_unspecified)overlayData;
+ (void)removeOverlays;
+ (void)onUserPurchaseSuccessWithToken:(NSString * _Nonnull)token productId:(NSString * _Nonnull)productId;
+ (void)onUserPurchaseErrorWithErrorCode:(NSString * _Nonnull)errorCode;
+ (void)requestAds;
+ (void)requestAdsWithVastLinkWithVastLink:(NSString * _Nonnull)vastLink;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIScrollView;
@class WKUserContentController;
@class WKScriptMessage;
@class WKWebView;
@class WKNavigation;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;
@class WKWebViewConfiguration;
@class WKNavigationAction;
@class WKWindowFeatures;

SWIFT_CLASS("_TtC5WISDK13WIOverlayView")
@interface WIOverlayView : PassthroughView <UIScrollViewDelegate, WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate>
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)scrollViewWillBeginZooming:(UIScrollView * _Nonnull)scrollView withView:(UIView * _Nullable)view;
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
- (void)webView:(WKWebView * _Nonnull)webView didStartProvisionalNavigation:(WKNavigation * _Null_unspecified)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFinishNavigation:(WKNavigation * _Null_unspecified)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFailNavigation:(WKNavigation * _Null_unspecified)navigation withError:(NSError * _Nonnull)error;
- (void)webView:(WKWebView * _Nonnull)webView didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (WKWebView * _Nullable)webView:(WKWebView * _Nonnull)webView createWebViewWithConfiguration:(WKWebViewConfiguration * _Nonnull)configuration forNavigationAction:(WKNavigationAction * _Nonnull)navigationAction windowFeatures:(WKWindowFeatures * _Nonnull)windowFeatures SWIFT_WARN_UNUSED_RESULT;
- (void)webViewDidClose:(WKWebView * _Nonnull)webView;
@end

@class NSURL;

SWIFT_CLASS("_TtC5WISDK14WIStreamSource")
@interface WIStreamSource : NSObject
@property (nonatomic, readonly, copy) NSURL * _Nullable url;
@property (nonatomic, readonly, copy) NSString * _Nullable mineType;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC5WISDK11WIWebAction")
@interface WIWebAction : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC5WISDK15WIWelcomeAdData")
@interface WIWelcomeAdData : NSObject
- (nonnull instancetype)initWithAccountId:(NSString * _Nullable)accountId env:(enum WIEnvironment)env OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAccountId:(NSString * _Nullable)accountId domainUrl:(NSString * _Nullable)domainUrl env:(enum WIEnvironment)env OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP5WISDK19WIWelcomeAdDelegate_")
@protocol WIWelcomeAdDelegate
- (void)onNoAds;
- (void)onAdsWelcomeDismiss;
- (void)onAdsWelcomeClickWithCampaignId:(int64_t)campaignId;
- (void)onAdsWelcomeImpressionWithCampaignId:(int64_t)campaignId;
- (void)onAdsWelcomeSkipWithCampaignId:(int64_t)campaignId;
- (void)onAdsWelcomeError;
- (void)onAdsWelcomeTimeout;
@end


SWIFT_CLASS("_TtC5WISDK18WIWelcomeAdManager")
@interface WIWelcomeAdManager : NSObject
- (void)requestAdsWithRequestData:(WIWelcomeAdData * _Nonnull)requestData container:(UIView * _Null_unspecified)container delegate:(id <WIWelcomeAdDelegate> _Nonnull)delegate timeoutInSecond:(int32_t)timeoutInSecond;
- (void)remove;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5WISDK20WIWelcomeAdWebAction")
@interface WIWelcomeAdWebAction : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
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
