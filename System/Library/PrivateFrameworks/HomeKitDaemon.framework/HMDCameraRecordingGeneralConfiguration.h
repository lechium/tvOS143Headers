/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray;

@interface HMDCameraRecordingGeneralConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSNumber* _prebufferLength;
	unsigned long long _eventTriggerOptions;
	NSArray* _mediaContainerConfigurations;

}

@property (nonatomic,copy,readonly) NSNumber * prebufferLength;                          //@synthesize prebufferLength=_prebufferLength - In the implementation block
@property (nonatomic,readonly) unsigned long long eventTriggerOptions;                   //@synthesize eventTriggerOptions=_eventTriggerOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaContainerConfigurations;              //@synthesize mediaContainerConfigurations=_mediaContainerConfigurations - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(id)tlvData;
-(NSNumber *)prebufferLength;
-(unsigned long long)eventTriggerOptions;
-(NSArray *)mediaContainerConfigurations;
-(id)initWithPrebufferLength:(id)arg1 eventTriggerOptions:(unsigned long long)arg2 mediaContainerConfigurations:(id)arg3 ;
@end

