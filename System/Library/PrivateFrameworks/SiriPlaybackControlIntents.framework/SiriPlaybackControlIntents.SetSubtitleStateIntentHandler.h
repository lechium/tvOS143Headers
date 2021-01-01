/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SetSubtitleStateIntentHandling.h>

@interface SiriPlaybackControlIntents.SetSubtitleStateIntentHandler : NSObject <SetSubtitleStateIntentHandling> {

	 playbackController;
	 deviceSelector;
	 analyticsService;

}
-(id)init;
-(void)handleSetSubtitleState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDeviceForSetSubtitleState:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveLanguageForSetSubtitleState:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmSetSubtitleState:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

