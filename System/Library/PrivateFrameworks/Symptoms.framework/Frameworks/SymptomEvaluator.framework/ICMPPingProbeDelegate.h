/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ICMPPingProbeDelegate <NSObject>
@optional
-(void)icmpPingProbe:(id)arg1 completedIterations:(unsigned long long)arg2 successfulCount:(unsigned long long)arg3 withError:(id)arg4;
-(void)icmpPingProbe:(id)arg1 echoRequestSent:(id)arg2 success:(BOOL)arg3;
-(void)icmpPingProbe:(id)arg1 echoResponseReceived:(id)arg2 success:(BOOL)arg3;

@end

