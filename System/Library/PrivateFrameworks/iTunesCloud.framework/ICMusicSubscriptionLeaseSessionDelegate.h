/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ICMusicSubscriptionLeaseSessionDelegate <NSObject>
@required
-(void)musicLeaseSession:(id)arg1 requestsFairPlayKeyStatusUpdateWithCompletion:(/*^block*/id)arg2;
-(void)musicLeaseSession:(id)arg1 didFinishPlaybackRequest:(id)arg2 withPlaybackResponse:(id)arg3 responseError:(id)arg4 updatedFairPlayKeyStatusList:(id)arg5 completionHandler:(/*^block*/id)arg6;

@end
