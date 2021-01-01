/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Assistant/Plugins/FMIPSiriBackendPlugin.assistantBundle/FMIPSiriBackendPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, _TtC8FMClient7Session, NSString;

@interface FMIPSiriDeviceSearch : NSObject {

	BOOL _deviceUnlocked;
	NSArray* _searchDevices;
	_TtC8FMClient7Session* _clientSession;
	NSArray* _deviceSearchQueries;
	NSString* _ownerDsid;

}

@property (nonatomic,retain) NSArray * searchDevices;                            //@synthesize searchDevices=_searchDevices - In the implementation block
@property (nonatomic,retain) _TtC8FMClient7Session * clientSession;              //@synthesize clientSession=_clientSession - In the implementation block
@property (nonatomic,retain) NSArray * deviceSearchQueries;                      //@synthesize deviceSearchQueries=_deviceSearchQueries - In the implementation block
@property (assign,nonatomic) BOOL deviceUnlocked;                                //@synthesize deviceUnlocked=_deviceUnlocked - In the implementation block
@property (nonatomic,retain) NSString * ownerDsid;                               //@synthesize ownerDsid=_ownerDsid - In the implementation block
+(unsigned long long)asyncTimeout;
+(long long)responseCodeForResultCode:(long long)arg1 ;
-(NSArray *)deviceSearchQueries;
-(void)setDeviceSearchQueries:(NSArray *)arg1 ;
-(BOOL)deviceUnlocked;
-(void)setDeviceUnlocked:(BOOL)arg1 ;
-(void)setClientSession:(_TtC8FMClient7Session *)arg1 ;
-(void)setOwnerDsid:(NSString *)arg1 ;
-(void)_searchWithCompletion:(/*^block*/id)arg1 ;
-(void)scanRequiredWithCompletion:(/*^block*/id)arg1 ;
-(_TtC8FMClient7Session *)clientSession;
-(NSArray *)searchDevices;
-(id)potentialPlaybackDevices:(id)arg1 discoveredDevices:(id)arg2 didScan:(BOOL)arg3 ;
-(id)isOwnerDevice:(id)arg1 ;
-(BOOL)canPlaySoundOnTargetDiscoveryId:(id)arg1 pairedDiscoveryIds:(id)arg2 nearbyDiscoverIds:(id)arg3 ;
-(id)deviceLocalityWithTargetDiscoveryId:(id)arg1 nearbyDiscoverIds:(id)arg2 didScan:(BOOL)arg3 ;
-(id)ownerDsidForDevice:(id)arg1 ;
-(NSString *)ownerDsid;
-(id)initWithSession:(id)arg1 deviceSearchQueries:(id)arg2 deviceUnlocked:(BOOL)arg3 ownerDsid:(id)arg4 ;
-(void)searchWithCompletion:(/*^block*/id)arg1 ;
-(void)setSearchDevices:(NSArray *)arg1 ;
@end

