/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_NSNotifyingWrapperMutableOrderedSet.h>

@class _NSFaultingMutableOrderedSetMutationMethods;

@interface _NSProxyWrapperMutableOrderedSet : _NSNotifyingWrapperMutableOrderedSet {

	_NSFaultingMutableOrderedSetMutationMethods* _mutationMethods;

}
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)intersectOrderedSet:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertObjects:(id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
@end
