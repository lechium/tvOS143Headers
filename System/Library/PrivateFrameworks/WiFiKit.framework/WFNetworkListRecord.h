/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFNetworkListRecord <NSObject,NSCopying>
@required
-(unsigned long long)uniqueIdentifier;
-(BOOL)isSecure;
-(id)title;
-(id)subtitle;
-(long long)rssi;
-(id)ssid;
-(BOOL)isKnown;
-(BOOL)isInstantHotspot;
-(BOOL)canBeDisplayedAsCurrent;
-(BOOL)isAdhoc;
-(BOOL)isUnconfiguredAccessory;
-(BOOL)isPopular;
-(BOOL)iOSHotspot;
-(id)hotspotBatteryLife;
-(id)hotspotCellularProtocol;
-(id)hotspotSignalStrength;
-(float)scaledRSSI;
-(unsigned long long)signalBars;
-(BOOL)isEnterprise;
-(BOOL)isEquivalentRecord:(id)arg1;
-(BOOL)prominentDisplay;

@end

