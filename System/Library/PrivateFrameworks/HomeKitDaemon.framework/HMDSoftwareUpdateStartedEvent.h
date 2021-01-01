/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDSoftwareUpdateStartedEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _automaticUpdateEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAutomaticUpdateEnabled,nonatomic) BOOL automaticUpdateEnabled;              //@synthesize automaticUpdateEnabled=_automaticUpdateEnabled - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)eventUpdateStartedWithAutomaticUpdateEnabled:(BOOL)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(void)setAutomaticUpdateEnabled:(BOOL)arg1 ;
-(BOOL)isAutomaticUpdateEnabled;
@end

