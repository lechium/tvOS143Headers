/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface REPriorityQueue : NSObject <NSCopying> {

	CFBinaryHeapRef _binaryHeap;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) id comparator;                          //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) id minimumObject; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(NSArray *)allObjects;
-(BOOL)containsObject:(id)arg1 ;
-(id)comparator;
-(void)insertObject:(id)arg1 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(void)enumerateObjects:(/*^block*/id)arg1 ;
-(id)minimumObject;
-(void)removeMinimumObject;
@end

