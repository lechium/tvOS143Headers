/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray;

@interface NSError : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {

	void* _reserved;
	long long _code;
	NSString* _domain;
	NSDictionary* _userInfo;

}

@property (getter=ac_isUnrecoverableDatabaseError,nonatomic,readonly) BOOL ac_unrecoverableDatabaseError; 
@property (getter=ac_isDiskFullSQLError,nonatomic,readonly) BOOL ac_diskFullSQLError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * domain; 
@property (readonly) long long code; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy,readonly) NSString * localizedDescription; 
@property (copy,readonly) NSString * localizedFailureReason; 
@property (copy,readonly) NSString * localizedRecoverySuggestion; 
@property (copy,readonly) NSArray * localizedRecoveryOptions; 
@property (readonly) id recoveryAttempter; 
@property (copy,readonly) NSString * helpAnchor; 
+(id)_webKitErrorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3 ;
+(void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2 ;
+(void)_registerWebKitErrors;
+(id)_webkit_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3 ;
+(id)_webKitErrorWithCode:(int)arg1 failingURL:(id)arg2 ;
+(id)_un_descriptionForUNErrorCode:(long long)arg1 ;
+(id)_updateUserInfo:(id)arg1 withLocalizedDescription:(id)arg2 ;
+(id)_un_descriptionForUNPrivateErrorCode:(long long)arg1 ;
+(id)un_errorWithUNErrorCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)un_errorWithUNPrivateErrorCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)sceneMessageErrorWithCode:(long long)arg1 ;
+(id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5 ;
+(id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4 ;
+(id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7 ;
+(id)rbs_errorClientNotEntitled:(id)arg1 permanent:(BOOL)arg2 ;
+(id)ax_errorWithDomain:(id)arg1 description:(id)arg2 ;
+(id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 arguments:(char*)arg4 ;
+(id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 ;
+(id)errorWithMTLCaptureErrorCode:(long long)arg1 ;
+(id)_xct_error:(long long)arg1 description:(id)arg2 ;
+(id)_xct_error:(long long)arg1 description:(id)arg2 userInfo:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
+(id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3 ;
+(id)_readCorruptErrorWithFormat:(id)arg1 ;
+(void)setUserInfoValueProviderForDomain:(id)arg1 provider:(/*^block*/id)arg2 ;
+(/*^block*/id)userInfoValueProviderForDomain:(id)arg1 ;
+(void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2 ;
+(id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3 ;
+(void)_registerFormatter:(/*function pointer*/void*)arg1 forErrorKey:(id)arg2 parameters:(const char*)arg3 ;
+(void)_registerBuiltInFormatters;
+(void)_setFileNameLocalizationEnabled:(BOOL)arg1 ;
-(id)_initWithPluginErrorCode:(int)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5 ;
-(id)_webkit_initWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3 ;
-(id)MCVerboseDescription;
-(id)MCFindPrimaryError;
-(id)MCUSEnglishDescription;
-(id)MCUSEnglishSuggestion;
-(id)MCCopyAsPrimaryError;
-(BOOL)MCContainsErrorDomain:(id)arg1 code:(long long)arg2 ;
-(id)MCErrorType;
-(id)ac_secureCodingError;
-(id)ac_sanitizeObject:(id)arg1 ;
-(BOOL)ac_isUnrecoverableDatabaseError;
-(BOOL)ac_isDiskFullSQLError;
-(BOOL)rbs_isPermanentFailure;
-(BOOL)isBSServiceConnectionError;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)ax_nonRedundantDescription;
-(id)initWithIOAccelError:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(NSString *)domain;
-(long long)code;
-(NSString *)localizedDescription;
-(NSString *)localizedFailureReason;
-(NSString *)localizedRecoverySuggestion;
-(id)redactedDescription;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3 ;
-(id)_cocoaErrorString:(id)arg1 ;
-(id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2 ;
-(id)_cocoaErrorStringWithKind:(id)arg1 ;
-(CFStringRef)_retainedUserInfoCallBackForKey:(id)arg1 ;
-(NSArray *)localizedRecoveryOptions;
-(id)recoveryAttempter;
-(NSString *)helpAnchor;
-(id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3 ;
-(id)_web_failingURL;
-(BOOL)_web_errorIsInDomain:(id)arg1 ;
-(id)_web_localizedDescription;
-(long long)_collectApplicableUserInfoFormatters:(/*function pointer*/void**)arg1 max:(long long)arg2 ;
-(id)_formatCocoaErrorString:(id)arg1 parameters:(const char*)arg2 applicableFormatters:(/*function pointer*/void**)arg3 count:(long long)arg4 ;
-(id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3 ;
@end
