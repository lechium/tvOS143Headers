/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <libobjc.A.dylib/CLGyroCalibrationDatabaseProtocol.h>

@class NSString;

@interface CLGyroCalibrationDatabaseAdapter : CLNotifierServiceAdapter <CLGyroCalibrationDatabaseProtocol>

@property (assign,nonatomic) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)dumpDatabase:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(BOOL)syncgetWipeDatabase;
-(int)syncgetNumTemperatures;
-(BOOL)syncgetSupportsMiniCalibration;
-(BOOL)syncgetBiasFit:(SCD_Struct_CM31*)arg1 ;
-(void)beginService;
-(void)endService;
-(void)doAsync:(/*^block*/id)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1 ;
-(CLGyroCalibrationDatabase*)adaptee;
-(BOOL)syncgetGyroStatsWithBias:(SCD_Struct_CM1*)arg1 slope:(SCD_Struct_CM1*)arg2 l2Error:(SCD_Struct_CM1*)arg3 isDynamic:(BOOL)arg4 deltaBias:(SCD_Struct_CM1*)arg5 deltaSlope:(SCD_Struct_CM1*)arg6 deltaError:(SCD_Struct_CM1*)arg7 isDeltaDynamic:(BOOL)arg8 ;
-(int)syncgetMaxDynamicTemperature;
-(void)startFactoryGYTT;
-(int)syncgetNonFactoryRoundCount;
-(double)syncgetLastMiniCalibration;
-(BOOL)syncgetInsertWithBias:(const SCD_Struct_CM1*)arg1 variance:(const SCD_Struct_CM1*)arg2 temperature:(float)arg3 timestamp:(double)arg4 ;
@end

