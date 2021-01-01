/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying> {

	Class _defaultClass;
	NSMutableDictionary* _dict;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setDictionary:(id)arg1 ;
-(id)keys;
-(id)_copyWithZone:(NSZone*)arg1 isDeepCopy:(BOOL)arg2 ;
-(id)initWithDefaultClass:(Class)arg1 ;
-(id)_mutableCopyOfFinalDictionaryWithZone:(NSZone*)arg1 isDeepCopy:(BOOL)arg2 ;
-(id)finalDictionary;
-(id)deepCopy;
-(id)existingObjectForKey:(id)arg1 ;
@end

