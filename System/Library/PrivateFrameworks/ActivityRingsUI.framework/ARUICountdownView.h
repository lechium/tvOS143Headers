/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityRingsUI/ARUIRingsView.h>

@class ARUIRingGroupController;

@interface ARUICountdownView : ARUIRingsView

@property (nonatomic,readonly) ARUIRingGroupController * countdownController; 
+(id)countdownViewConfiguredForWatch;
+(id)countdownViewConfiguredForCompanion;
+(id)countdownViewConfiguredForDisplayWithRingDiameter:(float)arg1 ;
-(id)ringGroup;
-(ARUIRingGroupController *)countdownController;
-(id)backingTrackRingGroup;
@end

