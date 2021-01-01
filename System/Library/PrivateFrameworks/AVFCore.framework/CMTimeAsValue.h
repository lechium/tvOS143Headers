/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeAsValue : NSValue {

	SCD_Struct_AV6 _time;

}
+(BOOL)supportsSecureCoding;
+(id)valueWithCMTime:(SCD_Struct_AV6)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)doubleValue;
-(long long)longLongValue;
-(unsigned long long)unsignedLongLongValue;
-(const char*)objCType;
-(char)charValue;
-(unsigned char)unsignedCharValue;
-(short)shortValue;
-(unsigned short)unsignedShortValue;
-(int)intValue;
-(unsigned)unsignedIntValue;
-(long long)longValue;
-(unsigned long long)unsignedLongValue;
-(float)floatValue;
-(Class)classForCoder;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)getValue:(void*)arg1 ;
-(long long)integerValue;
-(unsigned long long)unsignedIntegerValue;
-(BOOL)isEqualToValue:(id)arg1 ;
-(SCD_Struct_AV6)CMTimeValue;
@end

