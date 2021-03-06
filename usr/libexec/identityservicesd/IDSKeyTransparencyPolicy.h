//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSKeyTransparencyPolicy : NSObject
{
}

- (_Bool)isKeyTransparencyUIEnabled;	// IMP=0x0000000100631694
- (_Bool)shouldSyncTrustCircleAfterSelfQueryForServiceIdentifier:(id)arg1;	// IMP=0x00000001006312dc
- (_Bool)isKeyTransparencySFAnalyticsEnabled;	// IMP=0x0000000100631198
- (_Bool)isKeyTransparencyRTCAnalyticsEnabled;	// IMP=0x000000010063103c
- (_Bool)isKeyTransparencyAnalyticsEnabled;	// IMP=0x0000000100630ef8
- (unsigned long long)keyTransparencyMaximumVerificationsPerXPCActivity;	// IMP=0x0000000100630dc4
- (unsigned long long)keyTransparencyXPCActivityIntervalInSeconds;	// IMP=0x0000000100630c70
- (_Bool)isKeyTransparencyXPCActivityEnabled;	// IMP=0x0000000100630b2c
- (_Bool)isKeyTransparencyAccountKeyCircleEnabled;	// IMP=0x00000001006309a0
- (_Bool)isKeyTransparencyCloudKitCircleEnabled;	// IMP=0x0000000100630814
- (_Bool)isKeyTransparencyTrustCircleEnabled;	// IMP=0x00000001006307b0
- (_Bool)isKeyTransparencyEnabledForServiceType:(id)arg1;	// IMP=0x0000000100630728
- (_Bool)isKeyTransparencyEnabledForServiceIdentifier:(id)arg1;	// IMP=0x000000010063068c
- (long long)_keyTransparencyEnablementLevelFromServerBag;	// IMP=0x0000000100630554
- (_Bool)_isKeyTransparencyEnabledViaServerBag;	// IMP=0x0000000100630510
- (_Bool)_isKeyTransparencyEnabledViaDefaults;	// IMP=0x00000001006304a8
- (_Bool)isKeyTransparencyTrustCircleAllowedWithoutEnrollment;	// IMP=0x0000000100630488
- (_Bool)isKeyTransparencyPeerVerificationAllowedWithoutEnrollment;	// IMP=0x0000000100630444
- (_Bool)isKeyTransparencyEnabled;	// IMP=0x00000001006303dc

@end

