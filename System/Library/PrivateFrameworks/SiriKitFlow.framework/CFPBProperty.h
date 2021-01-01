/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriKitFlow.framework/SiriKitFlow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriKitFlow/SiriKitFlow-Structs.h>
@class NSString, NSInvocation, NSArray;

@interface CFPBProperty : NSObject {

	NSString* _name;
	char _type;
	char _subType;
	NSInvocation* _setter;
	NSInvocation* _getter;
	NSInvocation* _has;
	NSInvocation* _count;
	NSInvocation* _convertToString;
	NSInvocation* _convertFromString;
	/*function pointer*/void* _toDictionaryReprFn;
	/*function pointer*/void* _fromDictionaryReprFn;
	NSString* _structName;
	NSArray* _structFields;
	unsigned long long _structSize;
	Class _objectType;
	Class _subObjectType;

}

@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char subType;                             //@synthesize subType=_subType - In the implementation block
@property (nonatomic,retain) Class objectType;                         //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,retain) Class subObjectType;                      //@synthesize subObjectType=_subObjectType - In the implementation block
@property (nonatomic,readonly) BOOL isObject; 
@property (nonatomic,readonly) BOOL isStruct; 
@property (nonatomic,readonly) BOOL canConvertFromString; 
+(id)pbPropertyFor:(objc_propertyRef)arg1 type:(Class)arg2 ;
+(id)getValidPropertiesForType:(Class)arg1 withCache:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(void)setType:(char)arg1 ;
-(char)type;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isObject;
-(char)subType;
-(void)setSubType:(char)arg1 ;
-(Class)objectType;
-(void)setObjectType:(Class)arg1 ;
-(id)initWith:(objc_propertyRef)arg1 type:(Class)arg2 ;
-(id)_parseStructDefinition:(id)arg1 ;
-(unsigned long long)getCountOfRepeatedValuesFromInstance:(id)arg1 ;
-(BOOL)instanceHasValue:(id)arg1 ;
-(BOOL)canConvertFromString;
-(BOOL)isStruct;
-(id)getObjValueFromInstance:(id)arg1 ;
-(void)setObjValue:(id)arg1 onInstance:(id)arg2 ;
-(id)getStructValueFromInstance:(id)arg1 ;
-(BOOL)setStructValue:(id)arg1 onInstance:(id)arg2 ;
-(id)getNumberValueFromInstance:(id)arg1 ;
-(void)setNumberValue:(id)arg1 onInstance:(id)arg2 ;
-(id)getPtrArrayValueFromInstance:(id)arg1 ;
-(Class)subObjectType;
-(void)setSubObjectType:(Class)arg1 ;
@end

