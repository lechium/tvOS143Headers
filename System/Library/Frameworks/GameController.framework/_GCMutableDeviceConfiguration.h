/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <GameController/_GCDeviceConfiguration.h>

@class NSSet;

@interface _GCMutableDeviceConfiguration : _GCDeviceConfiguration

@property (assign) unsigned long long priority; 
@property (getter=isTransient) BOOL transient; 
@property (copy) id<NSObject><NSCopying><NSSecureCoding> deviceIdentifier; 
@property (copy) NSSet * deviceDependencies; 
@property (copy) id<NSObject><NSCopying><NSSecureCoding> deviceBuilderIdentifier; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)setTransient:(BOOL)arg1 ;
-(void)setDeviceIdentifier:(id<NSObject><NSCopying><NSSecureCoding>)arg1 ;
-(id)_initWithIdentifier:(id)arg1 attributes:(id)arg2 ;
-(void)setValue:(id)arg1 forAttribute:(id)arg2 ;
-(void)setDeviceDependencies:(NSSet *)arg1 ;
-(void)setDeviceBuilderIdentifier:(id<NSObject><NSCopying><NSSecureCoding>)arg1 ;
@end
