/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface __NSDictionaryM : NSMutableDictionary {

	SCD_Struct_NS36* storage;
	A{__cow_state_t}* cow;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)dealloc;
-(id)mutableCopy;
-(unsigned long long)count;
-(void)removeAllObjects;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS19*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)_mutate;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)_cfMutableCopy;
-(double)_clumpingFactor;
-(double)_clumpingInterestingThreshold;
-(void)__setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
@end
