/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SkipTimeIntentHandling.h>

@interface SiriPlaybackControlIntents.SkipTimeIntentHandler : NSObject <SkipTimeIntentHandling> {

	 playbackController;
	 deviceSelector;
	 analyticsService;

}
-(id)init;
-(void)handleSkipTime:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDurationForSkipTime:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveDevicesForSkipTime:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmSkipTime:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

