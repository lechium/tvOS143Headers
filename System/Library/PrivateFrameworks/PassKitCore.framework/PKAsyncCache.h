/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PassKitCore/PassKitCore-Structs.h>
@class NSCache, NSMapTable, NSMutableDictionary;

@interface PKAsyncCache : NSObject {

	os_unfair_lock_s _lock;
	NSCache* _itemByKey;
	NSMapTable* _weakItemByKey;
	NSMutableDictionary* _outstandingRetrievals;

}
-(id)init;
-(id)initWithCache:(id)arg1 ;
-(void)_executeRetrievalBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)retrieveItemForKey:(id)arg1 synchronous:(BOOL)arg2 retrievalBlock:(/*^block*/id)arg3 deliveryBlock:(/*^block*/id)arg4 ;
@end

