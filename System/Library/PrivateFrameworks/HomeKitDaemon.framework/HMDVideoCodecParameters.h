/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMDVideoCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSArray* _h264Profiles;
	NSArray* _levels;
	NSArray* _packetizationModes;

}

@property (nonatomic,copy,readonly) NSArray * h264Profiles;                    //@synthesize h264Profiles=_h264Profiles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * levels;                          //@synthesize levels=_levels - In the implementation block
@property (nonatomic,copy,readonly) NSArray * packetizationModes;              //@synthesize packetizationModes=_packetizationModes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)levels;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(id)tlvData;
-(NSArray *)h264Profiles;
-(NSArray *)packetizationModes;
-(id)initWithProfiles:(id)arg1 levels:(id)arg2 packetizationModes:(id)arg3 ;
@end

