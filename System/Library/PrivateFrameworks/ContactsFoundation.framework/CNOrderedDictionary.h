/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSMutableArray, NSArray;

@interface CNOrderedDictionary : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _dictionary;
	NSMutableArray* _orderedKeys;

}

@property (copy,readonly) NSArray * allKeys; 
@property (copy,readonly) NSArray * allObjects; 
+(id)dictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)orderedDictionary;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSArray *)allObjects;
-(id)objectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSArray *)allKeys;
@end

