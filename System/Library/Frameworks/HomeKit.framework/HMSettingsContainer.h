/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HMSettings;


@protocol HMSettingsContainer <NSObject>
@property (readonly) HMSettings * settings; 
@property (readonly) HMSettings * privateSettings; 
@property (readonly) BOOL settingsInitialized; 
@required
-(HMSettings *)settings;
-(HMSettings *)privateSettings;
-(BOOL)settingsInitialized;

@end

