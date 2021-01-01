/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IAMMessage, IAMMessageGroup, UIViewController, NSTimer;

@interface IAMPresentingModalMessageContext : NSObject {

	IAMMessage* _message;
	IAMMessageGroup* _messageGroup;
	UIViewController* _presentingViewController;
	NSTimer* _presentationExpirationTimer;
	/*^block*/id _presentationHandler;

}

@property (nonatomic,retain) IAMMessage * message;                                            //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) IAMMessageGroup * messageGroup;                                  //@synthesize messageGroup=_messageGroup - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) NSTimer * presentationExpirationTimer;                           //@synthesize presentationExpirationTimer=_presentationExpirationTimer - In the implementation block
@property (nonatomic,copy) id presentationHandler;                                            //@synthesize presentationHandler=_presentationHandler - In the implementation block
-(IAMMessage *)message;
-(void)setMessage:(IAMMessage *)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(IAMMessageGroup *)messageGroup;
-(void)setMessageGroup:(IAMMessageGroup *)arg1 ;
-(id)presentationHandler;
-(void)setPresentationHandler:(id)arg1 ;
-(NSTimer *)presentationExpirationTimer;
-(id)initWithMessage:(id)arg1 messageGroup:(id)arg2 presentingViewController:(id)arg3 presentationExpirationTimer:(id)arg4 presentationHandler:(/*^block*/id)arg5 ;
-(void)setPresentationExpirationTimer:(NSTimer *)arg1 ;
@end

