/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSSharedKeySet, NSMutableDictionary;

@interface NSSharedKeyDictionary : NSMutableDictionary {

	NSSharedKeySet* _keyMap;
	unsigned long long _count;
	id* _values;
	/*function pointer*/void* _ifkIMP;
	NSMutableDictionary* _sideDic;
	unsigned long long _mutations;
	BOOL _doKVO;

}
+(BOOL)supportsSecureCoding;
+(id)sharedKeyDictionaryWithKeySet:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS19*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(Class)classForCoder;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKeySet:(id)arg1 ;
-(id)keySet;
@end

