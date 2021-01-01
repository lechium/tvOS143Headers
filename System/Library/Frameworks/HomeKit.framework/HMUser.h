/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMSettingsContainer.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol HMUserDelegatePrivate;
@class HMSettings, HMFUnfairLock, NSString, NSUUID, HMHomeAccessControl, HMAssistantAccessControl, HMMediaContentProfileAccessControl, HMHome, HMFPairingIdentity, HMAnnounceUserSettings, HMPhotosPersonManager, HMPhotosPersonManagerSettings, HMSettingsController, _HMContext, IDSURI;

@interface HMUser : NSObject <HMFLogging, HMFMessageReceiver, HMSettingsContainer, NSSecureCoding, HMObjectMerge> {

	HMFUnfairLock* _lock;
	NSString* _senderCorrelationIdentifier;
	BOOL _currentUser;
	BOOL _needsiTunesMultiUserRepair;
	BOOL _settingsInitialized;
	NSUUID* _uniqueIdentifier;
	NSString* _name;
	HMHomeAccessControl* _homeAccessControl;
	HMAssistantAccessControl* _assistantAccessControl;
	HMMediaContentProfileAccessControl* _mediaContentProfileAccessControl;
	NSString* _userID;
	HMHome* _home;
	HMFPairingIdentity* _pairingIdentity;
	HMSettings* _settings;
	HMSettings* _privateSettings;
	HMAnnounceUserSettings* _announceUserSettings;
	HMPhotosPersonManager* _photosPersonManager;
	HMPhotosPersonManagerSettings* _photosPersonManagerSettings;
	id<HMUserDelegatePrivate> _delegate;
	HMSettingsController* _settingsController;
	HMSettingsController* _privateSettingsController;
	NSUUID* _uuid;
	_HMContext* _context;

}

@property (readonly) HMPhotosPersonManager * photosPersonManager; 
@property (copy,readonly) HMPhotosPersonManagerSettings * photosPersonManagerSettings; 
@property (copy,readonly) HMPhotosPersonManagerSettings * personManagerSettings; 
@property (nonatomic,copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * userID;                                                        //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy,readonly) IDSURI * userIDSURI; 
@property (copy) HMFPairingIdentity * pairingIdentity;                                               //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (__weak) id<HMUserDelegatePrivate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) HMSettingsController * settingsController;                                      //@synthesize settingsController=_settingsController - In the implementation block
@property (readonly) HMSettingsController * privateSettingsController;                               //@synthesize privateSettingsController=_privateSettingsController - In the implementation block
@property (retain) HMAnnounceUserSettings * announceUserSettings;                                    //@synthesize announceUserSettings=_announceUserSettings - In the implementation block
@property (assign) BOOL needsiTunesMultiUserRepair;                                                  //@synthesize needsiTunesMultiUserRepair=_needsiTunesMultiUserRepair - In the implementation block
@property (nonatomic,retain) HMHomeAccessControl * homeAccessControl;                                //@synthesize homeAccessControl=_homeAccessControl - In the implementation block
@property (copy) HMAssistantAccessControl * assistantAccessControl;                                  //@synthesize assistantAccessControl=_assistantAccessControl - In the implementation block
@property (copy) HMMediaContentProfileAccessControl * mediaContentProfileAccessControl;              //@synthesize mediaContentProfileAccessControl=_mediaContentProfileAccessControl - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                        //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                                   //@synthesize home=_home - In the implementation block
@property (retain) _HMContext * context;                                                             //@synthesize context=_context - In the implementation block
@property (assign,getter=isCurrentUser,nonatomic) BOOL currentUser;                                  //@synthesize currentUser=_currentUser - In the implementation block
@property (retain) HMPhotosPersonManager * photosPersonManager;                                      //@synthesize photosPersonManager=_photosPersonManager - In the implementation block
@property (copy) HMPhotosPersonManagerSettings * photosPersonManagerSettings;                        //@synthesize photosPersonManagerSettings=_photosPersonManagerSettings - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                       //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) HMSettings * settings;                                                          //@synthesize settings=_settings - In the implementation block
@property (readonly) HMSettings * privateSettings;                                                   //@synthesize privateSettings=_privateSettings - In the implementation block
@property (readonly) BOOL settingsInitialized;                                                       //@synthesize settingsInitialized=_settingsInitialized - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMUserDelegatePrivate>)delegate;
-(void)setDelegate:(id<HMUserDelegatePrivate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(NSUUID *)uuid;
-(HMSettings *)settings;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(void)setCurrentUser:(BOOL)arg1 ;
-(BOOL)isCurrentUser;
-(id)senderCorrelationIdentifier;
-(void)pairingIdentityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)assistantAccessControlForHome:(id)arg1 ;
-(HMSettingsController *)settingsController;
-(void)updateAssistantAccessControl:(id)arg1 forHome:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)userSettingsForHome:(id)arg1 ;
-(HMSettings *)privateSettings;
-(id)logIdentifier;
-(HMFPairingIdentity *)pairingIdentity;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_registerNotificationHandlers;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(id)messageDestination;
-(void)setPhotosPersonManagerSettings:(HMPhotosPersonManagerSettings *)arg1 ;
-(void)updatePhotosPersonManagerSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HMPhotosPersonManager *)photosPersonManager;
-(void)setPhotosPersonManager:(HMPhotosPersonManager *)arg1 ;
-(void)configurePhotosPersonManagerWithSettings:(id)arg1 ;
-(HMPhotosPersonManagerSettings *)photosPersonManagerSettings;
-(HMPhotosPersonManagerSettings *)personManagerSettings;
-(void)fetchPersonManagerSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)updatePersonManagerSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 ;
-(void)updateHomeAccessControl:(BOOL)arg1 remoteAccess:(BOOL)arg2 announceAccess:(BOOL)arg3 camerasAccess:(id)arg4 ;
-(id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 homeAccessControl:(id)arg5 ;
-(HMHomeAccessControl *)homeAccessControl;
-(void)sendClientShareURL:(id)arg1 shareToken:(id)arg2 containerID:(id)arg3 fromUser:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchShareLookupInfo:(/*^block*/id)arg1 ;
-(HMSettingsController *)privateSettingsController;
-(void)_handleUpdatedAssistantAccessControl:(id)arg1 ;
-(void)_handleMultiUserStatusChangedNotification:(id)arg1 ;
-(void)setAssistantAccessControl:(HMAssistantAccessControl *)arg1 ;
-(HMAssistantAccessControl *)assistantAccessControl;
-(HMAnnounceUserSettings *)announceUserSettings;
-(void)setAnnounceUserSettings:(HMAnnounceUserSettings *)arg1 ;
-(HMMediaContentProfileAccessControl *)mediaContentProfileAccessControl;
-(void)setMediaContentProfileAccessControl:(HMMediaContentProfileAccessControl *)arg1 ;
-(void)_updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(BOOL)needsiTunesMultiUserRepair;
-(void)setNeedsiTunesMultiUserRepair:(BOOL)arg1 ;
-(BOOL)settingsInitialized;
-(void)setHomeAccessControl:(HMHomeAccessControl *)arg1 ;
-(void)updateAnnounceUserSettings:(id)arg1 forHome:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)mediaContentProfileAccessControlForHome:(id)arg1 ;
-(void)updateMediaContentProfileAccessControl:(id)arg1 forHome:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(IDSURI *)userIDSURI;
-(id)pendingAccessoryInvitations;
-(void)sendClientShareRepairRequest:(id)arg1 containerID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNeedsiTunesMultiUserRepair:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

