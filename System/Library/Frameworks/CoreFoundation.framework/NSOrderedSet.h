/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)orderedSetWithArray:(id)arg1 ;
+(id)newOrderedSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)orderedSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)orderedSetWithObject:(id)arg1 ;
+(id)orderedSet;
+(id)orderedSetWithObjects:(id)arg1 ;
+(id)orderedSetWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)orderedSetWithArray:(id)arg1 range:(NSRange)arg2 ;
+(id)orderedSetWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)orderedSetWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)orderedSetWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
+(id)orderedSetWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)orderedSetWithOrderedSet:(id)arg1 ;
+(id)orderedSetWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)orderedSetWithSet:(id)arg1 ;
-(id)bs_filter:(/*^block*/id)arg1 ;
-(id)bs_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(BOOL)bs_containsObjectPassingTest:(/*^block*/id)arg1 ;
-(id)bs_map:(/*^block*/id)arg1 ;
-(id)bs_compactMap:(/*^block*/id)arg1 ;
-(id)bs_reduce:(id)arg1 block:(/*^block*/id)arg2 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)differenceFromOrderedSet:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)differenceFromOrderedSet:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(/*^block*/id)arg3 ;
-(id)differenceFromOrderedSet:(id)arg1 ;
-(id)orderedSetByApplyingDifference:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)_countForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 ;
-(BOOL)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4 ;
-(id)filteredOrderedSetUsingPredicate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectEnumerator;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS19*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)allObjects;
-(unsigned long long)countForObject:(id)arg1 ;
-(id)set;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(id)initWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithArray:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)sortedArrayFromRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(id)initWithObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 ;
-(id)array;
-(void)getObjects:(id*)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(BOOL)containsObject:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)countForObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)firstObject;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)lastObject;
-(id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)reverseObjectEnumerator;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithObjects:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(BOOL)isNSOrderedSet__;
-(BOOL)intersectsOrderedSet:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(BOOL)isSubsetOfOrderedSet:(id)arg1 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(BOOL)isEqualToOrderedSet:(id)arg1 ;
-(id)reversedOrderedSet;
@end

