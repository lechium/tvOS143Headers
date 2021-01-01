/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DMFTaskRequest.h>

@class NSURL, NSString, NSArray;

@interface DMFOpenURLRequest : DMFTaskRequest {

	BOOL _lockInApp;
	NSURL* _url;
	NSString* _URLDisplayName;
	NSArray* _handlingBundleIdentifiers;

}

@property (nonatomic,copy) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * URLDisplayName;                        //@synthesize URLDisplayName=_URLDisplayName - In the implementation block
@property (assign,nonatomic) BOOL lockInApp;                                 //@synthesize lockInApp=_lockInApp - In the implementation block
@property (nonatomic,copy) NSArray * handlingBundleIdentifiers;              //@synthesize handlingBundleIdentifiers=_handlingBundleIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(BOOL)lockInApp;
-(void)setLockInApp:(BOOL)arg1 ;
-(NSString *)URLDisplayName;
-(NSArray *)handlingBundleIdentifiers;
-(void)setURLDisplayName:(NSString *)arg1 ;
-(void)setHandlingBundleIdentifiers:(NSArray *)arg1 ;
@end

