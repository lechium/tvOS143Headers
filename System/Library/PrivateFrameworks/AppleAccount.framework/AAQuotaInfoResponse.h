/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSArray, NSURL, NSNumber, NSString;

@interface AAQuotaInfoResponse : AAResponse {

	NSDictionary* _quotaInfo;
	NSDictionary* _endPoints;
	NSDictionary* _storageInfo;
	NSDictionary* _storageMeterLabel;
	NSArray* _usage;

}

@property (nonatomic,readonly) NSArray * usage;                                 //@synthesize usage=_usage - In the implementation block
@property (nonatomic,readonly) NSURL * manageStorageURL; 
@property (nonatomic,readonly) NSNumber * availableStorageInBytes; 
@property (nonatomic,readonly) NSNumber * usedStorageInBytes; 
@property (nonatomic,readonly) NSNumber * totalStorageInBytes; 
@property (nonatomic,readonly) BOOL hasMaxTier; 
@property (nonatomic,readonly) NSString * displayLabel; 
-(NSArray *)usage;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(void)_initFromResponseDict;
-(NSNumber *)totalStorageInBytes;
-(NSURL *)manageStorageURL;
-(NSNumber *)usedStorageInBytes;
-(NSNumber *)availableStorageInBytes;
-(BOOL)hasMaxTier;
-(NSString *)displayLabel;
-(void)updateAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
