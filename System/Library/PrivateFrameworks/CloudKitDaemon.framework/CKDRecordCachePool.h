/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CKDRecordCachePool : NSObject {

	NSMutableDictionary* _pools;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _recordExpiryQueue;

}

@property (nonatomic,retain) NSMutableDictionary * pools;                                 //@synthesize pools=_pools - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recordExpiryQueue;              //@synthesize recordExpiryQueue=_recordExpiryQueue - In the implementation block
+(id)sharedPool;
+(void)performWithClientContext:(id)arg1 scope:(long long)arg2 block:(/*^block*/id)arg3 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)acquireCacheWithContext:(id)arg1 scope:(long long)arg2 ;
-(void)releaseCache:(id)arg1 ;
-(NSMutableDictionary *)pools;
-(NSObject*<OS_dispatch_queue>)recordExpiryQueue;
-(void)_purgeRecordCachesForApplicationContainerPaths:(id)arg1 expiryDate:(id)arg2 ;
-(id)_poolForContext:(id)arg1 ;
-(void)setPools:(NSMutableDictionary *)arg1 ;
-(void)setRecordExpiryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

