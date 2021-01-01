/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSMutableArray;

@interface RESortedDictionary : NSObject <NSCopying> {

	NSMutableDictionary* _values;
	NSMutableArray* _order;

}

@property (readonly) unsigned long long count; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
@end

