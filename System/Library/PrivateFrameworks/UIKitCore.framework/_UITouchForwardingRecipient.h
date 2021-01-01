/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIResponder;

@interface _UITouchForwardingRecipient : NSObject {

	UIResponder* fromResponder;
	UIResponder* responder;
	long long recordedPhase;
	long long autocompletedPhase;

}

@property (assign,nonatomic,__weak) UIResponder * fromResponder; 
@property (assign,nonatomic) long long recordedPhase; 
@property (assign,nonatomic) long long autocompletedPhase; 
@property (assign,nonatomic,__weak) UIResponder * responder; 
-(id)description;
-(UIResponder *)responder;
-(void)setResponder:(UIResponder *)arg1 ;
-(long long)recordedPhase;
-(long long)autocompletedPhase;
-(void)setRecordedPhase:(long long)arg1 ;
-(void)setAutocompletedPhase:(long long)arg1 ;
-(id)initWithResponder:(id)arg1 fromResponder:(id)arg2 ;
-(UIResponder *)fromResponder;
-(void)setFromResponder:(UIResponder *)arg1 ;
@end

