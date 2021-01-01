/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface WLKCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _stack;
	NSMutableDictionary* _dictionary;
	unsigned long long _countLimit;

}

@property (assign) unsigned long long countLimit; 
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)countLimit;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(void)_onQueueRemoveObjectForKey:(id)arg1 ;
@end
