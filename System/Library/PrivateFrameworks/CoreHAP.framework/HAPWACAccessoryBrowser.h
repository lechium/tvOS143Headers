/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPAccessoryServerBrowser.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HAPAirPlayAccessoryBrowserDelegate, HAPWACAccessoryBrowserDelegate;
@class NSString, NSDate, NSMutableSet, CUWiFiScanner, HMFTimer;

@interface HAPWACAccessoryBrowser : HAPAccessoryServerBrowser <HMFTimerDelegate, HMFLogging> {

	NSString* _browsingIdentifier;
	NSDate* _browsingStartTime;
	id<HAPAirPlayAccessoryBrowserDelegate> _airplayDelegate;
	NSString* _scanning2Pt4SSID;
	/*^block*/id _found2Pt4Completion;
	id<HAPWACAccessoryBrowserDelegate> _delegate;
	NSMutableSet* _foundUnconfiguredUnpairedAccessories;
	NSMutableSet* _foundUnconfiguredPairedAccessories;
	NSMutableSet* _found2Pt4Networks;
	CUWiFiScanner* _cuWiFiScanner;
	unsigned long long _state;
	HMFTimer* _backoffTimer;

}

@property (nonatomic,retain) NSString * browsingIdentifier;                                              //@synthesize browsingIdentifier=_browsingIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * browsingStartTime;                                                 //@synthesize browsingStartTime=_browsingStartTime - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAirPlayAccessoryBrowserDelegate> airplayDelegate;              //@synthesize airplayDelegate=_airplayDelegate - In the implementation block
@property (nonatomic,retain) NSString * scanning2Pt4SSID;                                                //@synthesize scanning2Pt4SSID=_scanning2Pt4SSID - In the implementation block
@property (nonatomic,copy) id found2Pt4Completion;                                                       //@synthesize found2Pt4Completion=_found2Pt4Completion - In the implementation block
@property (nonatomic,__weak,readonly) id<HAPWACAccessoryBrowserDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableSet * foundUnconfiguredUnpairedAccessories;                        //@synthesize foundUnconfiguredUnpairedAccessories=_foundUnconfiguredUnpairedAccessories - In the implementation block
@property (nonatomic,retain) NSMutableSet * foundUnconfiguredPairedAccessories;                          //@synthesize foundUnconfiguredPairedAccessories=_foundUnconfiguredPairedAccessories - In the implementation block
@property (nonatomic,retain) NSMutableSet * found2Pt4Networks;                                           //@synthesize found2Pt4Networks=_found2Pt4Networks - In the implementation block
@property (nonatomic,retain) CUWiFiScanner * cuWiFiScanner;                                              //@synthesize cuWiFiScanner=_cuWiFiScanner - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) HMFTimer * backoffTimer;                                                  //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HAPWACAccessoryBrowserDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)timerDidFire:(id)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(id)visible2Pt4Networks;
-(void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg1 ;
-(HMFTimer *)backoffTimer;
-(void)_initWiFiScannerWithScanner:(id)arg1 ;
-(void)setCuWiFiScanner:(CUWiFiScanner *)arg1 ;
-(void)handleFoundUnconfiguredUnpairedWACDevice:(id)arg1 ;
-(void)handleFoundAPDevice:(id)arg1 ;
-(void)handleFoundUnconfiguredPairedWACDevice:(id)arg1 ;
-(void)handleRemovedUnconfiguredWACDevice:(id)arg1 ;
-(void)handleChangeUnconfiguredWACDevice:(id)arg1 ;
-(void)_handleBrowsingBackOffTimerExpiry;
-(CUWiFiScanner *)cuWiFiScanner;
-(NSString *)scanning2Pt4SSID;
-(void)_reportFound2Pt4Network:(id)arg1 ;
-(void)_restartBrowsingWithAllNetworks;
-(NSMutableSet *)foundUnconfiguredUnpairedAccessories;
-(NSMutableSet *)found2Pt4Networks;
-(NSMutableSet *)foundUnconfiguredPairedAccessories;
-(void)setBrowsingIdentifier:(NSString *)arg1 ;
-(void)_startBrowsingForWACAccessories;
-(void)setAirplayDelegate:(id<HAPAirPlayAccessoryBrowserDelegate>)arg1 ;
-(void)setBrowsingStartTime:(NSDate *)arg1 ;
-(void)_stopBrowsingForWACAccessories;
-(NSDate *)browsingStartTime;
-(void)_addFoundUnconfiguredUnpairedWACDevice:(id)arg1 ;
-(id<HAPAirPlayAccessoryBrowserDelegate>)airplayDelegate;
-(void)_handleNewUnconfiguredUnpairedWACDevice:(id)arg1 ;
-(id)_removeUnconfiguredWACDevice:(id)arg1 ;
-(NSString *)browsingIdentifier;
-(void)_handleUnconfiguredPairedWACDevice:(id)arg1 ;
-(void)_handleChangeUnconfiguredPairedWACAccessory:(id)arg1 ;
-(void)_handleChangeUnconfiguredUnpairedWACAccessory:(id)arg1 ;
-(void)setScanning2Pt4SSID:(NSString *)arg1 ;
-(void)setFound2Pt4Completion:(id)arg1 ;
-(id)found2Pt4Completion;
-(void)initWiFiScannerWithScanner:(id)arg1 ;
-(void)scan2Pt4APWithSSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFoundUnconfiguredUnpairedAccessories:(NSMutableSet *)arg1 ;
-(void)setFoundUnconfiguredPairedAccessories:(NSMutableSet *)arg1 ;
-(void)setFound2Pt4Networks:(NSMutableSet *)arg1 ;
@end

