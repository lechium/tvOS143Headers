//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GKAchievementInternal, GKAuthenticateResponse, GKChallengeInternal, GKCloudPlayer, GKFriendRequestInternal, GKGameInternal, GKGameSession, GKScoreInternal, NSArray, NSData, NSDictionary, NSError, NSString;

@protocol GKClientProtocol <NSObject>
- (oneway void)setLogBits:(int)arg1;
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (oneway void)achievementSelected:(GKAchievementInternal *)arg1;
- (oneway void)scoreSelected:(GKScoreInternal *)arg1;
- (oneway void)challengeCompleted:(GKChallengeInternal *)arg1;
- (oneway void)challengeReceived:(GKChallengeInternal *)arg1;
- (oneway void)completedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)receivedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)fetchTurnBasedData;
- (oneway void)session:(GKGameSession *)arg1 didReceiveMessage:(NSString *)arg2 withData:(NSData *)arg3 fromPlayer:(GKCloudPlayer *)arg4;
- (oneway void)session:(GKGameSession *)arg1 didReceiveData:(NSData *)arg2 fromPlayer:(GKCloudPlayer *)arg3;
- (oneway void)session:(GKGameSession *)arg1 player:(GKCloudPlayer *)arg2 didSaveData:(NSData *)arg3;
- (oneway void)session:(GKGameSession *)arg1 player:(GKCloudPlayer *)arg2 didChangeConnectionState:(long long)arg3;
- (oneway void)session:(GKGameSession *)arg1 removedPlayer:(GKCloudPlayer *)arg2;
- (oneway void)session:(GKGameSession *)arg1 addedPlayer:(GKCloudPlayer *)arg2;
- (oneway void)localPlayerAcceptedCustomTournamentInvite;
- (oneway void)didReceiveData:(NSData *)arg1 reliably:(_Bool)arg2 forRecipients:(NSArray *)arg3 fromSender:(NSString *)arg4;
- (oneway void)didDisconnectFromParticipantWithID:(NSString *)arg1;
- (oneway void)didConnectToParticipantWithID:(NSString *)arg1;
- (oneway void)relayPushNotification:(NSDictionary *)arg1;
- (oneway void)cancelGameInvite:(NSString *)arg1;
- (oneway void)declineInviteWithNotification:(NSDictionary *)arg1;
- (oneway void)acceptInviteWithNotification:(NSDictionary *)arg1;
- (oneway void)acceptMultiplayerGameInvite;
- (oneway void)respondedToNearbyInvite:(NSDictionary *)arg1;
- (oneway void)friendRequestSelected:(GKFriendRequestInternal *)arg1;
- (oneway void)requestSandboxExtension:(void (^)(NSString *))arg1;
- (oneway void)completedOptimisticAuthenticationWithResponse:(GKAuthenticateResponse *)arg1 error:(NSError *)arg2;
- (oneway void)authenticatedPlayersDidChange:(NSArray *)arg1 reply:(void (^)(void))arg2;
- (oneway void)setCurrentGame:(GKGameInternal *)arg1 serverEnvironment:(long long)arg2 reply:(void (^)(void))arg3;
- (oneway void)setPreferencesValues:(NSDictionary *)arg1;
- (oneway void)resetNetworkActivity;
- (oneway void)endNetworkActivity;
- (oneway void)beginNetworkActivity;
@end

