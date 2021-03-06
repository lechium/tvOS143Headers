/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface GEOPlatform : NSObject
+(id)sharedPlatform;
+(BOOL)isRunningInGeod;
+(void)setIsRunningInGeod:(BOOL)arg1 ;
-(id)init;
-(id)productName;
-(BOOL)isInternalInstall;
-(id)hardwareIdentifier;
-(id)buildVersion;
-(id)clientCapabilities;
-(BOOL)supportsNavigation;
-(BOOL)deviceSupports4K;
-(id)deviceCountrySKUForServiceRequests;
-(double)deviceScreenScale;
-(id)osVersion;
-(id)deviceCountrySKU;
-(id)hardwareModel;
-(id)osAndBuildVersion;
-(BOOL)_deviceSupportsNavigation;
-(BOOL)mapsFeatureFreedomEnabled;
-(BOOL)supportsRealisticTiles;
-(BOOL)supportsForceTouch;
-(BOOL)isCellDataPossible;
-(long long)deviceScreenWidthInPixels;
-(long long)deviceScreenHeightInPixels;
@end

