/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GCControllerSettings;


@protocol GCControllerSettingsComponent <GCControllerComponent>
@property (nonatomic,copy) id changedHandler; 
@property (nonatomic,readonly) GCControllerSettings * settingsForBundleID; 
@property (nonatomic,readonly) GCControllerSettings * settingsDefault; 
@required
-(id)changedHandler;
-(void)setChangedHandler:(/*^block*/id)arg1;
-(GCControllerSettings *)settingsForBundleID;
-(GCControllerSettings *)settingsDefault;

@end

