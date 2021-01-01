/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface _CLRangingPeer : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) unsigned long long macAddress; 
@property (nonatomic,copy,readonly) NSData * secureRangingKeyID; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)uintMacAddressFromString:(id)arg1 ;
+(id)hexStringMacAddressFromUInt:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMacAddressAsUInt:(unsigned long long)arg1 secureRangingKeyID:(id)arg2 ;
-(id)initWithMacAddressAsString:(id)arg1 secureRangingKeyID:(id)arg2 ;
-(unsigned long long)macAddress;
-(id)getMacAddressAsString;
-(NSData *)secureRangingKeyID;
-(BOOL)isEqualToPeer:(id)arg1 ;
-(id)initWithMacAddressAsData:(id)arg1 secureRangingKeyID:(id)arg2 ;
@end
