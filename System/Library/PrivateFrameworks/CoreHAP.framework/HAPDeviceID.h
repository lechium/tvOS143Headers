/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface HAPDeviceID : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;

}

@property (nonatomic,copy,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIDString; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceIDString;
-(id)initWithDeviceIDData:(id)arg1 ;
-(BOOL)isEqualToDeviceID:(id)arg1 ;
-(id)initWithDeviceIDString:(id)arg1 ;
@end
