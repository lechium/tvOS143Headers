/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_DKProtobufConverting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CDEventStreamProperties, NSString, _DKObjectType;

@interface _DKEventStream : NSObject <_DKProtobufConverting, NSSecureCoding> {

	_CDEventStreamProperties* _eventProperties;
	NSString* _name;
	_DKObjectType* _eventValueType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) _CDEventStreamProperties * eventProperties;              //@synthesize eventProperties=_eventProperties - In the implementation block
@property (readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (readonly) _DKObjectType * eventValueType;                          //@synthesize eventValueType=_eventValueType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fromPBCodable:(id)arg1 ;
+(id)eventStreamWithName:(id)arg1 ;
+(id)eventStreamWithName:(id)arg1 valueType:(id)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toPBCodable;
-(id)initWithName:(id)arg1 valueType:(id)arg2 cache:(id)arg3 ;
-(_DKObjectType *)eventValueType;
-(_CDEventStreamProperties *)eventProperties;
@end

