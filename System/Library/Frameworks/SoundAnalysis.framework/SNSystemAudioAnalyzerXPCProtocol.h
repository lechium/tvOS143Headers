/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SNSystemAudioAnalyzerXPCProtocol <NSObject>
@required
-(void)xpcAddRequest:(id)arg1 withObserver:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)xpcRemoveRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)xpcRemoveAllRequestsWithCompletionHandler:(/*^block*/id)arg1;
-(void)xpcStartWithCompletionHandler:(/*^block*/id)arg1;
-(void)xpcStopWithCompletionHandler:(/*^block*/id)arg1;

@end
