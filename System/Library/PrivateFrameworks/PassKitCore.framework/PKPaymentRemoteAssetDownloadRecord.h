/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDictionary;

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding> {

	NSURL* _passURL;
	NSDictionary* _remoteAssetsByTaskIdentifier;
	NSDictionary* _remoteAssetsByRecordName;

}

@property (nonatomic,retain) NSURL * passURL;                                          //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,retain) NSDictionary * remoteAssetsByTaskIdentifier;              //@synthesize remoteAssetsByTaskIdentifier=_remoteAssetsByTaskIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * remoteAssetsByRecordName;                  //@synthesize remoteAssetsByRecordName=_remoteAssetsByRecordName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)passURL;
-(void)setPassURL:(NSURL *)arg1 ;
-(void)setRemoteURLAsset:(id)arg1 forTaskIdentifier:(id)arg2 ;
-(void)setRemoteCloudStoreAsset:(id)arg1 forRecordName:(id)arg2 ;
-(void)removeRemoteURLAssetForTaskIdentifier:(id)arg1 ;
-(BOOL)hasOutstandingRemoteAssetTasks;
-(void)removeRemoteCloudStoreAssetForRecordName:(id)arg1 ;
-(NSDictionary *)remoteAssetsByTaskIdentifier;
-(NSDictionary *)remoteAssetsByRecordName;
-(void)setRemoteAssetsByTaskIdentifier:(NSDictionary *)arg1 ;
-(void)setRemoteAssetsByRecordName:(NSDictionary *)arg1 ;
@end

