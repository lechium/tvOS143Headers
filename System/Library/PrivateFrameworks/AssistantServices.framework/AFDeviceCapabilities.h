/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface AFDeviceCapabilities : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _serializedBackingStore;
	long long _voiceTriggerEnabled;
	long long _seymourEnabled;

}

@property (nonatomic,readonly) long long voiceTriggerEnabled;              //@synthesize voiceTriggerEnabled=_voiceTriggerEnabled - In the implementation block
@property (nonatomic,readonly) long long seymourEnabled;                   //@synthesize seymourEnabled=_seymourEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)voiceTriggerEnabled;
-(id)initWithSerializedBackingStore:(id)arg1 ;
-(id)serializedBackingStore;
-(id)initWithVoiceTriggerEnabled:(long long)arg1 seymourEnabled:(long long)arg2 ;
-(long long)seymourEnabled;
@end
