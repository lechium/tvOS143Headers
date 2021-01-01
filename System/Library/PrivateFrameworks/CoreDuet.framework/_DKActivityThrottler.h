/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, _DKSimpleKeyValueStore;
@class NSCountedSet, NSCache, NSObject;

@interface _DKActivityThrottler : NSObject {

	NSCountedSet* _minimumIntervalScheduledActions;
	NSCountedSet* _delayScheduledActions;
	NSCache* _cache;
	NSObject*<OS_dispatch_queue> _storeQueue;
	id<_DKSimpleKeyValueStore> _store;

}
-(id)description;
@end

