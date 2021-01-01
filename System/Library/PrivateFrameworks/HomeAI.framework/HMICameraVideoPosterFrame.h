/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMICameraVideoPosterFrame : NSObject <NSSecureCoding> {

	NSData* _data;
	unsigned long long _width;
	unsigned long long _height;
	SCD_Struct_HM3 _timeOffset;

}

@property (readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (readonly) SCD_Struct_HM3 timeOffset;              //@synthesize timeOffset=_timeOffset - In the implementation block
@property (readonly) unsigned long long width;               //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;              //@synthesize height=_height - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(SCD_Struct_HM3)timeOffset;
-(id)initWithData:(id)arg1 timeOffset:(SCD_Struct_HM3)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
@end

