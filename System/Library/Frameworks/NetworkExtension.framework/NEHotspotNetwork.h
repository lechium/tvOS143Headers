/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString;

@interface NEHotspotNetwork : NSObject {

	CNNetworkRef _network;

}

@property (assign) CNNetworkRef network;                    //@synthesize network=_network - In the implementation block
@property (readonly) NSString * interfaceName; 
@property (readonly) NSString * SSID; 
@property (readonly) NSString * BSSID; 
+(void)fetchCurrentWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)description;
-(void)dealloc;
-(BOOL)isSecure;
-(NSString *)interfaceName;
-(void)setPassword:(id)arg1 ;
-(CNNetworkRef)network;
-(double)signalStrength;
-(void)setConfidence:(long long)arg1 ;
-(NSString *)SSID;
-(void)setNetwork:(CNNetworkRef)arg1 ;
-(id)initWithNetwork:(CNNetworkRef)arg1 ;
-(NSString *)BSSID;
-(BOOL)didAutoJoin;
-(BOOL)didJustJoin;
-(BOOL)isChosenHelper;
@end

