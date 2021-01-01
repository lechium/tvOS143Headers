/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDS/IDSDaemonListenerProtocol.h>

@class NSDictionary, NSString, NSMutableArray, NSMapTable, NSArray, NSData, NSDate, NSSet;

@interface _IDSAccount : NSObject <IDSDaemonListenerProtocol> {

	NSDictionary* _accountConfig;
	NSString* _serviceToken;
	NSString* _uniqueID;
	NSString* _service;
	NSMutableArray* _devices;
	NSMutableArray* _suppressedDevices;
	id _delegateContext;
	NSMapTable* _delegateToInfo;
	NSMapTable* _registrationDelegateToInfo;
	BOOL _devicesLoaded;
	BOOL _isEnabled;
	NSString* _loginID;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,retain) NSString * loginID;                                       //@synthesize loginID=_loginID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) NSString * primaryServiceName; 
@property (nonatomic,readonly) NSString * pushTopic; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,readonly) BOOL isInTransientRegistrationState; 
@property (nonatomic,readonly) BOOL isTransientWhitelistedAccount; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isUserDisabled; 
@property (nonatomic,readonly) BOOL canSend; 
@property (nonatomic,readonly) BOOL isUsableForOuterMessaging; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * nearbyDevices; 
@property (nonatomic,readonly) NSArray * suppressedDevices; 
@property (nonatomic,readonly) NSDictionary * profileInfo; 
@property (nonatomic,readonly) NSArray * aliases; 
@property (nonatomic,readonly) NSArray * aliasStrings; 
@property (nonatomic,readonly) NSArray * vettedAliases; 
@property (nonatomic,readonly) NSArray * aliasesToRegister; 
@property (nonatomic,readonly) NSArray * handles; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int registrationStatus; 
@property (assign,setter=_setIsEnabled:,nonatomic) BOOL _isEnabled; 
@property (nonatomic,readonly) NSString * userUniqueIdentifier; 
@property (nonatomic,__weak,readonly) NSArray * registeredURIs; 
@property (nonatomic,__weak,readonly) NSArray * accountRegisteredURIs; 
@property (nonatomic,__weak,readonly) NSData * registrationCertificate; 
@property (nonatomic,__weak,readonly) NSDate * dateRegistered; 
@property (nonatomic,__weak,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,__weak,readonly) NSData * pushToken; 
@property (nonatomic,__weak,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,__weak,readonly) NSString * profileID; 
@property (nonatomic,readonly) NSSet * activeAliases; 
@property (nonatomic,readonly) int registrationError; 
@property (nonatomic,readonly) NSDictionary * registrationAlertInfo; 
@property (nonatomic,readonly) long long profileValidationStatus; 
@property (nonatomic,readonly) int profileValidationErrorReason; 
@property (nonatomic,retain) NSString * regionID; 
@property (nonatomic,retain) NSString * regionBasePhoneNumber; 
@property (nonatomic,retain) NSString * displayName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(void)setPassword:(id)arg1 ;
-(NSString *)uniqueID;
-(NSString *)displayName;
-(NSString *)serviceName;
-(BOOL)_isEnabled;
-(NSArray *)handles;
-(BOOL)isActive;
-(void)_connect;
-(void)removeDelegate:(id)arg1 ;
-(NSData *)pushToken;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSArray *)devices;
-(int)accountType;
-(void)setDisplayName:(NSString *)arg1 ;
-(int)registrationError;
-(BOOL)isUserDisabled;
-(int)registrationStatus;
-(BOOL)isTemporary;
-(void)setAuthToken:(id)arg1 ;
-(void)addAliases:(id)arg1 ;
-(NSArray *)aliases;
-(NSArray *)registeredURIs;
-(id)registrationInfo;
-(NSString *)pushTopic;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2 ;
-(void)account:(id)arg1 aliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 profileChanged:(id)arg2 ;
-(void)account:(id)arg1 loginChanged:(id)arg2 ;
-(void)account:(id)arg1 displayNameChanged:(id)arg2 ;
-(void)refreshRegistrationForAccount:(id)arg1 ;
-(void)account:(id)arg1 dependentDevicesUpdated:(id)arg2 ;
-(void)account:(id)arg1 dependentDevicesUpdatedUponReconnect:(id)arg2 ;
-(void)account:(id)arg1 localDeviceAdded:(id)arg2 ;
-(void)account:(id)arg1 localDeviceRemoved:(id)arg2 ;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(void)registerAccount;
-(void)authenticateAccount;
-(NSArray *)aliasesToRegister;
-(NSString *)userUniqueIdentifier;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 group:(id)arg2 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 group:(id)arg5 ;
-(NSString *)primaryServiceName;
-(NSData *)registrationCertificate;
-(NSArray *)suppressedDevices;
-(BOOL)isInTransientRegistrationState;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 ;
-(void)setAccountInfo:(NSDictionary *)arg1 ;
-(void)_setIsEnabled:(BOOL)arg1 ;
-(NSString *)loginID;
-(NSDictionary *)accountInfo;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4 ;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4 ;
-(BOOL)canSend;
-(NSArray *)nearbyDevices;
-(NSDictionary *)profileInfo;
-(NSArray *)aliasStrings;
-(NSArray *)vettedAliases;
-(BOOL)isUsableForOuterMessaging;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(NSDictionary *)registrationAlertInfo;
-(long long)profileValidationStatus;
-(int)profileValidationErrorReason;
-(NSDate *)nextRegistrationDate;
-(NSDate *)dateRegistered;
-(NSArray *)accountRegisteredURIs;
-(NSDictionary *)regionServerContext;
-(NSString *)profileID;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(NSString *)regionID;
-(void)setRegionID:(NSString *)arg1 ;
-(NSString *)regionBasePhoneNumber;
-(void)setRegionBasePhoneNumber:(NSString *)arg1 ;
-(void)passwordUpdated;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(void)removeAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)unregisterAccount;
-(void)forceRemoveAccount;
-(void)_reregisterAndReidentify:(BOOL)arg1 ;
-(void)deactivateAndPurgeIdentify;
-(void)_callNearbyDevicesChanged;
-(void)_reloadCachedDevices;
-(NSSet *)activeAliases;
-(void)activateAlias:(id)arg1 ;
-(void)deactivateAlias:(id)arg1 ;
-(void)setLoginID:(NSString *)arg1 ;
-(void)_loadCachedDevices;
-(BOOL)_isiCloudPairingService;
-(BOOL)_isThumperService;
-(id)_objectForKey:(id)arg1 ;
-(BOOL)_isInvisibleAlias:(id)arg1 ;
-(void)_updateDependentDevicesWithDevicesInfo:(id)arg1 ;
-(void)_callDevicesChanged;
-(id)connectedDevices;
-(id)_keychainRegistration;
-(id)_registeredURIs;
-(void)_callRegistrationDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isTransientWhitelistedAccount;
-(void)_callConnectedDevicesChanged;
-(void)_callCloudConnectedDevicesChanged;
@end
