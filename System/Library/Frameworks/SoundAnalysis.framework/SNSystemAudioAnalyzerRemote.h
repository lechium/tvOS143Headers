/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SNSystemAudioAnalyzerProtocol.h>

@protocol SNSystemAudioAnalyzerProtocol, OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface SNSystemAudioAnalyzerRemote : NSObject <SNSystemAudioAnalyzerProtocol> {

	NSMutableDictionary* _registeredRequests;
	id<SNSystemAudioAnalyzerProtocol> _analyzer;
	/*^block*/id _generator;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)connectionLostError;
-(id)init;
-(void)start;
-(void)stop;
-(id)initWithClient:(id)arg1 queue:(id)arg2 ;
-(void)removeRequest:(id)arg1 ;
-(void)_removeRequest:(id)arg1 ;
-(void)removeAllRequests;
-(void)_removeAllRequests;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(id)initWithRemoteAnalyzerGenerator:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_invalidateAnalyzer:(id)arg1 ;
-(void)_invalidateActiveAnalyzer;
-(id)_acquireSystemAudioAnalyzer;
-(void)_addRequest:(id)arg1 withObserver:(id)arg2 ;
-(void)invalidateActiveAnalyzer;
@end

