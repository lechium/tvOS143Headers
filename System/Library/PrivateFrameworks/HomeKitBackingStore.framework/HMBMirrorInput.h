/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMBLocalZone, HMBLocalSQLContextInputBlock, HMFActivity, NSString;

@interface HMBMirrorInput : HMFObject <HMFLogging> {

	HMBLocalZone* _localZone;
	HMBLocalSQLContextInputBlock* _block;
	HMFActivity* _activity;

}

@property (nonatomic,__weak,readonly) HMBLocalZone * localZone;                   //@synthesize localZone=_localZone - In the implementation block
@property (nonatomic,readonly) HMBLocalSQLContextInputBlock * block;              //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                            //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)frmSyncCommitWithMirrorInput:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)logCategory;
-(BOOL)frmSyncCommitWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(HMBLocalSQLContextInputBlock *)block;
-(HMFActivity *)activity;
-(id)abort;
-(id)logIdentifier;
-(HMBLocalZone *)localZone;
-(id)updateModel:(id)arg1 externalID:(id)arg2 externalData:(id)arg3 ;
-(id)removeModelWithModelID:(id)arg1 ;
-(id)commitWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)removeModelWithExternalID:(id)arg1 ;
-(id)initWithLocalZone:(id)arg1 block:(id)arg2 ;
@end

