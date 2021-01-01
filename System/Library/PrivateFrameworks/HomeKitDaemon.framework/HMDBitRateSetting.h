/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDBitRateSetting : HAPNumberParser <NSSecureCoding> {

	unsigned long long _bitrateSetting;

}

@property (nonatomic,readonly) unsigned long long bitrateSetting;              //@synthesize bitrateSetting=_bitrateSetting - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithSettings:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTLVData:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(unsigned long long)bitrateSetting;
-(id)initWithBitRateSetting:(unsigned long long)arg1 ;
@end

