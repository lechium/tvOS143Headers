/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTEventHandler.h>
#import <libobjc.A.dylib/MTPerfBaseMeasurementTransformation.h>

@class NSString;

@interface MTLoadUrlEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MTLoadUrlEventHandlerDelegate> delegate; 
-(id)eventType;
-(id)knownFields;
-(id)eventVersion:(id)arg1 ;
-(id)xpSessionDuration:(id)arg1 ;
-(id)xpSamplingPercentageUsers:(id)arg1 ;
-(id)dnsServersIPAddresses:(id)arg1 ;
-(id)metricsDataWithPerfMeasurement:(id)arg1 ;
@end

