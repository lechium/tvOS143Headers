/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NetworkAnalyticsStateRelay, NSObject;

@interface WiFiViabilityMonitor : NSObject {

	unsigned _prevWiFiViability;
	id _cellFallbackObserver;
	id _cellFallbackAdminObserver;
	NetworkAnalyticsStateRelay* _wifiRelay;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithQueue:(id)arg1 ;
-(id)getState;
-(BOOL)_isCellFallbackAdminDisabled;
-(long long)_currentRNFAdvice;
-(unsigned)currentWiFiViabilityFlags;
-(void)possiblySignificantWiFiChange;
@end

