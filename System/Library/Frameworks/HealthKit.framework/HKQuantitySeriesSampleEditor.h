/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKHealthStore, NSUUID, HKTaskServerProxyProvider, NSMutableSet, HKQuantitySample, NSString;

@interface HKQuantitySeriesSampleEditor : NSObject <_HKXPCExportable> {

	HKHealthStore* _healthStore;
	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;
	os_unfair_lock_s _lock;
	long long _state;
	NSMutableSet* _datesIntervalsToRemove;
	HKQuantitySample* _quantitySample;

}

@property (nonatomic,readonly) long long unitTest_state; 
@property (copy,readonly) HKQuantitySample * quantitySample;              //@synthesize quantitySample=_quantitySample - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
-(NSString *)description;
-(void)dealloc;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(void)discard;
-(long long)unitTest_state;
-(HKQuantitySample *)quantitySample;
-(BOOL)_performWithError:(id*)arg1 stateValidator:(/*^block*/id)arg2 lockedBlock:(/*^block*/id)arg3 ;
-(id)initWithHealthStore:(id)arg1 quantitySample:(id)arg2 ;
-(BOOL)removeQuantityForDateInterval:(id)arg1 error:(id*)arg2 ;
-(void)commitWithCompletion:(/*^block*/id)arg1 ;
@end

