//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (ADTimerStore)
+ (id)_ad_timerStoreErrorWithCode:(long long)arg1;	// IMP=0x00000001000e80b4
+ (id)_ad_alarmStoreErrorWithCode:(long long)arg1;	// IMP=0x0000000100122b94
+ (id)ad_calendarErrorWithCode:(long long)arg1;	// IMP=0x00000001001a5f9c
+ (id)ad_siriTaskHandlerAceTranslationFailureError;	// IMP=0x00000001001e2f0c
+ (id)ad_siriTaskHandlerErrorWithCode:(long long)arg1;	// IMP=0x00000001001e2ed0
- (_Bool)ad_isNetworkDownError;	// IMP=0x0000000100122a58
- (_Bool)ad_requiresDampedRetry:(long long *)arg1;	// IMP=0x0000000100122908
- (_Bool)ad_isPeerRemoteError;	// IMP=0x000000010012283c
- (_Bool)ad_isPeerNotNearbyError;	// IMP=0x00000001001227bc
- (_Bool)ad_isPeerConnectionError;	// IMP=0x00000001001226dc
- (_Bool)ad_isRetryableSessionError;	// IMP=0x00000001001225c0
- (_Bool)ad_isUnrecoverablePeerError;	// IMP=0x0000000100122544
- (_Bool)ad_isStricterRetryableConnectionError;	// IMP=0x0000000100122448
- (_Bool)ad_isStricterUnreachableError;	// IMP=0x0000000100122360
- (_Bool)ad_isRetryableConnectionError;	// IMP=0x0000000100122194
- (_Bool)ad_isUnreachableError;	// IMP=0x0000000100121fa0
- (_Bool)ad_isAssistantNotReadyError;	// IMP=0x0000000100121f5c
- (_Bool)ad_isInAssistantErrorDomain;	// IMP=0x0000000100121f04
@end

