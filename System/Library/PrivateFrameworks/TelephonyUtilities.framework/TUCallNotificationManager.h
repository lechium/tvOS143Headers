/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface TUCallNotificationManager : NSObject {

	NSMutableArray* _deferredNotificationBlocks;

}

@property (nonatomic,retain) NSMutableArray * deferredNotificationBlocks;              //@synthesize deferredNotificationBlocks=_deferredNotificationBlocks - In the implementation block
-(void)postNotificationsForCall:(id)arg1 usingComparisonCall:(id)arg2 afterUpdatesInBlock:(/*^block*/id)arg3 ;
-(void)deferNotificationsUntilAfterPerformingBlock:(/*^block*/id)arg1 ;
-(void)postNotificationsForCallContainer:(id)arg1 afterUpdatesInBlock:(/*^block*/id)arg2 ;
-(void)postNotificationsForCall:(id)arg1 afterUpdatesInBlock:(/*^block*/id)arg2 ;
-(void)statusChangedForCall:(id)arg1 ;
-(void)connectingChangedForCall:(id)arg1 ;
-(void)connectedChangedForCall:(id)arg1 ;
-(void)wantsHoldMusicChangedForCall:(id)arg1 ;
-(void)endpointOnCurrentDeviceChangedForCall:(id)arg1 ;
-(void)shouldSuppressRingtoneChangedForCall:(id)arg1 ;
-(void)faceTimeIDStatusChangedForCall:(id)arg1 ;
-(void)hardPauseDigitsStateChangedForCall:(id)arg1 ;
-(void)needsManualInCallSoundsChangedForCall:(id)arg1 ;
-(void)hasSentInvitationChangedForCall:(id)arg1 ;
-(void)isUsingBasebandChangedForCall:(id)arg1 ;
-(void)isOnHoldChangedForCall:(id)arg1 ;
-(void)isUplinkMutedChangedForCall:(id)arg1 ;
-(void)isSendingAudioChangedForCall:(id)arg1 ;
-(void)isSendingVideoChangedForCall:(id)arg1 ;
-(void)isThirdPartyVideoChangedForCall:(id)arg1 ;
-(void)mediaStalledChangedForCall:(id)arg1 ;
-(void)videoDegradedChangedForCall:(id)arg1 ;
-(void)videoPausedChangedForCall:(id)arg1 ;
-(void)destinationIDChangedForCall:(id)arg1 ;
-(void)displayContextChangedForCall:(id)arg1 ;
-(void)isEmergencyChangedForCall:(id)arg1 ;
-(void)audioPropertiesChangedForCall:(id)arg1 ;
-(void)ttyTypeChangedForCall:(id)arg1 ;
-(void)supportsTTYWithVoiceChangedForCall:(id)arg1 ;
-(void)cameraTypeChangedForCall:(id)arg1 ;
-(void)videoMirroredChangedForCall:(id)arg1 ;
-(void)remoteScreenOrientationChangedForCall:(id)arg1 ;
-(void)remoteScreenAspectRatioChangedForCall:(id)arg1 ;
-(void)prefersExclusiveAccessToCellularNetworkChangedForCall:(id)arg1 ;
-(void)remoteUplinkMutedChangedForCall:(id)arg1 ;
-(void)localSenderIdentityAccountUUIDChangedForCall:(id)arg1 ;
-(void)modelChangedForCall:(id)arg1 ;
-(void)providerContextChangedForCall:(id)arg1 ;
-(void)_postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)remoteParticipantHandlesChangedForCall:(id)arg1 ;
-(void)remoteAspectRatioChangedForCall:(id)arg1 ;
-(void)remoteVideoContentRectChangedForCall:(id)arg1 ;
-(void)remoteCameraOrientationChangedForCall:(id)arg1 ;
-(void)mediaPropertiesChangedForCall:(id)arg1 remoteAspectRatioDidChange:(BOOL)arg2 remoteCameraOrientationDidChange:(BOOL)arg3 ;
-(NSMutableArray *)deferredNotificationBlocks;
-(void)conferenceParticipantCallsChangedForCallContainer:(id)arg1 conferenceParticipantCalls:(id)arg2 ;
-(void)setDeferredNotificationBlocks:(NSMutableArray *)arg1 ;
-(void)_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)postNotificationsForCall:(id)arg1 usingComparisonCall:(id)arg2 ;
@end

