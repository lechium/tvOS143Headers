/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SADeviceMyriadConfiguration : SABaseClientBoundCommand

@property (assign,nonatomic) double deviceAdjustment; 
@property (assign,nonatomic) double deviceClass; 
@property (assign,nonatomic) double deviceDelay; 
@property (assign,nonatomic) double deviceTrumpDelay; 
@property (assign,nonatomic) double deviceVTEndtimeDistanceThreshold; 
+(id)deviceMyriadConfiguration;
+(id)deviceMyriadConfigurationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(double)deviceClass;
-(void)setDeviceClass:(double)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(double)deviceAdjustment;
-(void)setDeviceAdjustment:(double)arg1 ;
-(double)deviceDelay;
-(void)setDeviceDelay:(double)arg1 ;
-(double)deviceTrumpDelay;
-(void)setDeviceTrumpDelay:(double)arg1 ;
-(double)deviceVTEndtimeDistanceThreshold;
-(void)setDeviceVTEndtimeDistanceThreshold:(double)arg1 ;
@end

