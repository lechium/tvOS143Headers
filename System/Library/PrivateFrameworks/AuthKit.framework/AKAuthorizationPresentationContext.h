/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSNumber, AKCredentialRequestContext, AKUserInformation, NSArray;

@interface AKAuthorizationPresentationContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleID;
	NSString* _localizedAppName;
	NSString* _informativeText;
	NSString* _iconName;
	NSData* _iconData;
	NSNumber* _iconScale;
	AKCredentialRequestContext* _credentialRequestContext;
	AKUserInformation* _userInformation;
	NSArray* _loginChoices;

}

@property (nonatomic,copy) NSString * bundleID;                                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedAppName;                                 //@synthesize localizedAppName=_localizedAppName - In the implementation block
@property (nonatomic,copy,readonly) NSString * informativeText;                                  //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconName;                                         //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,copy,readonly) NSData * iconData;                                           //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * iconScale;                                        //@synthesize iconScale=_iconScale - In the implementation block
@property (nonatomic,retain) AKCredentialRequestContext * credentialRequestContext;              //@synthesize credentialRequestContext=_credentialRequestContext - In the implementation block
@property (nonatomic,retain) AKUserInformation * userInformation;                                //@synthesize userInformation=_userInformation - In the implementation block
@property (nonatomic,copy) NSArray * loginChoices;                                               //@synthesize loginChoices=_loginChoices - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)presentationContextForRequestContext:(id)arg1 client:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSData *)iconData;
-(AKUserInformation *)userInformation;
-(void)setUserInformation:(AKUserInformation *)arg1 ;
-(NSString *)informativeText;
-(void)_addPresenterParameters;
-(id)initWithContext:(id)arg1 bundleID:(id)arg2 ;
-(void)_addPresentationParametersForContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 client:(id)arg2 ;
-(NSString *)localizedAppName;
-(NSString *)iconName;
-(NSNumber *)iconScale;
-(AKCredentialRequestContext *)credentialRequestContext;
-(void)setCredentialRequestContext:(AKCredentialRequestContext *)arg1 ;
-(NSArray *)loginChoices;
-(void)setLoginChoices:(NSArray *)arg1 ;
@end

