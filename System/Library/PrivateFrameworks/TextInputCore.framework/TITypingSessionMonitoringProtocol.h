/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TITypingSessionMonitoringProtocol <TIKeyboardInteractionProtocol>
@property (assign,nonatomic,__weak) id<TITypingSessionDelegate> delegate; 
@required
-(id<TITypingSessionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)keyboardDidSuspend;

@end

