/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HKHealthStoreClientInterface <NSObject>
@required
-(void)clientRemote_presentAuthorizationWithRequestRecord:(id)arg1 completion:(/*^block*/id)arg2;
-(void)clientRemote_presentAuthorizationWithSession:(id)arg1 completion:(/*^block*/id)arg2;
-(void)clientRemote_unitPreferencesDidUpdate;
-(void)clientRemote_conceptIndexManagerDidBecomeQuiescentWithSamplesProcessedCount:(long long)arg1;

@end

