/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest {

	NSString* _bundleID;
	long long _discoverableTrinary;

}

@property (assign,nonatomic) long long discoverableTrinary;              //@synthesize discoverableTrinary=_discoverableTrinary - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(long long)databaseScope;
-(id)initWithOperation:(id)arg1 ;
-(void)setDiscoverable:(BOOL)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)requiresTokenRegistration;
-(void)setDiscoverableTrinary:(long long)arg1 ;
-(long long)discoverableTrinary;
@end

