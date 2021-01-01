/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BKSHIDEventDescriptor.h>

@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor {

	unsigned _biometricEventType;

}

@property (nonatomic,readonly) unsigned biometricEventType;              //@synthesize biometricEventType=_biometricEventType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptorWithBiometricEventType:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)describes:(id)arg1 ;
-(id)initWithBiometricEventType:(unsigned)arg1 ;
-(unsigned)biometricEventType;
@end

