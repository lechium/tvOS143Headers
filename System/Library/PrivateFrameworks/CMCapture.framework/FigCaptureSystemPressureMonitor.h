/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface FigCaptureSystemPressureMonitor : NSObject {

	/*^block*/id _systemPressureLevelChangedHandler;
	NSObject*<OS_dispatch_queue> _systemPressureLevelChangedHandlerQueue;
	int _thermalPressureNotificationToken;
	int _systemPressureLevelByThermalPressureLevel[5];
	int _currentSystemPressureFromThermalPressure;
	SCD_Struct_BW51 _systemPressureLevelByProjectorTemperature[5];
	int _currentSystemPressureFromProjectorTemperature;
	NSObject*<OS_dispatch_source> _pearlPollTimer;
	SCD_Struct_BW7 _pollingTimerStopTime;

}

@property (copy) id systemPressureLevelChangedHandler; 
@property (readonly) int systemPressureLevelFromPearlProjector; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)_registerForThermalNotifications;
-(void)_releasePearlProjectorPollingResources;
-(void)_updateSystemPressureForThermalPressureAndCallChangeHandler:(BOOL)arg1 ;
-(void)_callChangeHandler;
-(void)_updateWithPearlProjectorTemperature:(float)arg1 ;
-(id)systemPressureLevelChangedHandler;
-(void)setSystemPressureLevelChangedHandler:(id)arg1 ;
-(void)callSystemPressureLevelChangedHandler;
-(int)systemPressureLevelFromPearlProjector;
-(void)updateWithPearlProjectorTemperature:(float)arg1 ;
-(void)startMonitoringPearlProjectorTemperatureUntilNominal;
@end

