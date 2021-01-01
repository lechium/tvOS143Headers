/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriAudioInternal.framework/SiriAudioInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/INAddMediaIntentHandling.h>

@interface SiriAudioInternal.INAddMediaIntentHandler : NSObject <INAddMediaIntentHandling> {

	 library;
	 nowPlaying;
	 subscription;
	 provider;
	 instanceReference;

}
-(id)init;
-(void)handleAddMedia:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveMediaItemsForAddMedia:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveMediaDestinationForAddMedia:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

