/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSPropertyList.h>

@class NSSet, NSDictionary;

@interface LSBundleInfoCachedValues : LSPropertyList {

	NSSet* _keys;
	NSDictionary* _values;

}

@property (nonatomic,readonly) NSSet * allKeys;                       //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSDictionary * rawValues;              //@synthesize values=_values - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(NSSet *)allKeys;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(id)objectsForKeys:(id)arg1 ;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(NSDictionary *)rawValues;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(id)_initWithKeys:(id)arg1 forDictionary:(id)arg2 ;
-(id)objectForKey:(id)arg1 ofType:(Class)arg2 ;
-(id)arrayForKey:(id)arg1 withValuesOfClass:(Class)arg2 ;
-(id)dictionaryForKey:(id)arg1 valuesOfClass:(Class)arg2 ;
-(id)_expensiveDictionaryRepresentation;
@end

