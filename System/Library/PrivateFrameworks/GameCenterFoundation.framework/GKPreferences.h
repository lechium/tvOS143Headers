/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@class NSDictionary, NSString, NSDate;

@interface GKPreferences : NSObject {

	BOOL _shouldSynchronizeOnNextRead;
	BOOL _webKitInspectElementEnabled;
	NSDictionary* _overrideValues;

}

@property (assign,nonatomic,__weak) id<GKPreferencesDelegate> preferencesDelegate; 
@property (getter=isStoreDemoModeEnabled,nonatomic,readonly) BOOL storeDemoModeEnabled; 
@property (getter=isAddingFriendsRestricted,nonatomic,readonly) BOOL addingFriendsRestricted; 
@property (getter=isMultiplayerGamingRestricted,nonatomic,readonly) BOOL multiplayerGamingRestricted; 
@property (getter=isAppInstallationRestricted,nonatomic,readonly) BOOL appInstallationRestricted; 
@property (getter=isAccountModificationRestricted,nonatomic,readonly) BOOL accountModificationRestricted; 
@property (getter=isGameCenterRestricted,nonatomic,readonly) BOOL gameCenterRestricted; 
@property (getter=isSharingRestricted,nonatomic,readonly) BOOL sharingRestricted; 
@property (getter=isCustomizedCommunicationRestricted,nonatomic,readonly) BOOL customizedCommunicationRestricted; 
@property (getter=isNearbyMultiplayerRestricted,nonatomic,readonly) BOOL nearbyMultiplayerRestricted; 
@property (getter=isProfileModificationRestricted,nonatomic,readonly) BOOL profileModificationRestricted; 
@property (getter=isProfilePrivacyModificationRestricted,nonatomic,readonly) BOOL profilePrivacyModificationRestricted; 
@property (nonatomic,readonly) unsigned long long multiplayerAllowedPlayerType; 
@property (assign,nonatomic) BOOL _shouldSynchronizeOnNextRead;                                                                      //@synthesize shouldSynchronizeOnNextRead=_shouldSynchronizeOnNextRead - In the implementation block
@property (copy) NSDictionary * overrideValues;                                                                                      //@synthesize overrideValues=_overrideValues - In the implementation block
@property (assign,nonatomic) long long environment; 
@property (nonatomic,retain) NSString * storeBagURL; 
@property (assign,nonatomic) unsigned long long mescalSetupRetries; 
@property (assign,nonatomic) long long networkManagerStateOverride; 
@property (assign,nonatomic) NSString * networkManagerUserOverride; 
@property (assign,nonatomic) unsigned long long loginDisableThreshold; 
@property (assign,nonatomic) unsigned long long coreRecentUpperLimit; 
@property (assign,nonatomic) unsigned long long coreRecentMultiplier; 
@property (assign,nonatomic) BOOL allowUnsignedBag; 
@property (assign,nonatomic) BOOL useTestProtocols; 
@property (assign,nonatomic) BOOL enterSandbox; 
@property (assign,nonatomic) BOOL forceDefaultNickname; 
@property (assign,nonatomic) BOOL forceDefaultPrivacy; 
@property (assign,nonatomic) BOOL forceUnderage; 
@property (assign,nonatomic) double terminationInterval; 
@property (assign,nonatomic) double garbageCollectionInterval; 
@property (assign,nonatomic) double minimumCacheTTL; 
@property (assign,nonatomic) double cacheTTLOverride; 
@property (assign,nonatomic) double operationTimeout; 
@property (assign,nonatomic) double operationRetryDelay; 
@property (assign,nonatomic) unsigned long long operationRetryCount; 
@property (assign,nonatomic) double debugRequestTimeout; 
@property (assign,getter=isNotificationCenterEnabled,nonatomic) BOOL notificationCenterEnabled; 
@property (assign,nonatomic) BOOL notificationBadgesEnabled; 
@property (assign,nonatomic) BOOL notificationSoundsEnabled; 
@property (assign,nonatomic) BOOL notificationAlertsEnabled; 
@property (assign,nonatomic) BOOL verboseLogging; 
@property (assign,nonatomic) unsigned logFilter; 
@property (assign,getter=isComprehensiveLoggingEnabled,nonatomic) BOOL comprehensiveLoggingEnabled; 
@property (nonatomic,copy) NSString * testRunID; 
@property (assign,getter=isClipGestureEnabled,nonatomic) BOOL clipGestureEnabled; 
@property (assign,nonatomic) BOOL forceRelay; 
@property (assign,nonatomic) BOOL preemptiveRelay; 
@property (assign,nonatomic) long long pushEnvironment; 
@property (assign,nonatomic) long long pipeliningSetting; 
@property (assign,nonatomic) BOOL restrictToAutomatch; 
@property (assign,nonatomic) unsigned long long recentNumberOfPlayers; 
@property (assign,nonatomic) unsigned long long maxPlayersP2P; 
@property (assign,nonatomic) unsigned long long maxPlayersHosted; 
@property (assign,nonatomic) unsigned long long maxPlayersTurnBased; 
@property (assign,nonatomic) unsigned long long maxGameStateSizeTurnBased; 
@property (assign,nonatomic) unsigned long long exchangeDataMaximumSize; 
@property (assign,nonatomic) unsigned long long exchangeMaxInitiatedExchangesPerPlayer; 
@property (nonatomic,readonly) BOOL HTTPShouldUsePipelining; 
@property (nonatomic,readonly) unsigned long long maxDefaultPlayersP2P; 
@property (nonatomic,readonly) unsigned long long maxDefaultPlayersHosted; 
@property (nonatomic,readonly) unsigned long long maxDefaultPlayersTurnBased; 
@property (nonatomic,readonly) unsigned long long maxDefaultGameStateSizeTurnBased; 
@property (nonatomic,readonly) unsigned long long exchangeDataDefaultMaximumSize; 
@property (nonatomic,readonly) unsigned long long exchangeDefaultMaxInitiatedExchangesPerPlayer; 
@property (assign,nonatomic) BOOL useInternalHeader; 
@property (assign,getter=isWebKitInspectElementEnabled,nonatomic) BOOL webKitInspectElementEnabled;                                  //@synthesize webKitInspectElementEnabled=_webKitInspectElementEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAnnotateImageUsage; 
@property (assign,nonatomic) BOOL shouldTrackAtlasImageUsage; 
@property (assign,nonatomic) BOOL shouldUseTestIcons; 
@property (assign,nonatomic) BOOL shouldLinkPlayerToICloud; 
@property (assign,nonatomic) BOOL shouldLinkPlayerToTwitter; 
@property (assign,nonatomic) BOOL shouldLinkPlayerToFacebook; 
@property (nonatomic,readonly) BOOL shouldDisallowInvitesFromStrangers; 
@property (assign,nonatomic) BOOL shouldAllowNearbyMultiplayer; 
@property (assign,nonatomic) BOOL shouldAddPlayerInfoToAddressBook; 
@property (nonatomic,readonly) BOOL shouldAllowSharing; 
@property (nonatomic,readonly) BOOL shouldAllowCustomCommunication; 
@property (assign,nonatomic) unsigned long long maxRecentPlayersCount; 
@property (assign,nonatomic) double maxRecentPlayersTime; 
@property (assign,nonatomic) BOOL newDashboardUI; 
@property (assign,nonatomic) BOOL arcadeDashboardSection; 
@property (assign,nonatomic) BOOL accessPointIsOnAutomatically; 
@property (assign,nonatomic) BOOL accessPointShowHighlights; 
@property (assign,nonatomic) long long accessPointLocation; 
@property (assign,nonatomic) BOOL supportsChallenges; 
@property (assign,nonatomic) BOOL dashboardDeepLinkEnabled; 
@property (assign,nonatomic) BOOL tournamentsDebuggingEnabled; 
@property (assign,nonatomic) long long tournamentState; 
@property (assign,nonatomic) long long tournamentParticipantState; 
@property (assign,nonatomic) long long tournamentPlayers; 
@property (assign,nonatomic) long long tournamentReplays; 
@property (assign,nonatomic) long long tournamentDuration; 
@property (nonatomic,retain) NSDate * tournamentStartDate; 
@property (nonatomic,retain) NSDate * tournamentEndDate; 
@property (assign,nonatomic) long long tournamentMinPlayers; 
@property (assign,nonatomic) long long tournamentMaxPlayers; 
@property (assign,nonatomic) long long tournamentMaxReplays; 
@property (assign,nonatomic) long long tournamentAutoDuration; 
@property (assign,nonatomic) long long tournamentCustomMinPlayers; 
@property (assign,nonatomic) long long tournamentCustomMaxPlayers; 
@property (assign,nonatomic) long long tournamentCustomMaxReplays; 
@property (assign,nonatomic) long long tournamentCustomDuration; 
@property (assign,nonatomic) long long tournamentUIAppearanceStyle; 
@property (assign,nonatomic) long long tournamentCreationMethod; 
@property (assign,nonatomic) BOOL restrictToTournamentPlayers; 
@property (assign,nonatomic) long long tournamentServer; 
@property (assign,nonatomic) BOOL tournamentDemoModeEnabled; 
@property (assign,nonatomic) long long tournamentMaxSimulatedPlayers; 
@property (assign,nonatomic) long long tournamentMaxSimulatedFriends; 
+(id)shared;
+(id)hostNameForEnvironment:(long long)arg1 ;
+(id)displayNameForEnvironment:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)synchronize;
-(BOOL)HTTPShouldUsePipelining;
-(long long)environment;
-(void)setEnvironment:(long long)arg1 ;
-(double)operationTimeout;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isInternalBuild;
-(void)setOperationTimeout:(double)arg1 ;
-(BOOL)verboseLogging;
-(void)setVerboseLogging:(BOOL)arg1 ;
-(long long)integerValueForKey:(CFStringRef)arg1 defaultValue:(long long)arg2 ;
-(BOOL)booleanValueForKey:(CFStringRef)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)booleanValueForKey:(CFStringRef)arg1 ;
-(double)minimumCacheTTL;
-(id)initWithoutUIKitNotifications;
-(unsigned)logFilter;
-(BOOL)useTestProtocols;
-(BOOL)supportsChallenges;
-(BOOL)useInternalHeader;
-(NSString *)testRunID;
-(BOOL)isStoreDemoModeEnabled;
-(BOOL)isMultiplayerGamingRestricted;
-(BOOL)isAddingFriendsRestricted;
-(void)applicationWillEnterBackground:(id)arg1 ;
-(id)initWithUIKitNotifications;
-(BOOL)_shouldSynchronizeOnNextRead;
-(void)set_shouldSynchronizeOnNextRead:(BOOL)arg1 ;
-(void)removeOverrideForKey:(id)arg1 ;
-(id)preferencesValueForKey:(id)arg1 ;
-(void)_didWriteKey:(CFStringRef)arg1 ;
-(void)setOverrideValues:(NSDictionary *)arg1 ;
-(void)setIntegerValue:(long long)arg1 forKey:(CFStringRef)arg2 ;
-(void)setBooleanValue:(BOOL)arg1 forKey:(CFStringRef)arg2 ;
-(long long)unsignedIntegerValueForKey:(CFStringRef)arg1 defaultValue:(long long)arg2 ;
-(void)setUnsignedIntegerValue:(long long)arg1 forKey:(CFStringRef)arg2 ;
-(void)setStringValue:(id)arg1 forKey:(CFStringRef)arg2 ;
-(id)stringValueForKey:(CFStringRef)arg1 defaultValue:(id)arg2 ;
-(double)timeIntervalForKey:(CFStringRef)arg1 defaultValue:(double)arg2 ;
-(void)setTimeInterval:(double)arg1 forKey:(CFStringRef)arg2 ;
-(unsigned long long)maxDefaultPlayersP2P;
-(unsigned long long)maxDefaultPlayersHosted;
-(unsigned long long)maxDefaultPlayersTurnBased;
-(unsigned long long)maxDefaultGameStateSizeTurnBased;
-(unsigned long long)exchangeDataDefaultMaximumSize;
-(unsigned long long)exchangeDefaultMaxInitiatedExchangesPerPlayer;
-(BOOL)isNearbyMultiplayerRestricted;
-(BOOL)isSharingRestricted;
-(BOOL)isCustomizedCommunicationRestricted;
-(void)setLogFilter:(unsigned)arg1 ;
-(NSString *)storeBagURL;
-(void)setStoreBagURL:(NSString *)arg1 ;
-(BOOL)allowUnsignedBag;
-(void)setAllowUnsignedBag:(BOOL)arg1 ;
-(void)setUseTestProtocols:(BOOL)arg1 ;
-(BOOL)enterSandbox;
-(void)setEnterSandbox:(BOOL)arg1 ;
-(BOOL)forceDefaultNickname;
-(void)setForceDefaultNickname:(BOOL)arg1 ;
-(BOOL)forceDefaultPrivacy;
-(void)setForceDefaultPrivacy:(BOOL)arg1 ;
-(BOOL)forceUnderage;
-(void)setForceUnderage:(BOOL)arg1 ;
-(unsigned long long)mescalSetupRetries;
-(void)setMescalSetupRetries:(unsigned long long)arg1 ;
-(unsigned long long)coreRecentUpperLimit;
-(void)setCoreRecentUpperLimit:(unsigned long long)arg1 ;
-(unsigned long long)coreRecentMultiplier;
-(void)setCoreRecentMultiplier:(unsigned long long)arg1 ;
-(unsigned long long)loginDisableThreshold;
-(void)setNetworkManagerUserOverride:(NSString *)arg1 ;
-(NSString *)networkManagerUserOverride;
-(void)setNetworkManagerStateOverride:(long long)arg1 ;
-(long long)networkManagerStateOverride;
-(void)setLoginDisableThreshold:(unsigned long long)arg1 ;
-(double)operationRetryDelay;
-(void)setOperationRetryDelay:(double)arg1 ;
-(unsigned long long)operationRetryCount;
-(void)setOperationRetryCount:(unsigned long long)arg1 ;
-(double)debugRequestTimeout;
-(void)setDebugRequestTimeout:(double)arg1 ;
-(BOOL)isNotificationCenterEnabled;
-(void)setNotificationCenterEnabled:(BOOL)arg1 ;
-(BOOL)notificationBadgesEnabled;
-(void)setNotificationBadgesEnabled:(BOOL)arg1 ;
-(BOOL)notificationSoundsEnabled;
-(void)setNotificationSoundsEnabled:(BOOL)arg1 ;
-(BOOL)notificationAlertsEnabled;
-(void)setNotificationAlertsEnabled:(BOOL)arg1 ;
-(void)setTestRunID:(NSString *)arg1 ;
-(BOOL)forceRelay;
-(void)setForceRelay:(BOOL)arg1 ;
-(BOOL)preemptiveRelay;
-(void)setPreemptiveRelay:(BOOL)arg1 ;
-(long long)pushEnvironment;
-(void)setPushEnvironment:(long long)arg1 ;
-(long long)pipeliningSetting;
-(void)setPipeliningSetting:(long long)arg1 ;
-(BOOL)restrictToAutomatch;
-(void)setRestrictToAutomatch:(BOOL)arg1 ;
-(unsigned long long)recentNumberOfPlayers;
-(void)setRecentNumberOfPlayers:(unsigned long long)arg1 ;
-(unsigned long long)maxPlayersP2P;
-(void)setMaxPlayersP2P:(unsigned long long)arg1 ;
-(unsigned long long)maxPlayersHosted;
-(void)setMaxPlayersHosted:(unsigned long long)arg1 ;
-(unsigned long long)maxPlayersTurnBased;
-(void)setMaxPlayersTurnBased:(unsigned long long)arg1 ;
-(unsigned long long)maxGameStateSizeTurnBased;
-(void)setMaxGameStateSizeTurnBased:(unsigned long long)arg1 ;
-(unsigned long long)exchangeDataMaximumSize;
-(void)setExchangeDataMaximumSize:(unsigned long long)arg1 ;
-(unsigned long long)exchangeMaxInitiatedExchangesPerPlayer;
-(void)setExchangeMaxInitiatedExchangesPerPlayer:(unsigned long long)arg1 ;
-(void)setUseInternalHeader:(BOOL)arg1 ;
-(double)terminationInterval;
-(void)setTerminationInterval:(double)arg1 ;
-(double)garbageCollectionInterval;
-(void)setGarbageCollectionInterval:(double)arg1 ;
-(void)setMinimumCacheTTL:(double)arg1 ;
-(double)cacheTTLOverride;
-(void)setCacheTTLOverride:(double)arg1 ;
-(BOOL)shouldAnnotateImageUsage;
-(void)setShouldAnnotateImageUsage:(BOOL)arg1 ;
-(BOOL)shouldTrackAtlasImageUsage;
-(void)setShouldTrackAtlasImageUsage:(BOOL)arg1 ;
-(BOOL)shouldUseTestIcons;
-(void)setShouldUseTestIcons:(BOOL)arg1 ;
-(BOOL)shouldLinkPlayerToICloud;
-(void)setShouldLinkPlayerToICloud:(BOOL)arg1 ;
-(BOOL)shouldLinkPlayerToTwitter;
-(void)setShouldLinkPlayerToTwitter:(BOOL)arg1 ;
-(BOOL)shouldLinkPlayerToFacebook;
-(void)setShouldLinkPlayerToFacebook:(BOOL)arg1 ;
-(BOOL)shouldDisallowInvitesFromStrangers;
-(BOOL)shouldAllowNearbyMultiplayer;
-(void)setShouldAllowNearbyMultiplayer:(BOOL)arg1 ;
-(BOOL)shouldAllowSharing;
-(BOOL)shouldAddPlayerInfoToAddressBook;
-(void)setShouldAddPlayerInfoToAddressBook:(BOOL)arg1 ;
-(BOOL)shouldAllowCustomCommunication;
-(void)setMaxRecentPlayersCount:(unsigned long long)arg1 ;
-(unsigned long long)maxRecentPlayersCount;
-(void)setMaxRecentPlayersTime:(double)arg1 ;
-(double)maxRecentPlayersTime;
-(BOOL)isClipGestureEnabled;
-(void)setClipGestureEnabled:(BOOL)arg1 ;
-(BOOL)isComprehensiveLoggingEnabled;
-(void)setComprehensiveLoggingEnabled:(BOOL)arg1 ;
-(BOOL)newDashboardUI;
-(void)setNewDashboardUI:(BOOL)arg1 ;
-(BOOL)arcadeDashboardSection;
-(void)setArcadeDashboardSection:(BOOL)arg1 ;
-(BOOL)dashboardDeepLinkEnabled;
-(void)setDashboardDeepLinkEnabled:(BOOL)arg1 ;
-(BOOL)accessPointIsOnAutomatically;
-(void)setAccessPointIsOnAutomatically:(BOOL)arg1 ;
-(BOOL)accessPointShowHighlights;
-(void)setAccessPointShowHighlights:(BOOL)arg1 ;
-(long long)accessPointLocation;
-(void)setAccessPointLocation:(long long)arg1 ;
-(void)setSupportsChallenges:(BOOL)arg1 ;
-(BOOL)tournamentsDebuggingEnabled;
-(void)setTournamentsDebuggingEnabled:(BOOL)arg1 ;
-(BOOL)tournamentDemoModeEnabled;
-(void)setTournamentDemoModeEnabled:(BOOL)arg1 ;
-(long long)tournamentMaxSimulatedPlayers;
-(void)setTournamentMaxSimulatedPlayers:(long long)arg1 ;
-(long long)tournamentMaxSimulatedFriends;
-(void)setTournamentMaxSimulatedFriends:(long long)arg1 ;
-(long long)tournamentState;
-(void)setTournamentState:(long long)arg1 ;
-(long long)tournamentParticipantState;
-(void)setTournamentParticipantState:(long long)arg1 ;
-(long long)tournamentPlayers;
-(void)setTournamentPlayers:(long long)arg1 ;
-(long long)tournamentReplays;
-(void)setTournamentReplays:(long long)arg1 ;
-(long long)tournamentDuration;
-(void)setTournamentDuration:(long long)arg1 ;
-(NSDate *)tournamentStartDate;
-(void)setTournamentStartDate:(NSDate *)arg1 ;
-(NSDate *)tournamentEndDate;
-(void)setTournamentEndDate:(NSDate *)arg1 ;
-(long long)tournamentMinPlayers;
-(void)setTournamentMinPlayers:(long long)arg1 ;
-(long long)tournamentMaxPlayers;
-(void)setTournamentMaxPlayers:(long long)arg1 ;
-(long long)tournamentMaxReplays;
-(void)setTournamentMaxReplays:(long long)arg1 ;
-(long long)tournamentAutoDuration;
-(void)setTournamentAutoDuration:(long long)arg1 ;
-(long long)tournamentCustomMinPlayers;
-(void)setTournamentCustomMinPlayers:(long long)arg1 ;
-(long long)tournamentCustomMaxPlayers;
-(void)setTournamentCustomMaxPlayers:(long long)arg1 ;
-(long long)tournamentCustomMaxReplays;
-(void)setTournamentCustomMaxReplays:(long long)arg1 ;
-(long long)tournamentCustomDuration;
-(void)setTournamentCustomDuration:(long long)arg1 ;
-(long long)tournamentUIAppearanceStyle;
-(void)setTournamentUIAppearanceStyle:(long long)arg1 ;
-(long long)tournamentCreationMethod;
-(void)setTournamentCreationMethod:(long long)arg1 ;
-(BOOL)restrictToTournamentPlayers;
-(void)setRestrictToTournamentPlayers:(BOOL)arg1 ;
-(long long)tournamentServer;
-(void)setTournamentServer:(long long)arg1 ;
-(NSDictionary *)overrideValues;
-(BOOL)isWebKitInspectElementEnabled;
-(void)setWebKitInspectElementEnabled:(BOOL)arg1 ;
-(unsigned long long)multiplayerAllowedPlayerType;
-(id<GKPreferencesDelegate>)preferencesDelegate;
-(BOOL)restrictionEnabledForKey:(id)arg1 ;
-(id)valueRestrictionForKey:(id)arg1 ;
-(BOOL)isGameCenterRestricted;
-(void)setPreferencesDelegate:(id<GKPreferencesDelegate>)arg1 ;
-(BOOL)isAppInstallationRestricted;
-(BOOL)isAccountModificationRestricted;
-(BOOL)isProfileModificationRestricted;
-(BOOL)isProfilePrivacyModificationRestricted;
@end

