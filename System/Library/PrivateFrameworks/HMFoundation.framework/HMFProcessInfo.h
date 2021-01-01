/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@class NSString, NSURL, HMFBoolean, NSBundle;

@interface HMFProcessInfo : HMFObject <HMFLogging> {

	SCD_Struct_HM14* _auditToken;
	NSString* _applicationIdentifier;
	int _identifier;
	NSString* _name;
	NSURL* _executableURL;
	NSURL* _mainBundleURL;

}

@property (copy,readonly) NSString * applicationIdentifier; 
@property (getter=isCodeSigned,copy,readonly) HMFBoolean * codeSigned; 
@property (getter=isPlatformBinary,copy,readonly) HMFBoolean * platformBinary; 
@property (readonly) int identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSURL * executableURL;                                            //@synthesize executableURL=_executableURL - In the implementation block
@property (copy,readonly) NSURL * mainBundleURL;                                            //@synthesize mainBundleURL=_mainBundleURL - In the implementation block
@property (copy,readonly) NSBundle * mainBundle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)processInfo;
+(id)logCategory;
+(id)processInfoForXPCConnection:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(int)identifier;
-(NSBundle *)mainBundle;
-(NSURL *)executableURL;
-(id)initWithIdentifier:(int)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(id)initWithAuditToken:(SCD_Struct_HM14)arg1 ;
-(id)shortDescription;
-(NSString *)applicationIdentifier;
-(id)isPlatformBinary;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(NSURL *)mainBundleURL;
-(BOOL)getAuditToken:(SCD_Struct_HM14*)arg1 ;
-(id)isCodeSigned;
@end
