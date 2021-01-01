/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HMDBackingStore;


@protocol HMDAccountManager <NSObject>
@property (nonatomic,retain) HMDBackingStore * backingStore; 
@optional
-(id)primaryHandleForAccount:(id)arg1;

@required
-(HMDBackingStore *)backingStore;
-(void)setBackingStore:(id)arg1;
-(BOOL)shouldCacheAccount:(id)arg1;
-(BOOL)shouldSyncAccount:(id)arg1;
-(BOOL)shouldSyncDevice:(id)arg1;
-(BOOL)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;
-(BOOL)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;

@end
