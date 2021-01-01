//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKReporter : NSObject
{
    double _authenticateResponseTimestamp;	// 8 = 0x8
    double _inviteeUILaunchTimestamp;	// 16 = 0x10
    double _connectingDevicesTimestamp;	// 24 = 0x18
    double _programaticInviteTimestamp;	// 32 = 0x20
    double _appLaunchTimestamp;	// 40 = 0x28
    double _totalInviteReceivedTimestamp;	// 48 = 0x30
    double _messageInviteProcessingTimestamp;	// 56 = 0x38
}

+ (id)reporter;	// IMP=0x00000001001acab0
@property(nonatomic) double messageInviteProcessingTimestamp; // @synthesize messageInviteProcessingTimestamp=_messageInviteProcessingTimestamp;
@property(nonatomic) double totalInviteReceivedTimestamp; // @synthesize totalInviteReceivedTimestamp=_totalInviteReceivedTimestamp;
@property(nonatomic) double appLaunchTimestamp; // @synthesize appLaunchTimestamp=_appLaunchTimestamp;
@property(nonatomic) double programaticInviteTimestamp; // @synthesize programaticInviteTimestamp=_programaticInviteTimestamp;
@property(nonatomic) double connectingDevicesTimestamp; // @synthesize connectingDevicesTimestamp=_connectingDevicesTimestamp;
@property(nonatomic) double inviteeUILaunchTimestamp; // @synthesize inviteeUILaunchTimestamp=_inviteeUILaunchTimestamp;
@property(nonatomic) double authenticateResponseTimestamp; // @synthesize authenticateResponseTimestamp=_authenticateResponseTimestamp;
- (void)reportDurationForEventType:(id)arg1 withStartTimestamp:(double)arg2;	// IMP=0x00000001001ad938
- (void)reportOnboardingEventForType:(id)arg1 withStartTimestamp:(double)arg2;	// IMP=0x00000001001ad840
- (void)reportScreenTimeEventForType:(id)arg1 withStartTimestamp:(double)arg2;	// IMP=0x00000001001ad748
- (void)reportTotalInviteReceivedDuration;	// IMP=0x00000001001ad6d4
- (void)reportAppLaunchDuration;	// IMP=0x00000001001ad660
- (void)recordAppLaunchAndTotalTimestamp;	// IMP=0x00000001001ad620
- (void)reportProgramaticInviteDuration;	// IMP=0x00000001001ad5ac
- (void)recordProgramaticInviteTimestamp;	// IMP=0x00000001001ad580
- (void)reportConnectingDevicesDuration;	// IMP=0x00000001001ad50c
- (void)recordConnectingDevicesTimestamp;	// IMP=0x00000001001ad4e0
- (void)reportMessageInviteProcessingDuration;	// IMP=0x00000001001ad46c
- (void)recordMessageInviteProcessingTimestamp;	// IMP=0x00000001001ad440
- (void)reportInviteeUILaunchDuration;	// IMP=0x00000001001ad3cc
- (void)recordInviteeUILaunchTimestamp;	// IMP=0x00000001001ad3a0
- (void)reportAuthenticateResponseDuration;	// IMP=0x00000001001ad32c
- (void)recordAuthenticateResponseTimestamp;	// IMP=0x00000001001ad300
- (void)reportTournamentAnalyticsWithDomain:(id)arg1 type:(id)arg2 tournamentType:(id)arg3 replayCount:(id)arg4 friendCount:(id)arg5 tournamentID:(id)arg6 bundleID:(id)arg7 inviteeCount:(id)arg8;	// IMP=0x00000001001ad18c
- (_Bool)isTimeSpanValid:(double)arg1 maxDuration:(double)arg2;	// IMP=0x00000001001ad174
- (void)reportEvent:(id)arg1 type:(id)arg2 scoreRank:(id)arg3;	// IMP=0x00000001001ad0d0
- (void)reportEvent:(id)arg1 type:(id)arg2 count:(id)arg3;	// IMP=0x00000001001ad02c
- (void)reportEvent:(id)arg1 type:(id)arg2 friendsPlayedThisGame:(id)arg3;	// IMP=0x00000001001acf88
- (void)reportEvent:(id)arg1 type:(id)arg2 payload:(id)arg3;	// IMP=0x00000001001acec0
- (void)reportEvent:(id)arg1 type:(id)arg2 bundleID:(id)arg3;	// IMP=0x00000001001ace1c
- (void)reportEvent:(id)arg1 type:(id)arg2 startTime:(id)arg3;	// IMP=0x00000001001acd00
- (void)reportEvent:(id)arg1 type:(id)arg2;	// IMP=0x00000001001acc68
- (void)reportEvent:(id)arg1 payload:(id)arg2;	// IMP=0x00000001001acb14

@end

