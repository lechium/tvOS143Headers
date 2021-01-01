/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface _GEOConfigKeyHelper : NSObject <NSCopying> {

	id _lastValue;
	NSNumber* _keyNumber;
	NSString* _keyString;
	SCD_Struct_GE185* configKey;

}

@property (nonatomic,readonly) SCD_Struct_GE185* configKey; 
@property (nonatomic,readonly) NSNumber * keyNumber;                     //@synthesize keyNumber=_keyNumber - In the implementation block
@property (nonatomic,readonly) NSString * keyString;                     //@synthesize keyString=_keyString - In the implementation block
@property (nonatomic,readonly) BOOL valueChanged; 
+(id)helperForGEOConfigKey:(SCD_Struct_GE185*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)_currentValue;
-(SCD_Struct_GE185*)configKey;
-(BOOL)isEqualTo_GEOConfigKeyHelper:(id)arg1 ;
-(NSNumber *)keyNumber;
-(NSString *)keyString;
-(BOOL)valueChanged;
@end
