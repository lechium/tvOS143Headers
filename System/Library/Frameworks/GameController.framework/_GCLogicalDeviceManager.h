/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _GCLogicalDeviceManager <_GCDeviceManager>
@property (__weak) id<GCLogicalDeviceRegistry> deviceRegistry; 
@optional
-(BOOL)canMakeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2;
-(void)activateLogicalDevice:(id)arg1;
-(void)deactivateLogicalDevice:(id)arg1;

@required
-(void)setDeviceRegistry:(id)arg1;
-(id<GCLogicalDeviceRegistry>)deviceRegistry;
-(id)makeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2;

@end
