/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSNumber;

@interface _DASPriorityQueue : NSObject {

	unsigned long long _count;
	NSMutableDictionary* _objects;
	NSNumber* _lowestPriority;
	NSNumber* _highestPriority;

}

@property (nonatomic,retain) NSMutableDictionary * objects;              //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) unsigned long long count;                   //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSNumber * lowestPriority;                  //@synthesize lowestPriority=_lowestPriority - In the implementation block
@property (nonatomic,retain) NSNumber * highestPriority;                 //@synthesize highestPriority=_highestPriority - In the implementation block
+(id)priorityQueue;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(id)allObjects;
-(void)setCount:(unsigned long long)arg1 ;
-(NSMutableDictionary *)objects;
-(NSNumber *)highestPriority;
-(void)setObjects:(NSMutableDictionary *)arg1 ;
-(void)addObject:(id)arg1 withPriority:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 atPriority:(unsigned long long)arg2 ;
-(id)popFirst;
-(id)popLast;
-(NSNumber *)lowestPriority;
-(void)setLowestPriority:(NSNumber *)arg1 ;
-(void)setHighestPriority:(NSNumber *)arg1 ;
@end

